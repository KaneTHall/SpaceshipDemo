// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroid.h"
#include "AsteroidChild.h"
#include "Components/SphereComponent.h"
#include "SpaceshipDemo/Components/Health.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAsteroid::AAsteroid()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapComp = CreateDefaultSubobject<USphereComponent>(TEXT("Cap Comp"));
	RootComponent = CapComp;
	AsteroidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Asteroid Mesh"));
	AsteroidMesh->SetupAttachment(CapComp);
	Health =  CreateDefaultSubobject<UHealth>(TEXT("Health Component"));

}

// Called when the game starts or when spawned
void AAsteroid::BeginPlay()
{
	Super::BeginPlay();
	InitializeAsteroid();

}

// Called every frame
void AAsteroid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAsteroid::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAsteroid::Destroyed() 
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnDestroyedParticles, RootComponent->GetComponentLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnDestroyedSound, RootComponent->GetComponentLocation());
	if(CalculateAsteroidClass()>1)
	{
		SpawnedAsteroid = GetWorld()->SpawnActor<AAsteroidChild>(AsteroidChildClass,RootComponent->GetComponentLocation(),RootComponent->GetComponentRotation());
		
	}
	Destroy();
}

void AAsteroid::SetCurrentRotation(FRotator Rotation) 
{
	AsteroidMesh->SetWorldRotation(Rotation);
}

void AAsteroid::SetCurrentScale(float Scale) 
{
	this->SetActorScale3D(FVector(Scale,Scale,Scale));
}

void AAsteroid::InitializeAsteroid() 
{
	InitialRotation = FRotator(FMath::RandRange(0,360),FMath::RandRange(0,360),FMath::RandRange(0,360));
	SetCurrentRotation(InitialRotation);
	ScaleBy = FMath::RandRange(ScaleMin,ScaleLimit)/3.0f;
	SetCurrentScale(ScaleBy*10);
}

float AAsteroid::CalculateAsteroidClass() 
{
	CurrentAsteroidSize = GetActorScale3D().X;
	//UE_LOG(LogTemp,Warning,TEXT("Initial Size of Asteroid:%f \n Current Size of Asteroid:%f"),InitialAsteroidSize, GetActorScale3D().X);
	AsteroidSizeClass = ScaleBy / (InitialAsteroidSize/3);
	AsteroidSizeClass = FMath::FloorToFloat(AsteroidSizeClass+0.2f);
	//UE_LOG(LogTemp,Warning,TEXT("Asteroid Class:%f"),FMath::FloorToFloat(AsteroidSizeClass));
	return AsteroidSizeClass;
}



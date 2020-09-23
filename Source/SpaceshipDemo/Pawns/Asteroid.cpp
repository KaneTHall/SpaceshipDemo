// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroid.h"
#include "Components/SphereComponent.h"
#include "SpaceshipDemo/Components/Health.h"

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

void AAsteroid::SetCurrentRotation(FRotator Rotation) 
{
	AsteroidMesh->SetWorldRotation(Rotation);
}

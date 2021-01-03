// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceGate.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "SpaceshipDemo/Components/Health.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"

// Sets default values
ASpaceGate::ASpaceGate()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Createing the SpaceGate Component hierarchy
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
	RootComponent = SceneComp;
	SpaceGateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Space Gate Mesh"));
	SpaceGateMesh->SetupAttachment(SceneComp);
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Comp One"));
	BoxComp->SetupAttachment(SpaceGateMesh);
	CapsuleCompOne = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Sphere Comp One"));
	CapsuleCompOne->SetupAttachment(SpaceGateMesh);
	CapsuleCompTwo = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Sphere Comp Two"));
	CapsuleCompTwo ->SetupAttachment(SpaceGateMesh);
	Health =  CreateDefaultSubobject<UHealth>(TEXT("Health Component"));
	PSC = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem Component"));
	PSC->SetupAttachment(SpaceGateMesh);
}

// Called when the game starts or when spawned
void ASpaceGate::BeginPlay()
{
	Super::BeginPlay();
	BoxComp->OnComponentHit.AddDynamic(this,&ASpaceGate::ActiveGate);
}

// Called every frame
void ASpaceGate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpaceGate::Destroyed() 
{
	Super::Destroyed();
	//Play Destroyed sound and deactivate gate particles. 
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnDestroyedParticles, RootComponent->GetComponentLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnDestroyedSound, RootComponent->GetComponentLocation());
	PSC->KillParticlesForced();
	//Destroy Box collision component so Players can fly through.
	BoxComp->DestroyComponent();
}


//Collision function
void ASpaceGate::ActiveGate(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	if(ABaseBeam* Beam = Cast<ABaseBeam>(OtherActor))
	{
		Beam->Destroy();
		return;
	}
	if(APlayerShip* PlayerShip = Cast<APlayerShip>(OtherActor))
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, this->GetInstigatorController(),this, DamageType);
	}

}

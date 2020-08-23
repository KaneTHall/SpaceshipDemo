// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBeam.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABaseBeam::ABaseBeam()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BeamMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Beam Mesh Component"));
	RootComponent = BeamMesh;


	BeamMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement Component"));
	BeamMovement->InitialSpeed = MovementSpeed;
	BeamMovement->MaxSpeed = MovementSpeed;
	InitialLifeSpan = 3.0f;


}

// Called when the game starts or when spawned
void ABaseBeam::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void ABaseBeam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ABaseBeam::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	
}

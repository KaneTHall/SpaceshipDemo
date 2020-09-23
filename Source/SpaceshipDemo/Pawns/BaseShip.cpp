// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"
#include "Components/CapsuleComponent.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "SpaceshipDemo/Components/Health.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"
// Sets default values
ABaseShip::ABaseShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapComp;
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship Mesh"));
	ShipMesh->SetupAttachment(CapComp);
	ShootPointOne = CreateDefaultSubobject<USceneComponent>(TEXT("Shoot Point One"));
	ShootPointTwo = CreateDefaultSubobject<USceneComponent>(TEXT("Shoot Point Two"));
	ShootPointOne->SetupAttachment(ShipMesh);
	ShootPointTwo->SetupAttachment(ShipMesh);

	Health =  CreateDefaultSubobject<UHealth>(TEXT("Health Component"));
	
	
}

// Called when the game starts or when spawned
void ABaseShip::BeginPlay()
{
	Super::BeginPlay();
	
}

FRotator ABaseShip::GetCurrentRotation() 
{
	return CapComp->GetComponentRotation();
}

FVector ABaseShip::GetCurrentLocation() 
{
	return CapComp->GetComponentLocation();
}

void ABaseShip::SetCurrentRotation(FRotator Rotation) 
{
	CapComp->SetWorldRotation(Rotation);
}

void ABaseShip::SetCurrentLocation(FVector Location) 
{
	CapComp->SetWorldLocation(Location);
}

// Called every frame
void ABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseShip::Shoot() 
{
	UE_LOG(LogTemp,Warning, TEXT("Fire Condition success"));
	if(BeamClass)
	{
		ProjectileSpawnPointOne = ShootPointOne->GetComponentLocation();
		FVector MPosition, MDirection;
		APlayerControllerBase* PlayerController = (APlayerControllerBase*)GetWorld()->GetFirstPlayerController();
		PlayerController->DeprojectMousePositionToWorld(MPosition,MDirection);
		//UE_LOG(LogTemp,Warning, TEXT("X Position: %f & Y Position: %f"),MPosition.X,MPosition.Y);
		FVector BeamDirection = FVector(ProjectileSpawnPointOne.X+100, MPosition.Y, MPosition.Z);
		//DrawDebugLine(GetWorld(),ProjectileSpawnPointOne, BeamDirection,FColor(255,0,0,1),true ,5.f);
		ABaseBeam* Beam = GetWorld()->SpawnActor<ABaseBeam>(BeamClass,ProjectileSpawnPointOne,MDirection.Rotation());
		Beam->SetOwner(this);
	}
}

//void DrawDebugLine(const UWorld* InWorld, FVector const& LineStart, FVector const& LineEnd, FColor const& Color, bool bPersistentLines = false, float LifeTime=-1.f, uint8 DepthPriority = 0, float Thickness = 0.f);


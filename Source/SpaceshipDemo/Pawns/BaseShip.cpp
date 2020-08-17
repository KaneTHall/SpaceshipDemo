// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"
#include "Components/CapsuleComponent.h"

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



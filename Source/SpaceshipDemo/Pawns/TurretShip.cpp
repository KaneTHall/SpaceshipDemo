// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretShip.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"
#include "Kismet/GameplayStatics.h"

ATurretShip::ATurretShip() 
{
    //Adding more components to the Turretship and setting them up to work with the Enemyship hierarchy
    CannonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon Mesh"));
    CannonMesh->SetupAttachment(ShipMesh);
    ShootPointTwo = CreateDefaultSubobject<USceneComponent>(TEXT("Shoot Point Two"));
    ShootPointTwo->SetupAttachment(ShipMesh);
}

void ATurretShip::Shoot() 
{
    //Simmilar shoot function uses Super::Shoot() to call the same Shoot function as EnemyShip and does simmilar functonaility to spawn a second bullet and fire from ShootPointTwo
    Super::Shoot();
    UE_LOG(LogTemp,Warning,TEXT("Turret Shoot Test"));
    FVector PPosition, PDirection;
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	FVector BeamDirection = PlayerPawn->GetActorLocation();
    FRotator NewShipRotation = FRotator(GetCurrentRotation().Roll,(GetCurrentLocation()-BeamDirection).Rotation().Pitch,  GetCurrentRotation().Yaw);
    SetCurrentRotation(NewShipRotation);
	ABaseBeam* Beam = GetWorld()->SpawnActor<ABaseBeam>(BeamClass,ShootPointTwo->GetComponentLocation(),(BeamDirection-ShootPointTwo->GetComponentLocation()).Rotation());
	Beam->SetOwner(this);
}

void ATurretShip::Destroyed() 
{
    Super::Destroyed();

}


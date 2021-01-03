// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShip.h"
#include "AIController.h"
#include "GameFramework/Actor.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"
#include "SpaceshipDemo/PlayerControllers/AIPlayerController.h"
#include "SpaceshipDemo/Components/ItemDrop.h"
#include "Kismet/GameplayStatics.h"


AEnemyShip::AEnemyShip() 
{
    //Adding more components to the Enemyship and setting them up to work with the Baseship hierarchy
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
    ItemDrop = CreateDefaultSubobject<UItemDrop>(TEXT("Item Drop Component"));
}

void AEnemyShip::BeginPlay() 
{
    Super::BeginPlay();
    SetShipRotation();
}

void AEnemyShip::Destroyed() 
{
    Super::Destroyed();
    Destroy();
}

void AEnemyShip::BarrelRollRight() 
{
    Super::BarrelRollRight();
    SetShipRotation();
}


void AEnemyShip::Tick(float DeltaTime) 
{
    Super::Tick(DeltaTime);

}

void AEnemyShip::Shoot() 
{
    Super::Shoot();
  	ProjectileSpawnPoint = ShootPoint->GetComponentLocation();
	FVector PPosition, PDirection;
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
	FVector BeamDirection = PlayerPawn->GetActorLocation();
	//DrawDebugLine(GetWorld(),ProjectileSpawnPointOne, BeamDirection,FColor(255,0,0,1),true ,5.f);
	ABaseBeam* Beam = GetWorld()->SpawnActor<ABaseBeam>(BeamClass,ProjectileSpawnPoint,(BeamDirection-ProjectileSpawnPoint).Rotation());
	Beam->SetOwner(this);
}

void AEnemyShip::SetShipRotation() 
{
    //Set ship to face the player
     APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    FRotator PlayerRotation = PlayerPawn->GetActorRotation();
    EnemyRotation = GetCurrentRotation();
    EnemyRotation.Yaw = PlayerRotation.Yaw-180;
    SetCurrentRotation(EnemyRotation);
}

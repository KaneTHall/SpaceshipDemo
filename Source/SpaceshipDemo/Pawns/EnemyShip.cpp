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
    FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
    ItemDrop = CreateDefaultSubobject<UItemDrop>(TEXT("Item Drop Component"));

}

void AEnemyShip::BeginPlay() 
{
    Super::BeginPlay();
}

void AEnemyShip::Destroyed() 
{
    Super::Destroyed();
    Destroy();
}


void AEnemyShip::Tick(float DeltaTime) 
{
    Super::Tick(DeltaTime);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    FRotator PlayerRotation = PlayerPawn->GetActorRotation();
    EnemyRotation = GetCurrentRotation();
    EnemyRotation.Yaw = PlayerRotation.Yaw-180;
    SetCurrentRotation(EnemyRotation);
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


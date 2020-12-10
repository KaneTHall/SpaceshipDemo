// Copyright Epic Games, Inc. All Rights Reserved.


#include "SpaceshipDemoGameModeBase.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"
#include "SpaceshipDemo/Pawns/Asteroid.h"
#include "SpaceshipDemo/Pawns/SpaceGate.h"


void ASpaceshipDemoGameModeBase::ActorHasDied(AActor* DeadActor) 
{
    if(APlayerShip* PlayerShip = Cast<APlayerShip>(DeadActor))
    {
        PlayerShip->Destroyed();

        if(PlayerControllerRef)
        {
            PlayerControllerRef->SetPlayerEnabledState(false);
        }
    }
    else if(AEnemyShip* DeadEnemyShip = Cast<AEnemyShip>(DeadActor))
    {
        SetScore(25);
        DeadEnemyShip->Destroyed();
    }
    else if(AAsteroid* DeadAsteroid = Cast<AAsteroid>(DeadActor))
    {
        SetScore(10);
        DeadAsteroid->Destroyed();
    }
    else if(ASpaceGate* DeadSpaceGate = Cast<ASpaceGate>(DeadActor))
    {
        SetScore(50);
        DeadSpaceGate->Destroyed();

    }
     	UE_LOG(LogTemp, Warning, TEXT("A Pawn Died"));
     	
}

void ASpaceshipDemoGameModeBase::BeginPlay() 
{
    Super::BeginPlay();
    PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this,0));
}

void ASpaceshipDemoGameModeBase::SetScore(int X) 
{
    APlayerShip* ControlledShip = Cast<APlayerShip>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
    ControlledShip->AddScore(X);
}

bool ASpaceshipDemoGameModeBase::SpawnSafe() 
{
    int Count = 0;
    for(AEnemyShip* EnemyShip:TActorRange<AEnemyShip>(GetWorld()))
    {
        Count++;
        if (Count>=EnemyShipMax)
        {
            UE_LOG(LogTemp, Error, TEXT("Too many Ships are spawned. Can't spawn anymore"));
            return false;
        }
    }
    UE_LOG(LogTemp, Error, TEXT("Spawn Check Passed"));
    return true;
}

void ASpaceshipDemoGameModeBase::Win() 
{
    PlayerControllerRef->GameHasEnded(PlayerControllerRef->GetPawn(),true);
    GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}

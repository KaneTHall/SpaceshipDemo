// Copyright Epic Games, Inc. All Rights Reserved.


#include "SpaceshipDemoGameModeBase.h"
#include "EngineUtils.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemoGameInstance.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"
#include "SpaceshipDemo/Pawns/Asteroid.h"
#include "SpaceshipDemo/Pawns/SpaceGate.h"

void ASpaceshipDemoGameModeBase::ActorHasDied(AActor* DeadActor) 
{
    //Checks if Player is the dead actor
    if(APlayerShip* PlayerShip = Cast<APlayerShip>(DeadActor))
    {
        PlayerShip->Destroyed();
        USpaceshipDemoGameInstance* GameInstanceRef = Cast<USpaceshipDemoGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
        if(PlayerControllerRef)
        {
            //PlayerControllerRef->SetPlayerEnabledState(false);
            //Restart if Lives!=0
            if(PlayerShip->Lives>1)
            {
                PlayerShip->Lives -= 1;
                GameInstanceRef->UpdatedLives = PlayerShip->Lives;
                UE_LOG(LogTemp, Warning, TEXT("%i Number of lives remaining"),GameInstanceRef->UpdatedLives);
                Restart();
            }
            //If Lives are 0 then set Lives back to 3 and GameOver
            else
            {
                GameInstanceRef->UpdatedLives = 3;
                GameOver();
            }
        }
    }
    //If Player is not dead but another actor then assign score for each dead actor
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

void ASpaceshipDemoGameModeBase::GameOver() 
{
      UGameplayStatics::OpenLevel(this, "Menu", false);
}

void ASpaceshipDemoGameModeBase::Restart() 
{
    UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

//Checks all EnemyShips in world, returns false if too many.
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

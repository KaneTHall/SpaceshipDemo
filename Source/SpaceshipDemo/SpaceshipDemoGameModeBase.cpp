// Copyright Epic Games, Inc. All Rights Reserved.


#include "SpaceshipDemoGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"
#include "SpaceshipDemo/Pawns/Asteroid.h"


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
        DeadEnemyShip->Destroyed();
    }
    else if(AAsteroid* DeadAsteroid = Cast<AAsteroid>(DeadActor))
    {
        DeadAsteroid->Destroyed();
    }
     	UE_LOG(LogTemp, Warning, TEXT("A Pawn Died"));
     	
}

void ASpaceshipDemoGameModeBase::BeginPlay() 
{
    Super::BeginPlay();
    
    PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this,0));
}

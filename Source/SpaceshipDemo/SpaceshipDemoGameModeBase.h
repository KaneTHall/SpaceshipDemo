// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceshipDemoGameModeBase.generated.h"

/**
 * GameModeBase Class
 * Class which contains all member variables and functions for the basic Gameplay rules. 
 */

class APlayerShip;
class APlayerControllerBase;

UCLASS()
class SPACESHIPDEMO_API ASpaceshipDemoGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	private:
	APlayerControllerBase* PlayerControllerRef;
	//Function that sets the score to be added.
	void SetScore(int X);
	//Set the total number of EnemyShips allowed to Spawn
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	int EnemyShipMax = 4;
	//Ends the game - Called when Lives = 0
	void GameOver();
	//Reloads the game - Called when player loses a life
	void Restart();
	public:
	//Called when an Actor in the game has been Destroyed
	void ActorHasDied(AActor* DeadActor);
	//Is it safe for an Enemy to spawn?
	bool SpawnSafe();
	//Return Player Win
	void Win();
	
	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};

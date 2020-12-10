// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceshipDemoGameModeBase.generated.h"

/**
 * 
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	int EnemyShipMax = 4;

	public:
	void ActorHasDied(AActor* DeadActor);
	bool SpawnSafe();
	void Win();
	
	protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};

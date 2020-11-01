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


	public:
	
	void ActorHasDied(AActor* DeadActor);

	protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};

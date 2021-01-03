// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SpaceshipDemoGameInstance.generated.h"

/**
 * GameInstance class - To Save variable values across changing of levels. 
 */
UCLASS()
class SPACESHIPDEMO_API USpaceshipDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	private:

	public:
	//Stores Lives value
	int UpdatedLives = 3;

	protected:
};

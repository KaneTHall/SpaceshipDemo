// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BonusScoreItem.generated.h"


/**
 * 
 */
class APlayerShip;

UCLASS()
class SPACESHIPDEMO_API ABonusScoreItem : public ABaseItem
{
	GENERATED_BODY()

	private:
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	int ScoreBonus = 100;

	public:

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Effect(APlayerShip* PlayerShip) override;
	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BonusScoreItem.generated.h"


/**
 * BonusScoreItem Class - Class for an object that provides a score boost to the player
 * Inherits from ABaseItem
 * 
 */
class APlayerShip;

UCLASS()
class SPACESHIPDEMO_API ABonusScoreItem : public ABaseItem
{
	GENERATED_BODY()

	private:
	//ScoreBonus - The amount of score boost to apply when the item is picked up
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	int ScoreBonus = 100;

	public:

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Override the Effect function and apply Bonus score specific method. Called when player overlaps with item
	virtual void Effect(APlayerShip* PlayerShip) override;
	
	
};

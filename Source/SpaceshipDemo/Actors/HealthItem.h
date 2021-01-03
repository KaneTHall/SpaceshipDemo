// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "HealthItem.generated.h"

/**
 * HealthItem Class - Class for an object that applies a health increase when the item is picked up
 * Inherits from BaseItem Class
 */
class APlayerShip;

UCLASS()
class SPACESHIPDEMO_API AHealthItem : public ABaseItem
{
	GENERATED_BODY()

	private:
	//Health Increase - Adjust this value to determine how much health should be given to the player when the Health item is picked up
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	float HealthIncrease = 50.0f;


	public:

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Effect function overidden from ABaseItem - called when player overlaps with item (increases health)
	virtual void Effect(APlayerShip* PlayerShip) override;
	
};

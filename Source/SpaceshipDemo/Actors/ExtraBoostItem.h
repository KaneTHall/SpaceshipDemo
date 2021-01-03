// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "ExtraBoostItem.generated.h"

/**
 * ExtraBoostItem Class - Class for an object that increases the number of boosts when the item is picked up
 * Inherits from BaseItem Class
 */
class APlayerShip;
UCLASS()
class SPACESHIPDEMO_API AExtraBoostItem : public ABaseItem
{
	GENERATED_BODY()
	
	private:
	//Variable to hold how much to increase the number of boosts by.
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	int BoostNum = 1;

	public:

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Effect function overidden from ABaseItem - called when player overlaps with item                                                       
	virtual void Effect(APlayerShip* PlayerShip) override;
};

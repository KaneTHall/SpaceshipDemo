// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "HealthItem.generated.h"

/**
 * 
 */
class APlayerShip;

UCLASS()
class SPACESHIPDEMO_API AHealthItem : public ABaseItem
{
	GENERATED_BODY()

	private:
	UPROPERTY(EditAnywhere, Category = "Item Properties")
	float HealthIncrease = 50.0f;


	public:

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Effect(APlayerShip* PlayerShip) override;
	
};

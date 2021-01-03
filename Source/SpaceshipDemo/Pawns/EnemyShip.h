// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "EnemyShip.generated.h"

class AIPlayerController;
class UFloatingPawnMovement;
class UItemDrop;
/**
 * EnemyShip Class - Inherits from Baseclass
 * All EnemyShip specific member variables and functions used, declared and implemented here. 
 */
UCLASS()
class SPACESHIPDEMO_API AEnemyShip : public ABaseShip
{
	GENERATED_BODY()

	private:
	//Enemy specific components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UFloatingPawnMovement* FloatingPawnMovement;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UItemDrop* ItemDrop;

	FRotator EnemyRotation;
	//Used to set Enemy ship rotation, called after a Barrelroll to ensure ship is facing correct direction.
	void SetShipRotation();

	public:
	AEnemyShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Enemy Shoot function, used to create behaviour tree task where it will be called
	virtual void Shoot() override;
	// Called when an EnemyShip has been destroyed
	virtual void Destroyed() override;
	// Enemy Barrel Roll function used to create behaviour tree task where it will be called
	virtual void BarrelRollRight() override; 
	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};

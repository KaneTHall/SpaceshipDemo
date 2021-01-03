// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "TurretShip.generated.h"

/** 
 * TurretShip Class - Inherits from EnemyShip Class
 * Extends the Enemyship class for TurretShips. 
 * All specific member variables and functions are stored here
 */
UCLASS()
class SPACESHIPDEMO_API ATurretShip : public AEnemyShip
{
	GENERATED_BODY()
private:
	//TurretShip Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* CannonMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPointTwo;
public:
	//Constructor
	ATurretShip();
	//Shoot function - called in behavior tree - (like in EnemyShip)
	virtual void Shoot() override;
	//Called when TurretShip has been destroyed
	virtual void Destroyed() override;

protected:


};

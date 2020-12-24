// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyShip.h"
#include "TurretShip.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHIPDEMO_API ATurretShip : public AEnemyShip
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* CannonMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPointTwo;

public:
	ATurretShip();
	virtual void Shoot() override;
	virtual void Destroyed() override;

protected:


};

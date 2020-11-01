// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "EnemyShip.generated.h"

class UFloatingPawnMovement;
class AIPlayerController;
/**
 * 
 */
UCLASS()
class SPACESHIPDEMO_API AEnemyShip : public ABaseShip
{
	GENERATED_BODY()

	private:
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UFloatingPawnMovement* FloatingPawnMovement;
	FRotator EnemyRotation;

	public:
	AEnemyShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//virtual void Tick(float DeltaTime) override;
	virtual void Shoot() override;
	virtual void Destroyed() override;

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
};

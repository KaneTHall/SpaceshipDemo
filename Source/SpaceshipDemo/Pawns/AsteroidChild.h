// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Asteroid.h"
#include "AsteroidChild.generated.h"

class UItemDrop;
/**
 * AsteroidChild Class - Inherits from Asteroid Class 
 * 
 */
UCLASS()
class SPACESHIPDEMO_API AAsteroidChild : public AAsteroid
{
	GENERATED_BODY()
	private:
	//ItemDrop Component - Causes Item to spawn when Destroyed
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UItemDrop* ItemDrop;
	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	public:
	// Sets default values for this pawn's properties
	AAsteroidChild();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

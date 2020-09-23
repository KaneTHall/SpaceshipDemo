// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShip.generated.h"

class UCapsuleComponent;
class UHealth;
class ABaseBeam;

UCLASS()
class SPACESHIPDEMO_API ABaseShip : public APawn
{
	GENERATED_BODY()

private:
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPointOne;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPointTwo;
	//Variables
	FVector ProjectileSpawnPointOne;
	FVector ProjectileSpawnPointTwo;
	FRotator ProjectileSpawnRotation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Beam Properties", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABaseBeam> BeamClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;


public:
	// Sets default values for this pawn's properties
	ABaseShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Shoot();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FRotator GetCurrentRotation();
	FVector GetCurrentLocation();
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentLocation(FVector Location);


};

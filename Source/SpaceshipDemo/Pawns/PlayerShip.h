// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */

class USpringArmComponent;
class UCameraComponent;
class ABaseBeam;
UCLASS()
class SPACESHIPDEMO_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()
	
	private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCam;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MoveSpeed = 500.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Acceleration = 50.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RotationSpeed = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float BarrelRollSpeed =1000.0f;

	FVector MoveDirection;	
	FRotator RotationX;
	FQuat RotateDirectionX;
	FRotator RotationY;
	FQuat RotateDirectionY;
	FRotator Tilt;
	FRotator OutOfBoundsRotator;
	FRotator BarrelRotation;
	FRotator InitialRotation = FRotator(0,0,0);
	FVector ProjectileSpawnPointOne;
	FVector ProjectileSpawnPointTwo;
	FRotator ProjectileSpawnRotation;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Beam Properties", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABaseBeam> BeamClass;
	FVector CruiseVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float CruiseSpeed = 50;

	// float variable to hold time taken since damaged
	float DamagedTimer = 0;
	// float variable to hold time it takes before player can be damaged again
	float DamagedTimerLength = 1.5f;
	//float variable to hold time taken since last hidden appearance 
	float DamagedActorHiddenTime = 0;
	void Move(float Value);
	void RotateX(float Value);
	void RotateY(float Value);
	void Strafe(float Value);
	void BarrelRollRight();
	void BarrelRollLeft();
	void Boost();

	
	FTimerHandle TimerHandle;
	float RollRate = 0.01f;
	float RollTime = 0;
	float RollMaxTime = 45;

	APlayerController* PtrPlayerController;

	
	public:
	//Constructor
	APlayerShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Shoot function
	virtual void Shoot() override;

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

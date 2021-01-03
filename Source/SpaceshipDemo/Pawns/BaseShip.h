// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShip.generated.h"

class UCapsuleComponent;
class UHealth;
class ABaseBeam;

/** 
 *  Base Class for the Ship Pawn
 *  Inherited by the Player Ship Pawn
 *  Inherited by the Enemy Ships 
 *  Class holds each pawns shared functions and variables
*/
UCLASS()
class SPACESHIPDEMO_API ABaseShip : public APawn
{
	GENERATED_BODY()

private:
	/** Health Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;
	//Damage for Crashed UFunction
	TSubclassOf<UDamageType> DamageType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
	float Damage = 10;
	/** USoundBase for Pawn Sounds*/ 
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* ShootSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnDestroyedSound;
	/** UParticleSystems for Pawn Particles effects */ 
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnDestroyedParticles;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnRollParticles;
	/** Crashed UFUnction - Called on Pawn collision with another collider*/ 
	UFUNCTION()
	void Crashed(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	/** IsDead - Returns true when Pawn health Current Health is 0*/ 
	bool IsDead();
	/** Rotator for ProjectileSpawnPoint*/
	FRotator ProjectileSpawnRotation;

public:
	// Sets default values for this pawn's properties
	ABaseShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/** Shoot function - called to shoot beam actor*/ 
	virtual void Shoot();
	/** bool to set deflect property*/ 
	bool bDeflect;
	/** BarrelRoll function - called when ship needs to perform a barrel roll*/
	virtual void BarrelRollRight();
	virtual void BarrelRollLeft();
	/** Add health function - called to add health to the ships current health*/ 
	void AddHealth(float HealthAmount);
	/** Get Health function - returns ships health*/ 
	int GetHealth() const;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/** Setters for Ships world rotation and location*/ 
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentLocation(FVector Location);
	/** Getters for Ships world rotation and location*/ 
	FRotator GetCurrentRotation();
	FVector GetCurrentLocation();
	/** Pawn protected components*/ 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPoint;
	/** FVector position of Shootpoint*/ 
	FVector ProjectileSpawnPoint;
	/** bool - Has pawn taken damage? */ 
	bool bTakenDamage = false; 
	/** Subclass for the Blueprint of the Beam Actor*/ 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Beam Properties", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABaseBeam> BeamClass;
	/** Barrel roll properties*/ 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RotationSpeed = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float BarrelRollSpeed =1000.0f;
	FRotator BarrelRotation;
	FTimerHandle TimerHandle;
	float RollRate = 0.01f;
	float RollTime = 0;
	float RollMaxTime = 45;
	//Destroyed - Function called when Actor is destroyed
	virtual void Destroyed() override;
	/** UFunction - Called in the HUD blueprint to display health bar*/ 
	UFUNCTION(BlueprintCallable, Category = Health)
	float HealthPercent() const;

};

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
	//Variables
	FRotator ProjectileSpawnRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;
	TSubclassOf<UDamageType> DamageType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
	float Damage = 10;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* ShootSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnDestroyedSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnDestroyedParticles;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnRollParticles;
	UFUNCTION()
	void Crashed(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	bool IsDead();
	

	
public:
	// Sets default values for this pawn's properties
	ABaseShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Shoot();
	bool bDeflect;
	virtual void BarrelRollRight();
	virtual void BarrelRollLeft();
	void AddHealth(float HealthAmount);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentLocation(FVector Location);
	FRotator GetCurrentRotation();
	FVector GetCurrentLocation();
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPoint;
	FVector ProjectileSpawnPoint;
	bool bTakenDamage = false; 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Beam Properties", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABaseBeam> BeamClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RotationSpeed = 100.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float BarrelRollSpeed =1000.0f;
	FRotator BarrelRotation;
	FTimerHandle TimerHandle;
	float RollRate = 0.01f;
	float RollTime = 0;
	float RollMaxTime = 45;
	virtual void Destroyed() override;
	UFUNCTION(BlueprintCallable, Category = Health)
	float HealthPercent() const;
};

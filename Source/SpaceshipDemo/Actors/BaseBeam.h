// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBeam.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

/**
 * Base Beam Class - Class for Beam Actor (Projectile) will be created when a ship calls the Shoot() function
 * All properties and member variables, functions involving the Beam class below.
 */

UCLASS()
class SPACESHIPDEMO_API ABaseBeam : public AActor
{
	GENERATED_BODY()
private:
//Beam component
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UProjectileMovementComponent* BeamMovement;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
USphereComponent* SphereComp;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UStaticMeshComponent* BeamMesh;
UPROPERTY(EditDefaultsOnly, Category = "Damage")
TSubclassOf<UDamageType> DamageType;
//The ammount of damage the Beam applies when it hits a target. Adjust to change the damage
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
float Damage = 10;
//Speed of the beam - Adjust to change how fast the beam will move when spawned
float MovementSpeed = 1000;
//Collision UFunction called when Beam hits another collider
UFUNCTION()
void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
//Particle and Sound effects for beam
UPROPERTY(EditAnywhere, Category = "Effects")
UParticleSystem* OnHitParticles;
UPROPERTY(EditAnywhere, Category = "Effects")
USoundBase* OnHitSound;
UPROPERTY(EditAnywhere, Category = "Effects")
USoundBase* OnRicochetSound; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	ABaseBeam();

};

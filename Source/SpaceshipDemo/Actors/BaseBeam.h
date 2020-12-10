// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBeam.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class SPACESHIPDEMO_API ABaseBeam : public AActor
{
	GENERATED_BODY()

private:


UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UProjectileMovementComponent* BeamMovement;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
USphereComponent* SphereComp;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UStaticMeshComponent* BeamMesh;
UPROPERTY(EditDefaultsOnly, Category = "Damage")
TSubclassOf<UDamageType> DamageType;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
float Damage = 10;
float MovementSpeed = 1000;

UFUNCTION()
void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
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

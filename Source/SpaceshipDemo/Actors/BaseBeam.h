// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseBeam.generated.h"

class UProjectileMovementComponent;

UCLASS()
class SPACESHIPDEMO_API ABaseBeam : public AActor
{
	GENERATED_BODY()

private:
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UProjectileMovementComponent* BeamMovement;
UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
UStaticMeshComponent* BeamMesh;


float MovementSpeed = 1300;


UFUNCTION()
void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	ABaseBeam();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

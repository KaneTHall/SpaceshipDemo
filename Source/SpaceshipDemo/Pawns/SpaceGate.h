// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpaceGate.generated.h"

class UCapsuleComponent;
class UBoxComponent;
class UHealth;

/**
 * SpaceGate Class
 * Object that will destroy player if they don't destroy it before they pass through. 
 */

UCLASS()
class SPACESHIPDEMO_API ASpaceGate : public APawn
{
	GENERATED_BODY()

private:
	//SpaceGate  Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleCompOne;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleCompTwo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SpaceGateMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnDestroyedSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnDestroyedParticles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* PSC;
	//Collision UFUnction - Called when Collider collides with another collider
	UFUNCTION()
	void ActiveGate(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	TSubclassOf<UDamageType> DamageType;
	//Damage that is applied on collisiion
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
	float Damage = 200;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this pawn's properties
	ASpaceGate();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called when SpaceGate has been desroyed
	virtual void Destroyed() override;

};

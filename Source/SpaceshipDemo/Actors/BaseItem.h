// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseItem.generated.h"


class UCapsuleComponent;
class APlayerShip;
/**
 * BaseItem Class - This class is for the Item Actors. Playership is able to pick up Items which inherit from this class.
 * Inherited by BonusScoreItem Class
 * Inherited by the ExtraBoostItem Class
 * Inherited by the HealthItem Class
*/

UCLASS()
class SPACESHIPDEMO_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
private:
	//Base Item Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	//Pick up sound
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnPickupSound;
	//OnComponentOverlap function - Called when an Actor overlaps with this Actor
	UFUNCTION()
	void ApplyEffect(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Effect(APlayerShip* PlayerShip);
	//Particle Systems for the item effecxt
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* ItemEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* PSC;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComp;
	//Called when Actor is destroyed.
	virtual void Destroyed() override;
public:	
	// Sets default values for this actor's properties
	ABaseItem();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

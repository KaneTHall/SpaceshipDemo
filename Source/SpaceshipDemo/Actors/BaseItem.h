// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseItem.generated.h"


class UCapsuleComponent;
class APlayerShip;

UCLASS()
class SPACESHIPDEMO_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
private:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnPickupSound;
	void Spawn();
	//OnComponentOverlap function
	UFUNCTION()
	void ApplyEffect(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Effect(APlayerShip* PlayerShip);
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* ItemEffect;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* PSC;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComp;
	virtual void Destroyed() override;
//	UPrimitiveComponent OnComponentBeginOverlap, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult
public:	
	// Sets default values for this actor's properties
	ABaseItem();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

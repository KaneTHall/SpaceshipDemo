// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"

class ASpaceshipDemoGameModeBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACESHIPDEMO_API UHealth : public UActorComponent
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Health Properties")
	float MaxHealth = 100.0f;
	float CurrentHealth = 0.0f;

	ASpaceshipDemoGameModeBase* GameModeRef;

public:	
	// Sets default values for this component's properties
	UHealth();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
		
};

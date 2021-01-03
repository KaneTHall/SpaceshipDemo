// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"

class ASpaceshipDemoGameModeBase;

/**
 *  Health Component - ActorComponent that applies a health system to each Actor
 * 
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACESHIPDEMO_API UHealth : public UActorComponent
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, Category = "Health Properties")
	float MaxHealth = 100.0f;
	ASpaceshipDemoGameModeBase* GameModeRef;

public:	
	// Sets default values for this component's properties
	UHealth();
	UPROPERTY(EditAnywhere, Category = "Health Properties")
	float CurrentHealth = 0.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	//UFunction called when Actor this component is attached to takes damage
	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	
		
};

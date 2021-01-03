// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemDrop.generated.h"


class ABaseItem;
class AHealthItem;
class ABonusScoreItem;
class AExtraBoostItem;

/**
 * ItemDrop Component class - Component that drops an Item Actor when the Actor this component is attached to is destroyed. 
 * Member variables and functions for classes.
 * */

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACESHIPDEMO_API UItemDrop : public UActorComponent
{
GENERATED_BODY()
private:
AActor* MyOwner;
//Called when this component is destroyed
void OnComponentDestroyed(bool bDestroyingHierarchy) override;
//Called when OnCompomentDestroyed() is called. - Spawns an Item actor
void SpawnItem(int ItemSelect);
//ItemSelector variable - Value this is assigned to determines the Item spawned.
int ItemSelector;
FVector OwnerLocation;
FRotator OwnerRotation;
protected:
// Called when the game starts
virtual void BeginPlay() override;

public:	
	// Sets default values for this component's properties
	UItemDrop();	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//Item Drop Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AHealthItem> HealthItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABonusScoreItem> BonusScoreItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AExtraBoostItem> ExtraBoostItemClass;


		
};

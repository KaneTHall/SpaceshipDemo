// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemDrop.generated.h"


class ABaseItem;
class AHealthItem;
class ABonusScoreItem;
class AExtraBoostItem;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACESHIPDEMO_API UItemDrop : public UActorComponent
{
	GENERATED_BODY()
private:
AActor* MyOwner;
void OnComponentDestroyed(bool bDestroyingHierarchy) override;
void SpawnItem(int ItemSelect);
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AHealthItem> HealthItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<ABonusScoreItem> BonusScoreItemClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AExtraBoostItem> ExtraBoostItemClass;


		
};

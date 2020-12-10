// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDrop.h"
#include "SpaceshipDemo/Actors/BaseItem.h"
#include "SpaceshipDemo/Actors/HealthItem.h"
#include "SpaceshipDemo/Actors/BonusScoreItem.h"
#include "SpaceshipDemo/Actors/ExtraBoostItem.h"
// Sets default values for this component's properties
UItemDrop::UItemDrop()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UItemDrop::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UItemDrop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UItemDrop::OnComponentDestroyed(bool bDestroyingHierarchy) 
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
	
	UE_LOG(LogTemp, Error, TEXT("Current Location = %s"),*OwnerLocation.ToString());
	ItemSelector = FMath::RandRange(0,5);
	SpawnItem(ItemSelector);
}

void UItemDrop::SpawnItem(int ItemSelect) 
{
	UE_LOG(LogTemp, Error, TEXT("Item Select = %i"),ItemSelect);
	if(GetWorld())
	{
		switch (ItemSelect)
		{
			case 0:
			{
				AHealthItem* HealthItem = GetWorld()->SpawnActor<AHealthItem>(HealthItemClass, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
				break;
			}
			case 1:
			{
				ABonusScoreItem* BonusScoreItem = GetWorld()->SpawnActor<ABonusScoreItem>(BonusScoreItemClass,GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
				break;
			}
			case 2:
			{
				AExtraBoostItem* ExtraBoostItem = GetWorld()->SpawnActor<AExtraBoostItem>(ExtraBoostItemClass,GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation());
				break;
			}
			default:
			{
				//do nothing.
				break;
			}
		}
	}
}



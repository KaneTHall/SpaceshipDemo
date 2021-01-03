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
}


// Called every frame
void UItemDrop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UItemDrop::OnComponentDestroyed(bool bDestroyingHierarchy) 
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
	/** DEBUG LINE
	 * 	UE_LOG(LogTemp, Error, TEXT("Current Location = %s"),*OwnerLocation.ToString()); - Prints the Actors location this component is attached to.
	 * 
	*/
	//Randomize the Itemselector value
	ItemSelector = FMath::RandRange(0,5);
	//Call Spawn Item function - Item Selector determines the item to spawn
	SpawnItem(ItemSelector);
}

void UItemDrop::SpawnItem(int ItemSelect) 
{
	/** DEBUG LINE 
	 * UE_LOG(LogTemp, Error, TEXT("Item Select = %i"),ItemSelect); - Prints the ItemSelect number.
	*/
	if(GetWorld())
	{
		//Switch statement the selects the case of Item to spawn.
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



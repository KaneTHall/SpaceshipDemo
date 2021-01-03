// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_UpdatePlayerLocation.generated.h"

/**
 * UBTService_UpdatePlayerLocation Class - Used to create a Blackboard Service that updates every tick where the player is.
 */
UCLASS()
class SPACESHIPDEMO_API UBTService_UpdatePlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
	private:
	
	public:
	//Constructor
	UBTService_UpdatePlayerLocation();

	protected:
	//Called every tick
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

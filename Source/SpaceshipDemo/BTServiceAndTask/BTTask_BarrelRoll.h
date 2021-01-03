// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_BarrelRoll.generated.h"

/**
 * Blackboard Task Node to call the BarrelRoll function
 */
UCLASS()
class SPACESHIPDEMO_API UBTTask_BarrelRoll : public UBTTaskNode
{
	GENERATED_BODY()
	
	private:

	public:
	// Constructor
	UBTTask_BarrelRoll();

	protected:
	// Called every tick
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};


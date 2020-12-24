// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_BarrelRoll.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHIPDEMO_API UBTTask_BarrelRoll : public UBTTaskNode
{
	GENERATED_BODY()
	
	private:

	public:
	UBTTask_BarrelRoll();

	protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};


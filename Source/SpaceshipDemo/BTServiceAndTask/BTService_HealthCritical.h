// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_HealthCritical.generated.h"

/**
 * 
 */
UCLASS()
class SPACESHIPDEMO_API UBTService_HealthCritical : public UBTService_BlackboardBase
{
	GENERATED_BODY()

	private:

	bool bHealthCritical = false;
	int CriticalThreshold = 15;;

	public:
	UBTService_HealthCritical();

	protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};

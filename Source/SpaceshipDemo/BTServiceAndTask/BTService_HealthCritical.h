// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_HealthCritical.generated.h"

/**
 * UBTService_HealthCritical Class - Used to create a Blackboard Service that returns true when the AIOwner health is low
 * 
 */
UCLASS()
class SPACESHIPDEMO_API UBTService_HealthCritical : public UBTService_BlackboardBase
{
	GENERATED_BODY()

	private:
	//Health Critical = false changes to true if AIOwner Health is below critical threshold
	bool bHealthCritical = false;
	//What health is considered critical
	int CriticalThreshold = 15;;

	public:
	UBTService_HealthCritical();

	protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};

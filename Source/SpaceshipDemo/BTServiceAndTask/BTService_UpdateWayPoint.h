// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_UpdateWayPoint.generated.h"

/**
 * 
 */


UCLASS()
class SPACESHIPDEMO_API UBTService_UpdateWayPoint : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
	private:
	TArray<FVector> AIWayPoints(FVector PlayerLocation);
	float WayPointTimer =10;
	float DistanceFromPlayer = 1000;
	FVector NextWayPoint;

	public:
	UBTService_UpdateWayPoint();

	protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	

};

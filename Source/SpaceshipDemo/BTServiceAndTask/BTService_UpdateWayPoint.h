// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_UpdateWayPoint.generated.h"

/**
 Blackboard Service Update WayPoints Class - Returns a new FVector for the AIPlayerContrtroller to move the pawn to. 
 */


UCLASS()
class SPACESHIPDEMO_API UBTService_UpdateWayPoint : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
	private:
	//TArray to store FVectors (Waypoints)
	TArray<FVector> AIWayPoints(FVector PlayerLocation);
	float WayPointTimer =10;
	float DistanceFromPlayer = 1000;
	FVector NextWayPoint;

	public:
	//Constructor
	UBTService_UpdateWayPoint();

	protected:
	// Called every tick
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	

};

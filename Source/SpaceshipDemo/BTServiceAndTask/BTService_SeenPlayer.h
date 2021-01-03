// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_SeenPlayer.generated.h"

/**
 *  UBTService_SeenPlayer Class - Used to create a Blackboard Service that returns true when the Player hasn't moved passed the AIOwner
 */
UCLASS()
class SPACESHIPDEMO_API UBTService_SeenPlayer : public UBTService_BlackboardBase
{
	GENERATED_BODY()

	private:

	bool bSeenPlayer;

	public:

	UBTService_SeenPlayer();

	protected:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};

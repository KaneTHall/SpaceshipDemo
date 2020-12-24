// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_SeenPlayer.generated.h"

/**
 * 
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

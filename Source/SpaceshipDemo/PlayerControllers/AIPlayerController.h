// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIPlayerController.generated.h"

/**
 * PlayerController class for AI
 */
UCLASS()
class SPACESHIPDEMO_API AAIPlayerController : public AAIController
{
	GENERATED_BODY()
	
	private:
	//float AcceptanceRadius = 200;
	//BehaviorTree assign in Editor
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehaviorTree;
	FString Reason = "Pawn Died";

	public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

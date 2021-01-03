// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoalWinCondition.generated.h"

class UBoxComponent;
class ASpaceshipDemoGameModeBase;

/**
 * GoalWinCondition Class - Class for an object that triggers win condition upon overlap (A goal for the player to reach)
 * 
*/
UCLASS()
class SPACESHIPDEMO_API AGoalWinCondition : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxComp;
	//OnComponentOverlap function
	UFUNCTION()
	void Goal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	ASpaceshipDemoGameModeBase* GameModeRef;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Sets default values for this actor's properties
	AGoalWinCondition();
};

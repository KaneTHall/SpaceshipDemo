// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyShip_Spawner.generated.h"

class AEnemyShip;
class UBoxComponent;
class ASpaceshipDemoGameModeBase;

/**
 * EnemyShip_Spawner Class - Object used to trigger enemies to spawn upon overlapp 
 * 
*/

UCLASS()
class SPACESHIPDEMO_API AEnemyShip_Spawner : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxComp;
	//OnComponentOverlap function called when Actor overlaps with this object
	UFUNCTION()
	void SpawnTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	//Number of enemy ships that can be spawned - Adjust to change.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	int SpawnNum = 2;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AEnemyShip> EnemyShipClass;
	FVector SpawnLocation;
	ASpaceshipDemoGameModeBase* GameModeRef;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Sets default values for this actor's properties
	AEnemyShip_Spawner();

};

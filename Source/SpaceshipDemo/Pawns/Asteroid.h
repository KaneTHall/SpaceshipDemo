// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Asteroid.generated.h"

class USphereComponent;
class UHealth;

UCLASS()
class SPACESHIPDEMO_API AAsteroid : public APawn
{
	GENERATED_BODY()

private:
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USphereComponent* CapComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* AsteroidMesh;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentScale(float Scale);

public:	
	// Sets default values for this pawn's properties
	AAsteroid();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

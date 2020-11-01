// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Asteroid.generated.h"

class USphereComponent;
class UHealth;
class AAsteroidChild;

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
	FRotator InitialRotation;
	float ScaleBy;
	float ScaleMin  = 1.0f;
	float ScaleLimit = 3.0f;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnDestroyedSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnDestroyedParticles;
	float AsteroidSizeClass;
	float InitialAsteroidSize = GetActorScale3D().X;
	float CurrentAsteroidSize;
	void InitializeAsteroid();
	float CalculateAsteroidClass();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AAsteroidChild> AsteroidChildClass;
	AAsteroidChild* SpawnedAsteroid;
	

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
	virtual void Destroyed() override;


};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Asteroid.generated.h"

class USphereComponent;
class UHealth;
class AAsteroidChild;
/** 
 * Asteroid Class - Base class for the Asteorid Child class
 * Inherited by the AsteroidChild class
 * Class contains member functions and variables for an Asteroid.
*/
UCLASS()
class SPACESHIPDEMO_API AAsteroid : public APawn
{
	GENERATED_BODY()
private:
	//Asteroid Components
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
	//USoundBase and UParticleSystem for Asteroid Destroyed Sound/Effects
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnDestroyedSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* OnDestroyedParticles;
	//Variables that hold the Asteroid Scale
	float AsteroidSizeClass;
	float InitialAsteroidSize = GetActorScale3D().X;
	float CurrentAsteroidSize;
	//Called in BeginPlay() sets Asteroids Scale and rotation
	void InitializeAsteroid();
	// Function returns a float to determine the asteroid size.
	float CalculateAsteroidClass();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AAsteroidChild> AsteroidChildClass;
	AAsteroidChild* SpawnedAsteroid;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//Setters for Asteroid rotation and Scale. Called in InitializeAsteroid() in BeginPlay()
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentScale(float Scale);

public:	
	// Sets default values for this pawn's properties
	AAsteroid();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Called when Asteroid is destroyed. 
	virtual void Destroyed() override;


};

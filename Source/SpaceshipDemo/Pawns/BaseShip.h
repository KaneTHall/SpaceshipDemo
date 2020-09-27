// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShip.generated.h"

class UCapsuleComponent;
class UHealth;
class ABaseBeam;

UCLASS()
class SPACESHIPDEMO_API ABaseShip : public APawn
{
	GENERATED_BODY()

private:
	//Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ShipMesh;
	//Variables
	FRotator ProjectileSpawnRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))	
	UHealth* Health;
	UFUNCTION()
	void Crashed(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	TSubclassOf<UDamageType> DamageType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
	float Damage = 10;
public:
	// Sets default values for this pawn's properties
	ABaseShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Shoot();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void SetCurrentRotation(FRotator Rotation);
	void SetCurrentLocation(FVector Location);
	
	FRotator GetCurrentRotation();
	FVector GetCurrentLocation();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ShootPoint;
	FVector ProjectileSpawnPoint;
	bool bTakenDamage = false; 
	 

};

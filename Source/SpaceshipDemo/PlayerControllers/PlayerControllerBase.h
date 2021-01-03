// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

/**
 * PlayerController Class
 * Setup the HUD
 */
UCLASS()
class SPACESHIPDEMO_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
	private:
	//UserWidget assign in HUD
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HUDClass;
	UPROPERTY(EditAnywhere)
	UUserWidget* HUD;

	public:

	void SetPlayerEnabledState(bool SetPlayerEnabled);

	protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

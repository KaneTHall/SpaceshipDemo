// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

class USpringArmComponent;
class UCameraComponent;
class ABaseBeam;
/**
 *  PlayerShip Class - Inherits from Baseclass
 *  All player specific member variables and functions used, declared and implemented here. 
 */
UCLASS()
class SPACESHIPDEMO_API APlayerShip : public ABaseShip
{
	GENERATED_BODY()
	private:
	//Player specific components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* PlayerCam;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* EnginePoint;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* EnginePSC;
	//Move Speed - Adjust to change the Player Ship movement speed (Up, Down, Left or Right) Speed
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MoveSpeed = 500.0f;
	//Sound Base - Sound plays on Player using boost
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* OnBoostSound;
	//Boost sound toggle
	bool bSoundPlayed = false;
	/** Playership Movement FVectors and FRotators */
	//FVector to be used in Move() function - Holds the direction of Playership
	FVector MoveDirection;	
	//FRotator and FQuat for the Playership to turn left and right. Used in RotateX() function - Removed this function for Gameplay (Removed functionality)
	FRotator RotationX;
	FQuat RotateDirectionX;
	//Frotator and FQuat for Playership to turn up and down (Look up and down). Used in RotateY() function
	FRotator RotationY;
	FQuat RotateDirectionY;
	FRotator Tilt;
	FRotator OutOfBoundsRotator;
	FRotator InitialRotation = FRotator(0,0,0);
	//Vector for the direction of cruise ship movement (forward)
	FVector CruiseVector;
	//Cruise Speed - Adjust the speed of the Player Ship cruise speed (Forward Movement)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float CruiseSpeed = 50;
    float InitialCruiseSpeed = CruiseSpeed;
	// float variable to hold time taken since damaged
	float DamagedTimer = 0;
	// float variable to hold time it takes before player can be damaged again
	float DamagedTimerLength = 1.5f;
	//float variable to hold time taken since last hidden appearance 
	float DamagedActorHiddenTime = 0;
	//Score variable - holds score
	int Score;
	// Move Function - Called when 'W' or 'S' are pressed to move the player ship Up and Down.
	void Move(float Value);
	// Rotate X Function - Uses Mouse X position for ship to turn left or right. - Removed
	void RotateX(float Value);
	// Rotate Y Function - Uses Mouse Y position for ship to look up and down
	void RotateY(float Value);
	// Strafe Function - Called when 'A' or 'D' are pressed to move the player ship Left or Right.
	void Strafe(float Value);
	/** Barrel Roll Functions
	 *  BarrelRollRight() Called when 'E' is pressed. Player ship rolls Right
	 *  BarrelRollLeft() Called when 'Q' is presed. Player ship rolls to Left						*/
	void BarrelRollRight() override;
	void BarrelRollLeft() override;
	//TimerHandle to handle time based events. 
	FTimerHandle TimerHandle;
	// Boost function - Called when 'Space Bar' is pressed - 
	void Boost();
	//Variables to enable boost
	float BoostRate = 0.01f;
	float BoostTime = 0;
	//Boost Max Time - Adjust to change how long the Boost function is in effect for.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float BoostMaxTime = 150;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float BoostSpeed = 10;
	// Player controller
	APlayerController* PtrPlayerController;
	
	
	public:
	// Constructor
	APlayerShip();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//Shoot function - Called on 'Left Mouse Button' pressed
	virtual void Shoot() override;
	// Called when Playership destroyed.
	virtual void Destroyed() override;
	// Add X amount to the score. Called in GameMode to apply score when certain objects are destroyed
	void AddScore(int X);
	// Get Score UFUNCTION - Called in the HUD UI Blueprint to display the Players score
	UFUNCTION(BlueprintCallable, Category = "Score")
	int GetScore();
	// Get Lives UFUNCTION - Called in the HUD UI Blueprint to display the Players lives.
	UFUNCTION(BlueprintCallable, Category = "Lives")
	int GetLives();
	// Number of Boosts that can be used - Used in Boost() function. Adjusts to change the number of boosts available to the player.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	int NoOfBoosts = 2;
	// Number of Lives the player has. Adjust to change the number of lives available to the player.  
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Lives")
	int Lives = 3;

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	

};

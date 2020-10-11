// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"

APlayerShip::APlayerShip()
{
    PrimaryActorTick.bCanEverTick = true;
    SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Ship Spring Arm Component"));
    SpringArmComp->SetupAttachment(RootComponent);
    PlayerCam = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera Component"));
    PlayerCam->SetupAttachment(SpringArmComp);
}

void APlayerShip::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) 
{
    PlayerInputComponent->BindAxis("Move", this, &APlayerShip::Move);
    PlayerInputComponent->BindAxis("Strafe", this, &APlayerShip::Strafe);
    PlayerInputComponent->BindAxis("RotateX",this, &APlayerShip::RotateX);
    PlayerInputComponent->BindAxis("RotateY",this, &APlayerShip::RotateY);
    PlayerInputComponent->BindAction("BarrelRollRight",IE_Pressed,this, &APlayerShip::BarrelRollRight);
    PlayerInputComponent->BindAction("BarrelRollLeft",IE_Pressed,this, &APlayerShip::BarrelRollLeft);
    PlayerInputComponent->BindAction("Shoot",IE_Pressed,this, &APlayerShip::Shoot);
}

void APlayerShip::Shoot() 
{
    Super::Shoot();
	ProjectileSpawnPoint = ShootPoint->GetComponentLocation();
	FVector MPosition, MDirection;
	APlayerControllerBase* PlayerController = (APlayerControllerBase*)GetWorld()->GetFirstPlayerController();
	PlayerController->DeprojectMousePositionToWorld(MPosition,MDirection);
	//UE_LOG(LogTemp,Warning, TEXT("X Position: %f & Y Position: %f"),MPosition.X,MPosition.Y);
	FVector BeamDirection = FVector(ProjectileSpawnPoint.X+100, MPosition.Y, MPosition.Z);
	//DrawDebugLine(GetWorld(),ProjectileSpawnPointOne, BeamDirection,FColor(255,0,0,1),true ,5.f);
	ABaseBeam* Beam = GetWorld()->SpawnActor<ABaseBeam>(BeamClass,ProjectileSpawnPoint,MDirection.Rotation());
	Beam->SetOwner(this);
}

void APlayerShip::BeginPlay() 
{
    Super::BeginPlay();
}

void APlayerShip::Tick(float DeltaTime) 
{
    CruiseVector = FVector(CruiseSpeed*DeltaTime,0,0);
    AddActorLocalOffset(CruiseVector,true);

    if(bTakenDamage == true)
    {
        DamagedTimer+=DeltaTime;
        DamagedActorHiddenTime+=DeltaTime*10;
        int DamageFlicker = DamagedActorHiddenTime+=DeltaTime*10;
        if(DamageFlicker%5==0)
        {
            this->SetActorHiddenInGame(true);
        }
        else
        {
            this->SetActorHiddenInGame(false);
        }
        

        if(DamagedTimer>=DamagedTimerLength)
        {
            bTakenDamage=false;
            DamagedTimer=0;
            DamagedActorHiddenTime = 0;
            this->SetActorHiddenInGame(false);
        }
    }
    
}

void APlayerShip::Move(float Value) 
{
    MoveDirection = FVector(0,0,Value*MoveSpeed*GetWorld()->DeltaTimeSeconds);
    AddActorLocalOffset(MoveDirection,true);
}

void APlayerShip::Strafe(float Value) 
{
    MoveDirection = FVector(0,Value*MoveSpeed*GetWorld()->DeltaTimeSeconds,0);
    AddActorLocalOffset(MoveDirection,true);
    if(Value == -1 && GetCurrentRotation().Roll>=-15)
    {
    
       // Tilt = FRotator(0,0,-1);
    }
    if(Value == 1 && GetCurrentRotation().Roll<=15)
    {
     
        //Tilt = FRotator(0,0,1);     
    }
        AddActorLocalRotation(Tilt,true);
}

void APlayerShip::RotateX(float Value) 
{
  /* float RotateXBy = Value*RotationSpeed*GetWorld()->DeltaTimeSeconds;
   RotationX = FRotator(0,RotateXBy,0);
   RotateDirectionX = FQuat(RotationX);
   AddActorLocalRotation(RotateDirectionX,true);*/
}

void APlayerShip::RotateY(float Value) 
{
   float  RotateYBy = Value*RotationSpeed*GetWorld()->DeltaTimeSeconds;
    //If ship goes beyond stopping adding to rotation
    if(GetCurrentRotation().Pitch>=-45 && GetCurrentRotation().Pitch<=45)
    {
        RotationY = FRotator(RotateYBy,0,0);
        RotateDirectionY = FQuat(RotationY);
        AddActorLocalRotation(RotateDirectionY,true);
    }
    else if(GetCurrentRotation().Pitch<-45)
    {
        OutOfBoundsRotator = FRotator(-45,0,0);
        SetCurrentRotation(OutOfBoundsRotator);
    }
    else if(GetCurrentRotation().Pitch>45)
    {
        OutOfBoundsRotator = FRotator(45,0,0); 
        SetCurrentRotation(OutOfBoundsRotator);
    }
     InitialRotation = GetCurrentRotation();
     //UE_LOG(LogTemp,Warning,TEXT("Rotate Value: %f"),GetCurrentRotation().Roll);
}

void APlayerShip::BarrelRollRight() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &APlayerShip::BarrelRollRight, RollRate,true);
    AddActorLocalRotation(BarrelRotation,true);
    //UE_LOG(LogTemp,Warning,TEXT("Rotate Value: %f"),GetCurrentRotation().Roll);
    RollTime++;
    if(RollTime>RollMaxTime)
    {
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        SetCurrentRotation(FRotator(0,0,0));
        RollTime=0;
    }
}

void APlayerShip::BarrelRollLeft() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &APlayerShip::BarrelRollLeft, RollRate,true);
    AddActorLocalRotation(BarrelRotation*-1,true);
    UE_LOG(LogTemp,Warning,TEXT("Rotate Value: %f"),GetCurrentRotation().Roll);
    RollTime++;
    if(RollTime>RollMaxTime)
    {
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        SetCurrentRotation(FRotator(0,0,0));
        RollTime=0;
    }
}

void APlayerShip::Boost() 
{
    
}

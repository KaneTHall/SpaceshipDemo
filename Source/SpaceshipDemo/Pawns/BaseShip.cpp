// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseShip.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/Actors/BaseBeam.h"
#include "SpaceshipDemo/Components/Health.h"
#include "SpaceshipDemo/PlayerControllers/PlayerControllerBase.h"

// Sets default values
ABaseShip::ABaseShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create Base Ship Component hierarchy
	CapComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapComp;
	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship Mesh"));
	ShipMesh->SetupAttachment(CapComp);
	ShootPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Shoot Point"));
	ShootPoint->SetupAttachment(ShipMesh);
	Health =  CreateDefaultSubobject<UHealth>(TEXT("Health Component"));
}

// Called when the game starts or when spawned
void ABaseShip::BeginPlay()
{
	Super::BeginPlay();
	// Called when CapComp collides with another collider 
	CapComp->OnComponentHit.AddDynamic(this,&ABaseShip::Crashed);
}

FRotator ABaseShip::GetCurrentRotation() 
{
	return CapComp->GetComponentRotation();
}

FVector ABaseShip::GetCurrentLocation() 
{
	return CapComp->GetComponentLocation();
}

void ABaseShip::Destroyed() 
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnDestroyedParticles, GetCurrentLocation());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnDestroyedSound, GetCurrentLocation());
}

float ABaseShip::HealthPercent() const
{
	return (Health->CurrentHealth)/100;
}

int ABaseShip::GetHealth() const
{
	return Health->CurrentHealth;
}

void ABaseShip::AddHealth(float HealthAmount) 
{
	Health->CurrentHealth+=HealthAmount;
}

void ABaseShip::SetCurrentRotation(FRotator Rotation) 
{
	CapComp->SetWorldRotation(Rotation);
}

void ABaseShip::SetCurrentLocation(FVector Location) 
{
	CapComp->SetWorldLocation(Location);
}

// Called every frame
void ABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseShip::Shoot() 
{
	if(BeamClass)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),ShootSound, GetCurrentLocation());
	}
	else
	{
		UE_LOG(LogTemp,Warning, TEXT("BeamClass Nullptr"));
		return;
	}
}


void ABaseShip::Crashed(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	if(OtherActor->GetClass()==BeamClass)
	{
		OtherActor->Destroy();
	}

	if(OtherActor && OtherActor!=this && bTakenDamage == false && OtherActor->GetClass()!=this->GetClass() && OtherActor->GetClass()!=BeamClass)
	{
		UGameplayStatics::ApplyDamage(this, Damage, this->GetInstigatorController(),OtherActor, DamageType);
		/** DEBUG Lines
		 *  UE_LOG(LogTemp,Warning,TEXT("%f Damage applied to: %s"),Damage,*this->GetName()); - Print the amount of damage and the name of the actor it was applied to
		 *  UE_LOG(LogTemp,Warning,TEXT("%s Crashed into %s, so %f damage applied"),*OtherActor->GetName(),*this->GetName(),Damage); - Print the Damage applied and the actor that caused it
		 *  UE_LOG(LogTemp,Warning,TEXT("%s"),*OtherActor->GetClass()->GetName()); - Print name of the other actor class
		 * 
		*/
		bTakenDamage = true;
	}
}

void ABaseShip::BarrelRollRight() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
	//Call BarrelRoll function recursively until Roll time exceeds the maximum time a roll should take. 
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ABaseShip::BarrelRollRight, RollRate,true);
    AddActorLocalRotation(BarrelRotation,true);
	bDeflect = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnRollParticles, GetCurrentLocation());
    RollTime++;
    if(RollTime>RollMaxTime)
    {
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        SetCurrentRotation(FRotator(0,0,0));
		bDeflect = false;
        RollTime=0;
    }
}

// See above^^
void ABaseShip::BarrelRollLeft() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ABaseShip::BarrelRollLeft, RollRate,true);
    AddActorLocalRotation(BarrelRotation*-1,true);
	bDeflect = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnRollParticles, GetCurrentLocation());
    RollTime++;
    if(RollTime>RollMaxTime)
    {
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        SetCurrentRotation(FRotator(0,0,0));
		bDeflect = false;
        RollTime=0;
    }
}

bool ABaseShip::IsDead() 
{
	return Health->CurrentHealth<=0;
}


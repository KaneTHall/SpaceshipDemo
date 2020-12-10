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
//void DrawDebugLine(const UWorld* InWorld, FVector const& LineStart, FVector const& LineEnd, FColor const& Color, bool bPersistentLines = false, float LifeTime=-1.f, uint8 DepthPriority = 0, float Thickness = 0.f);

void ABaseShip::Crashed(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	//GetWorld()->GetFirstPlayerController()->GetPawn()
	
	if(OtherActor->GetClass()==BeamClass)
	{
		OtherActor->Destroy();
	}

	if(OtherActor && OtherActor!=this && bTakenDamage == false && OtherActor->GetClass()!=this->GetClass() && OtherActor->GetClass()!=BeamClass)
	{
		UGameplayStatics::ApplyDamage(this, Damage, this->GetInstigatorController(),OtherActor, DamageType);
	//	UE_LOG(LogTemp,Warning,TEXT("%f Damage applied to: %s"),Damage,*this->GetName());
		//UE_LOG(LogTemp,Warning,TEXT("%s Crashed into %s, so %f damage applied"),*OtherActor->GetName(),*this->GetName(),Damage);
		//UE_LOG(LogTemp,Warning,TEXT("%s"),*OtherActor->GetClass()->GetName());
		bTakenDamage = true;
	}
}

void ABaseShip::BarrelRollRight() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ABaseShip::BarrelRollRight, RollRate,true);
    AddActorLocalRotation(BarrelRotation,true);
	bDeflect = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnRollParticles, GetCurrentLocation());
    //UE_LOG(LogTemp,Warning,TEXT("Rotate Value: %f"),GetCurrentRotation().Roll);
    RollTime++;
    if(RollTime>RollMaxTime)
    {
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        SetCurrentRotation(FRotator(0,0,0));
		bDeflect = false;
        RollTime=0;
    }
}

void ABaseShip::BarrelRollLeft() 
{
    
    float BarrelRotateBy = BarrelRollSpeed*GetWorld()->DeltaTimeSeconds;
    BarrelRotation = FRotator(0,0,BarrelRotateBy);
    GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ABaseShip::BarrelRollLeft, RollRate,true);
    AddActorLocalRotation(BarrelRotation*-1,true);
	bDeflect = true;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnRollParticles, GetCurrentLocation());
    //UE_LOG(LogTemp,Warning,TEXT("Rotate Value: %f"),GetCurrentRotation().Roll);
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


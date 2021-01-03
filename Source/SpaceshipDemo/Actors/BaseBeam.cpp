// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBeam.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SpaceshipDemo/Pawns/BaseShip.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseBeam::ABaseBeam()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	//Setup the hiearchy of components for the Beamn actor
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	RootComponent = SphereComp;
	BeamMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Beam Mesh Component"));
	BeamMesh->SetupAttachment(SphereComp);
	BeamMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement Component"));
	//Beam properties
	BeamMovement->InitialSpeed = MovementSpeed;
	BeamMovement->MaxSpeed = MovementSpeed;
	BeamMovement->ProjectileGravityScale = 0;
	InitialLifeSpan = 10.0f;
}
// Called when the game starts or when spawned
void ABaseBeam::BeginPlay()
{
	Super::BeginPlay();
	//Call OnHit function when Beam collides with another object. 
	SphereComp->OnComponentHit.AddDynamic(this,&ABaseBeam::OnHit);

}

void ABaseBeam::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	AActor* BeamOwner = GetOwner();
	if(!BeamOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Beam Owner"));
		return;
	}
	if(OtherActor && OtherActor!=this && OtherActor!=BeamOwner && BeamOwner->GetClass()!=OtherActor->GetClass())
	{
		//If beam hits a ship (Player or  enemy) while bDeflect = true then the beam will bounce off the ship and not take damage.
		if(ABaseShip* ShipActor = Cast<ABaseShip>(OtherActor))
		{
			if(ShipActor->bDeflect==true)
			{
				UE_LOG(LogTemp,Warning,TEXT("Deflect"));
				UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnRicochetSound, Hit.Location);
				BeamMovement->bShouldBounce = 1;
				return;
			}
		}
		UGameplayStatics::ApplyDamage(OtherActor, Damage, BeamOwner->GetInstigatorController(),this, DamageType);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnHitParticles, Hit.Location);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnHitSound, Hit.Location);
		/** DEBUG Line
		 * UE_LOG(LogTemp,Warning,TEXT("%f Damage applied to: %s"),Damage,*OtherActor->GetName()); - Print the name of the Actor the beam has hit
		*/
		Destroy();
	}
}


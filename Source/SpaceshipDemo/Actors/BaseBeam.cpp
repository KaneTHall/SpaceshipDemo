// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBeam.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseBeam::ABaseBeam()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Component"));
	RootComponent = SphereComp;
	BeamMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Beam Mesh Component"));
	BeamMesh->SetupAttachment(SphereComp);
	BeamMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement Component"));
	BeamMovement->InitialSpeed = MovementSpeed;
	BeamMovement->MaxSpeed = MovementSpeed;
	BeamMovement->ProjectileGravityScale = 0;
	InitialLifeSpan = 10.0f;
}
// Called when the game starts or when spawned
void ABaseBeam::BeginPlay()
{
	Super::BeginPlay();
	SphereComp->OnComponentHit.AddDynamic(this,&ABaseBeam::OnHit);

}

void ABaseBeam::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	AActor* BeamOwner = GetOwner();
	UE_LOG(LogTemp, Warning, TEXT("ONHIT Detected"));
	if(!BeamOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("No Beam Owner"));
		return;
	}
	if(OtherActor && OtherActor!=this && OtherActor!=BeamOwner)
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, BeamOwner->GetInstigatorController(),this, DamageType);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),OnHitParticles, Hit.Location);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnHitSound, Hit.Location);
		UE_LOG(LogTemp,Warning,TEXT("%f Damage applied to: %s"),Damage,*OtherActor->GetName());
		Destroy();
	}
}


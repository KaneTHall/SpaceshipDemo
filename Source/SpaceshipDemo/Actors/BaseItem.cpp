// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseItem.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Setup component hierarchy for a BaseItem.
	SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    RootComponent = SceneComp;
	CapComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	CapComp->SetupAttachment(SceneComp);
	PSC = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem Component"));
	PSC->SetupAttachment(SceneComp);
	InitialLifeSpan = 500.0f;
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	//Call ApplyEffect() function when another actor overlaps with this actor
	CapComp->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::ApplyEffect);
}

void ABaseItem::Effect(APlayerShip* PlayerShip) 
{
		/** DEBUG Line
		 * 	UE_LOG(LogTemp, Warning, TEXT("Effect Activated")); - Check the Effect() function has been called when playership overlaps
		*/
	//Deactivate particles of item
	PSC->KillParticlesForced();
}

void ABaseItem::Destroyed() 
{
	Super::Destroyed();
}

void ABaseItem::ApplyEffect(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) 
{
	if(APlayerShip* PlayerShip = Cast<APlayerShip>(OtherActor))
	{
		/** DEBUG Line
		 * 	UE_LOG(LogTemp, Warning, TEXT("Effect Applied to %s"), *PlayerShip->GetName()); - Print the name of the Playership who has picked this item up
		*/
		Effect(PlayerShip);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(),OnPickupSound, OtherActor->GetActorLocation());
		Destroy();
	}
	return;
}

// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "GoalWinCondition.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/SpaceshipDemoGameModeBase.h"
// Sets default values
AGoalWinCondition::AGoalWinCondition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	RootComponent = BoxComp;
}

// Called when the game starts or when spawned
void AGoalWinCondition::BeginPlay()
{
	Super::BeginPlay();
	BoxComp->OnComponentBeginOverlap.AddDynamic(this,&AGoalWinCondition::Goal);
	GameModeRef = Cast<ASpaceshipDemoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AGoalWinCondition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AGoalWinCondition::Goal(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) 
{

		if(APlayerShip* PlayerShip = Cast<APlayerShip>(OtherActor))
		{
			UE_LOG(LogTemp, Error, TEXT("You Win!!!"));
			if(GameModeRef)
			{
				GameModeRef->Win();
			}
		}
	
}

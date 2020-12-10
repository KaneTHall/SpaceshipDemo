// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyShip_Spawner.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"
#include "SpaceshipDemo/SpaceshipDemoGameModeBase.h"
// Sets default values
AEnemyShip_Spawner::AEnemyShip_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	RootComponent = BoxComp;
}

// Called when the game starts or when spawned
void AEnemyShip_Spawner::BeginPlay()
{
	Super::BeginPlay();
	BoxComp->OnComponentBeginOverlap.AddDynamic(this,&AEnemyShip_Spawner::SpawnTrigger);
	GameModeRef = Cast<ASpaceshipDemoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void AEnemyShip_Spawner::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

}


void AEnemyShip_Spawner::SpawnTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult) 
{
	
	if(APlayerShip* PlayerShip = Cast<APlayerShip>(OtherActor))
	{
		SpawnLocation = FVector(GetActorLocation().X,0,0);
		if(GameModeRef)
		{
			if(GameModeRef->SpawnSafe())
			{
				for(int i =0; i<SpawnNum;i++)
				{
					AEnemyShip* EnemyShip = GetWorld()->SpawnActor<AEnemyShip>(EnemyShipClass,SpawnLocation,GetActorRotation());
				}
			}
		}
	}
	
}

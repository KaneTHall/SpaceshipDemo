// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"
#include "SpaceshipDemo/SpaceshipDemoGameModeBase.h"
#include "Kismet/GameplayStatics.h"
// Sets default values for this component's properties
UHealth::UHealth()
{

}
// Called when the game starts
void UHealth::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	GameModeRef = Cast<ASpaceshipDemoGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealth::TakeDamage);

}

void UHealth::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) 
{
	if(CurrentHealth<=0 || Damage<=0)
	{
		return;
	}
	CurrentHealth = FMath::Clamp(CurrentHealth - Damage,0.0f,MaxHealth);
	UE_LOG(LogTemp, Warning, TEXT("%s Current Health:%f"),*GetOwner()->GetName(),CurrentHealth);

	if(CurrentHealth<=0)
	{
		//When Actor this component is attached to has died call the ActorHasDied function from GameModeRef()
		if(GameModeRef)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s has been destroyed"),*GetOwner()->GetName());
			GameModeRef->ActorHasDied(GetOwner());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Health Component has no reference to game mode"));
		}
		
	}
}






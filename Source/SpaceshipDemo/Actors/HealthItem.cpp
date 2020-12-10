// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthItem.h"
#include "SpaceshipDemo/Components/Health.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void AHealthItem::Effect(APlayerShip* PlayerShip) 
{
    Super::Effect(PlayerShip);
    PlayerShip->AddHealth(HealthIncrease);
    Destroy();

}

void AHealthItem::BeginPlay() 
{
    Super::BeginPlay();
}

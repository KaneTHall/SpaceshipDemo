// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthItem.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "SpaceshipDemo/Components/Health.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void AHealthItem::Effect(APlayerShip* PlayerShip) 
{
    Super::Effect(PlayerShip);
    //Call PlayerShip AddHealth() function using HealthIncrease
    PlayerShip->AddHealth(HealthIncrease);
    Destroy();

}

void AHealthItem::BeginPlay() 
{
    Super::BeginPlay();
}

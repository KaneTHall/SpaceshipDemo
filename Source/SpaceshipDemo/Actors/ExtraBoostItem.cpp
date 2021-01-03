// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraBoostItem.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void AExtraBoostItem::Effect(APlayerShip* PlayerShip) 
{
    Super::Effect(PlayerShip);
    //Increase Number of boosts in PlayerShip
    PlayerShip->NoOfBoosts+=BoostNum;
}

void AExtraBoostItem::BeginPlay() 
{
    Super::BeginPlay();
}

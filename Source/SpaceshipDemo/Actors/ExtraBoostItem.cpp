// Fill out your copyright notice in the Description page of Project Settings.


#include "ExtraBoostItem.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void AExtraBoostItem::Effect(APlayerShip* PlayerShip) 
{
    PlayerShip->NoOfBoosts+=BoostNum;
}

void AExtraBoostItem::BeginPlay() 
{
    Super::BeginPlay();
}

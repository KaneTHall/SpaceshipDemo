// Fill out your copyright notice in the Description page of Project Settings.


#include "BonusScoreItem.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void ABonusScoreItem::Effect(APlayerShip* PlayerShip) 
{
    PlayerShip->AddScore(ScoreBonus);
}

void ABonusScoreItem::BeginPlay() 
{
    Super::BeginPlay();
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "BonusScoreItem.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"

void ABonusScoreItem::Effect(APlayerShip* PlayerShip) 
{
    Super::Effect(PlayerShip);
    //Increase player score by ScoreBonus calling the PlayerShips AddScore() method. 
    PlayerShip->AddScore(ScoreBonus);
}

void ABonusScoreItem::BeginPlay() 
{
    Super::BeginPlay();
}

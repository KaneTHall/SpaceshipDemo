// Fill out your copyright notice in the Description page of Project Settings.


#include "AsteroidChild.h"
#include "SpaceshipDemo/Components/ItemDrop.h"

AAsteroidChild::AAsteroidChild() 
{
    ItemDrop = CreateDefaultSubobject<UItemDrop>(TEXT("Item Drop Component"));

}


void AAsteroidChild::BeginPlay() 
{
    Super::BeginPlay();
}


void AAsteroidChild::Tick(float DeltaTime) 
{
    Super::Tick(DeltaTime);
}


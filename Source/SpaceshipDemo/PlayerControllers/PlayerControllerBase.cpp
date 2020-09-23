// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"
#include "Blueprint/UserWidget.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled) 
{
    if(SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
    }
    else
    {
        GetPawn()->DisableInput(this);
    }
    
    bShowMouseCursor = SetPlayerEnabled;
}

void APlayerControllerBase::BeginPlay() 
{
    Super::BeginPlay();
    HUD = CreateWidget(this, HUDClass);
    if(HUD!=nullptr)
	{
		HUD->AddToPlayerScreen();
	}

}

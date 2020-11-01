// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPlayerController.h"
#include "BrainComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SpaceshipDemo/Pawns/PlayerShip.h"


void AAIPlayerController::BeginPlay() 
{
     Super::BeginPlay();
    

     if(AIBehaviorTree!=nullptr)
     {
        RunBehaviorTree(AIBehaviorTree);
        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
        APawn* AIControllerPawn = this->GetPawn();
        FVector StartingWayPoint;
        GetBlackboardComponent()->SetValueAsObject(TEXT("PlayerPawn"),PlayerPawn);
        GetBlackboardComponent()->SetValueAsObject(TEXT("AIControllerPawn"),AIControllerPawn);
        GetBlackboardComponent()->SetValueAsVector(TEXT("AIControllerPawnLocation"),AIControllerPawn->GetActorLocation());
        GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerPawnLocation"),PlayerPawn->GetActorLocation());
        GetBlackboardComponent()->SetValueAsVector(TEXT("StartingWayPoint"),StartingWayPoint);
     }
}

void AAIPlayerController::Tick(float DeltaTime) 
{
     Super::Tick(DeltaTime);
     //Fix to stop behaviour tree running when AIPawn is destroyed.
     if(!IsValid(this->GetPawn()))
     {    
          this->BrainComponent->StopLogic(Reason);
     }
    
}




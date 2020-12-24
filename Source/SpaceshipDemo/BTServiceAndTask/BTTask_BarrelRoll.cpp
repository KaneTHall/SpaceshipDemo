// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_BarrelRoll.h"
#include "AIController.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"

UBTTask_BarrelRoll::UBTTask_BarrelRoll() 
{
    NodeName = TEXT("BarrelRoll");
}

EBTNodeResult::Type UBTTask_BarrelRoll::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);
    if(OwnerComp.GetAIOwner() == nullptr)
    {       
        return EBTNodeResult::Failed;
    }

    AEnemyShip* EnemyShip = Cast<AEnemyShip>(OwnerComp.GetAIOwner()->GetPawn());
    
    if(EnemyShip == nullptr)
    {
         return EBTNodeResult::Failed;
    }

    EnemyShip->BarrelRollRight();

    return EBTNodeResult::Succeeded;
}

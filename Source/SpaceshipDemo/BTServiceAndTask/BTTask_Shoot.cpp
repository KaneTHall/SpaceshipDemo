// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Shoot.h"
#include "AIController.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"

UBTTask_Shoot::UBTTask_Shoot() 
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) 
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
    //Call Shoot method from EnemyShip
    EnemyShip->Shoot();

     return EBTNodeResult::Succeeded;

}

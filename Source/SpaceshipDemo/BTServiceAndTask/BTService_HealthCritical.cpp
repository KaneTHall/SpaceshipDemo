// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_HealthCritical.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"

UBTService_HealthCritical::UBTService_HealthCritical() 
{
    NodeName = TEXT("Health Critical?");
}

//Every tick check if AIOwner Health is below the critical threshold. 
void UBTService_HealthCritical::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp,NodeMemory,DeltaSeconds);
    APawn* AIOwner = OwnerComp.GetAIOwner()->GetPawn();
    AEnemyShip* AIShip = Cast<AEnemyShip>(AIOwner);
    if(AIShip->GetHealth()<=CriticalThreshold)
    {
        UE_LOG(LogTemp, Error, TEXT("Critical Health Triggered"));
        bHealthCritical = true;
        OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), bHealthCritical);
    }
    else
    {
        bHealthCritical = false;
        OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), bHealthCritical);
    }

}

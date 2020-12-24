// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_SeenPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"


UBTService_SeenPlayer::UBTService_SeenPlayer() 
{
    NodeName = TEXT("Can See Player?");
}

void UBTService_SeenPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp,NodeMemory,DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    APawn* AIOwner = OwnerComp.GetAIOwner()->GetPawn();
    if(PlayerPawn == nullptr)
    {
        return;
    }

    if(PlayerPawn->GetActorLocation().X<AIOwner->GetActorLocation().X)
    {
        bSeenPlayer=true;
        OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(),bSeenPlayer);
    }
    else
    {
        bSeenPlayer=false;
        OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(),bSeenPlayer);
        
    }
}

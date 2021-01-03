// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdateWayPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NavigationSystem.h"

UBTService_UpdateWayPoint::UBTService_UpdateWayPoint() 
{
    NodeName = TEXT("Update Next Waypoint");
}

void UBTService_UpdateWayPoint::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) 
{
    Super::TickNode(OwnerComp,NodeMemory,DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    if(PlayerPawn == nullptr)
    {
        return;
    }
    WayPointTimer+=DeltaSeconds;
    //Assign a new waypoint and update value in the Blackboard.
    if(AIWayPoints(PlayerPawn->GetActorLocation()).Num()!=0)
    {
         NextWayPoint = AIWayPoints(PlayerPawn->GetActorLocation())[FMath::RandRange(0,AIWayPoints(PlayerPawn->GetActorLocation()).Num()-1)];
    }
    WayPointTimer=0;
    OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(),NextWayPoint);

}

//Return an array of waypoints calculated by the players position in the navigation system.
TArray<FVector> UBTService_UpdateWayPoint::AIWayPoints(FVector PlayerLocation) 
{
    UNavigationSystemV1* NavigationSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    ANavigationData* NavigationData = NavigationSystem->GetNavDataForProps(PlayerController->GetNavAgentPropertiesRef());
    TArray<FVector> WayPoints;
    if(!NavigationData||!PlayerController||!NavigationData)
    {
        UE_LOG(LogTemp,Warning,TEXT("Unsigned Navigation Variables / Player Controller"));
    }
    
    for(int i = 0; i<5;i++)
    {
        for(int j = 0; j<5;j++)
        {
            FVector WayPoint = FVector(PlayerLocation.X+(DistanceFromPlayer+(j*200)),(PlayerLocation.Y-200)+(j*200),PlayerLocation.Z);
            FPathFindingQuery Query(PlayerController,*NavigationData,PlayerController->GetNavAgentLocation(),WayPoint);
            if(NavigationSystem->TestPathSync(Query))
            {
                WayPoints.Push(WayPoint);
            }
        }
    }

    return WayPoints;
}





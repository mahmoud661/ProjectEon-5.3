// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_BlueprintBase_Cpp.h"

ATargetPoint *UMyBTTask_BlueprintBase_Cpp::randomElementNoRepeat(ATargetPoint *targetPoint, const TArray<ATargetPoint *> &PossibleTargetPoints)
{
    if (PossibleTargetPoints.Num() == 1)
    {
        targetPoint = PossibleTargetPoints[0];
        return targetPoint;
    }
    else if (PossibleTargetPoints.Num() > 1)
    {
        int32 index = FMath::RandRange(0, PossibleTargetPoints.Num() - 1);
        ATargetPoint *selectedTarget = PossibleTargetPoints[index];

        // Ensure the selected target is different from the provided targetPoint
        while (selectedTarget == targetPoint)
        {
            index = FMath::RandRange(0, PossibleTargetPoints.Num() - 1);
            selectedTarget = PossibleTargetPoints[index];
        }

        return selectedTarget;
    }

    return nullptr;
}

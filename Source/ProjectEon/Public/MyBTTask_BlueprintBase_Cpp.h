// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/TargetPoint.h"
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "MyBTTask_BlueprintBase_Cpp.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEON_API UMyBTTask_BlueprintBase_Cpp : public UBTTask_BlueprintBase
{
	GENERATED_BODY()



	UFUNCTION(BlueprintCallable, Category = "MyBTTask_BlueprintBase_Cpp")
	ATargetPoint *randomElementNoRepeat(ATargetPoint *targetPoint, const TArray<ATargetPoint *> &PossibleTargetPoints);
};

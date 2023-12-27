// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_platform.generated.h"


UCLASS(Blueprintable)
class PROJECTEON_API ATest_platform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere)
	int32 test = 10;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(-910.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere)
	FVector platfromSpeed = FVector(-100.0f, 0.0f, 0.0f);

	FVector startLocation ;
};

// Fill out your copyright notice in the Description page of Project Settings


#include "Test_platform.h"

// Sets default values
ATest_platform::ATest_platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATest_platform::BeginPlay()
{
	Super::BeginPlay();
	startLocation = GetActorLocation();
	startLocation.X +=  -100.0f;
}

// Called every frame
void ATest_platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();

	// Define the distance threshold for changing direction
	float distanceThreshold = 500.0f;

	// Calculate the current distance from the starting position
	float distanceFromStart = FMath::Abs(currentLocation.X - (startLocation.X));

	// Check if the platform has moved 500 units away from its starting position
	if (distanceFromStart >= distanceThreshold)
	{
		// Reverse the direction by changing the sign of the X-component of the speed vector
		platfromSpeed.X = platfromSpeed.X * -1;
	}

	// Update the position based on the speed vector
	currentLocation = currentLocation + platfromSpeed * DeltaTime;

	// Set the new actor location
	SetActorLocation(currentLocation);
}

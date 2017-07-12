// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller not possessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller possessing %s"), *(ControlledTank->GetName()))
	}
	UE_LOG(LogTemp, Warning, TEXT("Player Controller Begin Play"))
}

// Called every frame
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//AimTowardsCrosshair()
	//UE_LOG(LogTemp, Warning, TEXT("Player Controller Ticking"))
}

ATank* ATankPlayerController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }


	// Get the world location if linetrace through crosshair
	//If it hits the landscape
		// Tell controlled tank to aim at this point
}

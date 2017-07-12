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
	AimTowardsCrosshair();
	//UE_LOG(LogTemp, Warning, TEXT("Player Controller Ticking"))
}

ATank* ATankPlayerController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) { return; }

	FVector HitLocation; //OUT parameter
	if (GetSightRayHitLocation(HitLocation)) //Has "side-effect", is going to line trace
	{
		UE_LOG(LogTemp, Warning, TEXT("Look direction: %s"), *(HitLocation.ToString()))
		//TODO Tell controlled tank to aim at this point
	}


}

//Get world location of linetrace though crosshair, true if hits landscape
bool ATankPlayerController::GetSightRayHitLocation(FVector& OutHitLocation)
{
	// Find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);
	auto ScreenLocation = FVector2D(ViewportSizeX * CrosshairXLocation, ViewportSizeY * CrosshairYLocation);
	UE_LOG(LogTemp, Warning, TEXT("Look direction: %s"), *(ScreenLocation.ToString()))
	// "De-project" the screen position of the crosshair to a world direction
	// Linetrace along the look direction and see what we hit (up to max range)
	return true;
}
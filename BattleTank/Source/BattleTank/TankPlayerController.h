// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // must be the last include

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	ATank* GetControlledTank();

	//Start the tank moving the barrel so that a whot would hit where the crosshair intersects the world
	void AimTowardsCrosshair();

	//return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation);

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection);
	
	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5f;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.33333f;
};

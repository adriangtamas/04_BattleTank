// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();

	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller can't find tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI Controller found player %s"), *(PlayerTank->GetName()))
	}
	UE_LOG(LogTemp, Warning, TEXT("AI Controller Begin Play"))
}

ATank* ATankAIController::GetControlledTank()
{
	return Cast<ATank>(GetPawn());
}

ATank*  ATankAIController::GetPlayerTank()
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerPawn) { return Cast<ATank>(PlayerPawn); }
	else { return nullptr; }	
}

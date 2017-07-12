// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//Move the barrel the right amount this frame given a max elevetion speed and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel elevate at speed (degrees/s) %f"), DegreesPerSecond);
}



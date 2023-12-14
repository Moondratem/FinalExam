// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BobAndAliceGameSubsystem.generated.h"
#include "Subsystems/GameInstanceSubsystem.h"

UCLASS ()
class YOURPROJECT_API UBobAndAliceGameSubsystem
	: public UGameInstanceSubsystem
{
	GENERATED_BODY ()

public:
	UBobAndAliceGameSubsystem ();

	UPROPERTY (BlueprintReadWrite, Category = "Timer")
	float TimerValue;
};

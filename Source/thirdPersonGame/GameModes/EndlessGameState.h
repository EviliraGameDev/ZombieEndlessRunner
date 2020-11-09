// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "EndlessGameState.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API AEndlessGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	AEndlessGameState();
	virtual ~AEndlessGameState() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HealthCheck;
};

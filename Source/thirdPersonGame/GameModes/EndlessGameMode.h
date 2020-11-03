// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EndlessGameMode.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONGAME_API AEndlessGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AEndlessGameMode();
	virtual ~AEndlessGameMode() = default;

	UFUNCTION(BlueprintCallable,Category = "Health Check")
	virtual FString GetHealthCheck() const;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "EndlessGameMode.h"
#include "EndlessGameState.h"

AEndlessGameMode::AEndlessGameMode()
{
	GameStateClass = AEndlessGameState::StaticClass();
}

FString AEndlessGameMode::GetHealthCheck() const
{
	return GetGameState<AEndlessGameState>()->HealthCheck;
}
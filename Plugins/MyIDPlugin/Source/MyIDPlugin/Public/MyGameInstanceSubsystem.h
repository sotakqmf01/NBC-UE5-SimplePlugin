// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MYIDPLUGIN_API UMyGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMyGameInstanceSubsystem();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "GISSetUserName", Keywords = "GISSetUserName"), Category = "GISSetUserName")
	void SetUserName(const FString& NewName);
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GISGetUserName", Keywords = "GISGetUserName"), Category = "GISGetUserName")
	FString GetUserName();

public:
	FString UserName;
	
};

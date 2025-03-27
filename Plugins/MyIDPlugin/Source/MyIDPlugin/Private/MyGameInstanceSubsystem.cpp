// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstanceSubsystem.h"

UMyGameInstanceSubsystem::UMyGameInstanceSubsystem()
{
	UserName = "Unknown";
}

void UMyGameInstanceSubsystem::SetUserName(const FString& NewName)
{
	UserName = NewName;
	UE_LOG(LogTemp, Log, TEXT("GIS UserName set to: %s"), *UserName);
}

FString UMyGameInstanceSubsystem::GetUserName()
{
	return UserName;
}

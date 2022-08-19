// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"


#include "OnlineGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ONLINE_API UOnlineGameInstance : public UGameInstance
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Transformation")
		int GetSessionMaxPlayerNum();
};

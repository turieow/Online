// Fill out your copyright notice in the Description page of Project Settings.


#include "OnlineGameInstance.h"

#include "OnlineSubsystemUtils.h"

int UOnlineGameInstance::GetSessionMaxPlayerNum()
{
	IOnlineSessionPtr Sessions = IOnlineSubsystem::Get()->GetSessionInterface();
	FOnlineSessionSettings* CurrentSettings = Sessions->GetSessionSettings(GameSessionName);

	const int maxnum = CurrentSettings->NumPublicConnections;
	return maxnum;
}
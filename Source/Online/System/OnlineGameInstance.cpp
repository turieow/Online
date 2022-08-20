// Fill out your copyright notice in the Description page of Project Settings.


#include "OnlineGameInstance.h"

#include "OnlineSubsystemUtils.h"

int UOnlineGameInstance::GetSessionMaxPlayerNum()
{
	IOnlineSessionPtr Sessions = IOnlineSubsystem::Get()->GetSessionInterface();

	if (Sessions)
	{
		FOnlineSessionSettings* CurrentSettings = Sessions->GetSessionSettings(GameSessionName);

		if (CurrentSettings)
		{
			const int32 maxnum = CurrentSettings->NumPublicConnections;
			return maxnum;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
}
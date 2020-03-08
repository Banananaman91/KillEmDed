// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "playerHud.generated.h"

struct Message {
	FString message;
	float time;
	FColor fontColour;

	Message() {
		time = 0.5f;
		fontColour = FColor::White;
	}

	Message(FString iMessage, float iTime, FColor iFontColour) {
		message = iMessage;
		time = iTime;
		fontColour = iFontColour;
	}
};

UCLASS()
class KILLEMDED_API AplayerHud : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		UFont* hudFont;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		float ScreenX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		float ScreenY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HUDFont)
		float TextScale;

	TArray<Message> messages;
	void AddMessage(Message msg);
	virtual void DrawHUD() override;
	void DrawMessages();
};

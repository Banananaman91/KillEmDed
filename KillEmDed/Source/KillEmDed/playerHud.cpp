// Fill out your copyright notice in the Description page of Project Settings.


#include "playerHud.h"

void AplayerHud::AddMessage(Message msg)
{
	messages.Add(msg);
}

void AplayerHud::DrawHUD()
{
	Super::DrawHUD();
	DrawMessages();
}

void AplayerHud::DrawMessages()
{
	for (size_t i = messages.Num() - 1; i >= 0; i--)
	{
		float ow, oh, pad = 10.0f;
		GetTextSize(messages[i].message, ow, oh, hudFont, 1.0f);

		float messageH = oh + 2 * pad;
		float x = 0, y = i * messageH;

		DrawRect(FLinearColor::Black, x, y, Canvas->SizeX, messageH);
		DrawText(messages[i].message, messages[i].fontColour, x + pad, y + pad, hudFont);

		messages[i].time -= GetWorld()->GetDeltaSeconds();

		if (messages[i].time < 0) messages.RemoveAt(i);
	}
}

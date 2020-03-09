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
	DrawHealthBar();
}

void AplayerHud::DrawMessages()
{
	 for (int i = messages.Num() - 1; i >= 0; i--)
	 {
		 float ow, oh, pad = 20.0f;
		 GetTextSize(messages[i].message, ow, oh, hudFont, 1.0f);

		 float messageH = oh + 2 * pad;
		 float x = 0, y = i * messageH;

		 DrawRect(FLinearColor::Black, x, y, Canvas->SizeX, messageH);
		 DrawTexture(messages[i].tex, x, y, messageH, messageH, 0, 0, 1, 1);
		 DrawText(messages[i].message, messages[i].fontColour, x + pad, y + pad, hudFont);

		 messages[i].time -= GetWorld()->GetDeltaSeconds();

		 if (messages[i].time < 0) messages.RemoveAt(i);
	 }
}

void AplayerHud::DrawHealthBar() {
	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	float percHp = avatar->Hp / avatar->MaxHp;
	DrawRect(FLinearColor::Blue, Canvas->SizeX - BarWidth - BarPad - BarMargin, Canvas->SizeY - BarHeight - BarPad - BarMargin, BarWidth + 2 * BarPad, BarHeight + 2 * BarPad);
	DrawRect(FLinearColor(1 - percHp, percHp, 0, 1), Canvas->SizeX - BarWidth - BarMargin, Canvas->SizeY - BarHeight - BarMargin, BarWidth * percHp, BarHeight);
	
}

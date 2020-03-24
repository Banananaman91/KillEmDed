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
	DrawWidgets();
	dims.X = Canvas->SizeX;
	dims.Y = Canvas->SizeY;
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

void AplayerHud::DrawWidgets() {
	for (int c = 0; c < widgets.Num(); c++) {
		DrawTexture(widgets[c].icon.tex, widgets[c].pos.Y, widgets[c].pos.X, widgets[c].size.X, widgets[c].size.Y, 0, 0, 1, 1);

		DrawText(widgets[c].icon.name, FLinearColor::Yellow, widgets[c].pos.Y, widgets[c].pos.X, hudFont, 0.6f, false);
	}
}

void AplayerHud::addWidget(Widget widget) {
	FVector2D start(200, 200), pad(12, 12);
	widget.size = FVector2D(100, 100);
	widget.pos = start;

	for (int c = 0; c < widgets.Num(); c++) {
		widget.pos.X += widget.size.X + pad.X;

		if (widget.pos.X + widget.size.X > dims.X) {
			widget.pos.X = start.X;
			widget.pos.Y += widget.size.Y + pad.Y;
		}
	}

	widgets.Add(widget);
}

void AplayerHud::clearWidgets() {
	widgets.Empty();
}

void AplayerHud::MouseClicked()
{
	FVector2D mouse;

	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	PController->GetMousePosition(mouse.X, mouse.Y);

	for (int c = 0; c < widgets.Num(); c++) {
		if (widgets[c].hit(mouse)) {
			heldWidget = &widgets[c];
			return;
		}
	}
}

void AplayerHud::MouseMoved()
{
	APlayerController* PController = GetWorld()->GetFirstPlayerController();

	float time = PController->GetInputKeyTimeDown(EKeys::LeftMouseButton);

	static FVector2D lastMouse;
	FVector2D thisMouse, dMouse;
	PController->GetMousePosition(thisMouse.Y, thisMouse.X);
	dMouse = thisMouse - lastMouse;

	if (time > 0.0f && heldWidget) {
		heldWidget->pos.Y += dMouse.X;
		heldWidget->pos.X += dMouse.Y;
	}

	lastMouse = thisMouse;
}

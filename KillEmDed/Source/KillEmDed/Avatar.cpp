// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"
#include "Projectile.h"
#include "playerHud.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"


// Sets default values
AAvatar::AAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddMovementInput(Knockback, 1.0f);
	Knockback *= 0.5f;
}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	check(InputComponent);
	InputComponent->BindAxis("Forward", this, &AAvatar::MoveForward);
	InputComponent->BindAxis("Strafe", this, &AAvatar::MoveRight);
	InputComponent->BindAxis("Yaw", this, &AAvatar::Yaw);
	InputComponent->BindAxis("Pitch", this, &AAvatar::Pitch);
	InputComponent->BindAction("Inventory", IE_Pressed, this, &AAvatar::ToggleInventory);
	InputComponent->BindAction("MouseClickedLMB", IE_Pressed, this, &AAvatar::MouseClicked);
}

void AAvatar::MoveForward(float amount)
{
	if (inventoryShowing) return;
	//Don't enter the body of this function if Controller is not set up yet, or if the amount is equal to zero
	if (Controller && amount) {
		FVector forward = GetActorForwardVector();
		//we call AddMovementInput to actually move the player by the 'amount' in 'forward' direction
		AddMovementInput(forward, amount);
	}
}

void AAvatar::MoveRight(float amount)
{
	if (inventoryShowing) return;
	if (Controller && amount) {
		FVector right = GetActorRightVector();
		AddMovementInput(right, amount);
	}
}

void AAvatar::Yaw(float amount)
{
	if (inventoryShowing) {
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
		hud->MouseMoved();
		return;
	}
	AddControllerYawInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AAvatar::Pitch(float amount)
{
	if (inventoryShowing) {
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
		hud->MouseMoved();
		return;
	}
	AddControllerPitchInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AAvatar::Pickup(APickupItem* item) {
	if (Backpack.Contains(item->Name)) Backpack[item->Name] += item->Quantity;
	else {
		Backpack.Add(item->Name, item->Quantity);
		Icons.Add(item->Name, item->Icon);
	}
}

void AAvatar::ToggleInventory() {

	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());

	if (inventoryShowing) {
		hud->clearWidgets();
		inventoryShowing = false;
		PController->bShowMouseCursor = false;
		return;
	}
	else {
		inventoryShowing = true;
		PController->bShowMouseCursor = true;
		for (TMap<FString, int>::TIterator it = Backpack.CreateIterator(); it; ++it) {
			FString fs = it->Key + FString::Printf(TEXT("x%d"), it->Value);
			UTexture2D* tex = NULL;
			if (Icons.Find(it->Key)) {
				tex = Icons[it->Key];
				Widget w(Icon(fs, tex), fs);
				hud->addWidget(w);
			}
		}
	}
}

void AAvatar::MouseClicked() {
	if (inventoryShowing) {
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
		hud->MouseClicked();
	}
	else {
		if (BPBullet) {
			FVector fwd = GetActorForwardVector();
			FVector nozzle = GetMesh()->GetBoneLocation("index_03_l");

			nozzle += fwd * BulletSpawnDistance;

			AProjectile* bullet = GetWorld()->SpawnActor<AProjectile>(BPBullet, nozzle, RootComponent->GetComponentRotation());

			if (bullet) {
				bullet->Firer = this;
				bullet->ProxSphere->AddImpulse(fwd * BulletLaunchImpulse);
			}
		}
	}
}

float AAvatar::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	Hp -= Damage;

	Knockback = GetActorLocation();
	Knockback.Normalize();
	Knockback *= Damage * 500;

	if (Hp <= 0) Hp = 0;
	return Damage;
}


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
	if (weapons.Num() != 0) {
		FireTime -= DeltaTime;
		if (FireTime < 0) {
			Shoot();
			if (Shooting) FireTime = weapons[weaponSelect].fireRate;
		}
	}
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
	InputComponent->BindAction("MouseClickedLMB", IE_Released, this, &AAvatar::MouseReleased);
	InputComponent->BindAction("WeaponToggle", IE_Pressed, this, &AAvatar::ToggleWeapon);
}

void AAvatar::MoveForward(float amount)
{
	if (inventoryShowing || GameOver) return;
	//Don't enter the body of this function if Controller is not set up yet, or if the amount is equal to zero
	if (Controller && amount) {
		FVector forward = GetActorForwardVector();
		//we call AddMovementInput to actually move the player by the 'amount' in 'forward' direction
		AddMovementInput(forward, amount);
	}
}

void AAvatar::MoveRight(float amount)
{
	if (inventoryShowing || GameOver) return;
	if (Controller && amount) {
		FVector right = GetActorRightVector();
		AddMovementInput(right, amount);
	}
}

void AAvatar::Yaw(float amount)
{
	if (inventoryShowing || GameOver) {
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		return;
	}
	AddControllerYawInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AAvatar::Pitch(float amount)
{
	if (inventoryShowing || GameOver) {
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		return;
	}
	AddControllerPitchInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AAvatar::Pickup(APickupItem* item) {
	addedWeapon = false;

	switch (item->itemType)
	{
	case ItemType::projectile:
		for (int c = 0; c < weapons.Num(); c++) {
			if (weapons[c].name == item->Name) {
				addedWeapon = true;
				weapons[c].ammo += item->Quantity;
				if (weapons[c].ammo > weapons[c].ammoCapacity) weapons[c].ammo = weapons[c].ammoCapacity;
				break;
			}
		}
		if (!addedWeapon) {
			GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Yellow, "Weapon: Upgrade cost " + FString::FromInt(item->UpgradeCost));
			weapons.Add(Weapon(item->BPItem, item->Quantity, AmmoCapacity, item->Name, item->Icon, item->UpgradeCost, item->FireRate));
		}
			break;
	case ItemType::health:
		Hp += item->Quantity;
		if (Hp > MaxHp) Hp = MaxHp;
			break;
	default:
		break;
	}
}

void AAvatar::ToggleInventory() {
	if (GameOver) return;
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
		for (int c = 0; c < weapons.Num(); c++) {
			FString fs = weapons[c].name;
			UTexture2D* tex = weapons[c].icon;
			Weapon* item = &weapons[c];

			Widget w(Icon(fs, tex), fs, item);
			hud->addWidget(w);
		}
	}
}

void AAvatar::ToggleWeapon()
{
	if (weaponSelect >= weapons.Num() - 1 || weapons.Num() == 0) {
		weaponSelect = 0;
	}
	else {
		weaponSelect++;
	}
}

void AAvatar::MouseClicked() {
	if (inventoryShowing) {
		if (Shooting) Shooting = false;
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
		hud->MouseClicked();
	}
	else if (!Shooting) Shooting = true;
}

void AAvatar::MouseReleased()
{
	if (Shooting) Shooting = false;
}

void AAvatar::Shoot()
{
	if (Shooting) {
		if (weapons.Num() != 0) {
			if (weapons[weaponSelect].ammo > 0) {
				FVector fwd = GetActorForwardVector();
				FVector nozzle = GetMesh()->GetBoneLocation("index_03_l");

				nozzle += fwd * BulletSpawnDistance;

				AProjectile* bullet = GetWorld()->SpawnActor<AProjectile>(weapons[weaponSelect].weapon, nozzle, RootComponent->GetComponentRotation());

				if (bullet) {
					bullet->Damage += weapons[weaponSelect].damageUpgrade;
					bullet->Firer = this;
					bullet->ProxSphere->AddImpulse(fwd * BulletLaunchImpulse);
					weapons[weaponSelect].ammo--;
				}
			}
		}
	}
}

void AAvatar::AddExperience(float amount)
{
	TotalXP += amount;
}

float AAvatar::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	Hp -= Damage;

	Knockback = GetActorLocation();
	Knockback.Normalize();
	Knockback *= Damage * 500;

	if (Hp <= 0) {
		Hp = 0;
		GameOver = true;
	}
	return Damage;
}

void AAvatar::Upgrade(Weapon* item)
{
	item->ammoCapacity += 10;
	item->damageUpgrade += 10;
}


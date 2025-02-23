// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "PickupItem.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Avatar.generated.h"

struct Weapon {
	UClass* weapon;
	FString name;
	int ammo;
	int ammoCapacity;
	int upgradeCost;
	int damageUpgrade = 0;
	UTexture2D* icon;
	float fireRate;

	Weapon(UClass* iWeapon, int iAmmo, int iAmmoCapacity, FString iName, UTexture2D* iIcon, int iUpgradeCost, float iFireRate) {
		weapon = iWeapon;
		ammo = iAmmo;
		ammoCapacity = iAmmoCapacity;
		name = iName;
		icon = iIcon;
		upgradeCost = iUpgradeCost;
		fireRate = iFireRate;
	}
};

UCLASS()
class KILLEMDED_API AAvatar : public ACharacter
{
	GENERATED_BODY()
		//New member function declarations
		//These will be used to move the player around
	
	void MoveForward(float amount);
	void MoveRight(float amount);
	void Yaw(float amount);
	void Pitch(float amount);

public:
	// Sets default values for this character's properties
	AAvatar();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float Hp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float MaxHp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float BulletLaunchImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float BulletSpawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		int AmmoCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float FireRate;

	float FireTime;

	TArray<Weapon> weapons;

	TMap<FString, int> Backpack;

	TMap<FString, UTexture2D*> Icons;

	bool inventoryShowing;

	bool addedWeapon;

	void Pickup(APickupItem* item);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	void ToggleInventory();

	void ToggleWeapon();

	void MouseClicked();

	void MouseReleased();

	void Shoot();

	void AddExperience(float amount);

	int TotalXP = 0;

	bool Shooting;

	bool GameOver;

	FVector Knockback;

	int weaponSelect = 0;

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void Upgrade(Weapon* item);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

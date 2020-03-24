// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "PickupItem.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Avatar.generated.h"

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
		UClass* BPBullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float BulletLaunchImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float BulletSpawnDistance;

	TMap<FString, int> Backpack;

	TMap<FString, UTexture2D*> Icons;

	bool inventoryShowing;

	void Pickup(APickupItem* item);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	void ToggleInventory();

	void MouseClicked();

	FVector Knockback;

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "UObject/Class.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupItem.generated.h"

UENUM(BlueprintType)
enum class ItemType : uint8 { health, projectile };

UCLASS()
class KILLEMDED_API APickupItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupItem(const class FObjectInitializer& PCIP);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		int32 Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		ItemType itemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		float FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		int UpgradeCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		UClass* BPItem;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Item)
		USphereComponent* ProxSphere;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Item)
		UParticleSystemComponent* Particle;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Item)
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Item)
		UTexture2D* Icon;

	UFUNCTION(BlueprintNativeEvent, Category = Colision)
		void Prox(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

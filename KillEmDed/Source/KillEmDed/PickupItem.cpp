// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupItem.h"
#include "Avatar.h"
#include "playerHud.h"

// Sets default values
APickupItem::APickupItem(const class FObjectInitializer& PCIP) : Super(PCIP)
{
	Name = "UNKNOWN ITEM";
	Quantity = 0;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	Mesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	RootComponent = Mesh;
	Mesh->SetSimulatePhysics(true);

	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &APickupItem::Prox);
	ProxSphere->SetupAttachment(Mesh);

}

// Called when the game starts or when spawned
void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupItem::Prox_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	if (Cast<AAvatar>(OtherActor) == nullptr) return;

	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
	hud->AddMessage(Message(FString("Picked up ") + FString::FromInt(Quantity) + FString(" ") + Name, 5.0f, FColor::Blue, Icon));

	avatar->Pickup(this);

	Destroy();
}


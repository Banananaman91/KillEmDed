// Fill out your copyright notice in the Description page of Project Settings.


#include "NpcCharacter.h"

// Sets default values
ANpcCharacter::ANpcCharacter(const FObjectInitializer& PCIP) : Super(PCIP)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ProxSphere"));
	
	ProxSphere->SetupAttachment(RootComponent);
	ProxSphere->SetSphereRadius(32.0f);

	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &ANpcCharacter::InProximity);
}

void ANpcCharacter::InProximity_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AAvatar* player = Cast<AAvatar>(OtherActor);
	if (player == nullptr) return;

	if (OtherComp != player->GetRootComponent()) return;

	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	AplayerHud* hud = Cast<AplayerHud>(PController->GetHUD());
	hud->AddMessage(Message(NpcMessage, 5.0f, FColor::White));
}

// Called when the game starts or when spawned
void ANpcCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANpcCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANpcCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


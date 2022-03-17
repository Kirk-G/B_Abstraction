// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstractionPlayerCharacter.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/DamageType.h"

// Sets default values
AAbstractionPlayerCharacter::AAbstractionPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAbstractionPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAbstractionPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAbstractionPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
// Called when the actor falls out of the world (below KILLZ)
void AAbstractionPlayerCharacter::FellOutOfWorld(const UDamageType& dmgType)
{
	APlayerController* PlayerController = GetController<APlayerController>();
	if(PlayerController)
	{
		PlayerContoller->RestartLevel();
	}
}
*/
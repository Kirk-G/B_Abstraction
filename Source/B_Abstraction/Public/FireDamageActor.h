// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "FireDamageActor.generated.h"


class UDealDamageComponent;
class UParticleSystemComponent;

UCLASS()
class B_ABSTRACTION_API AFireDamageActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireDamageActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	UDealDamageComponent* DealDamageComponent;

	UPROPERTY()
	UParticleSystemComponent* ParticleSystemComponent;

	


};

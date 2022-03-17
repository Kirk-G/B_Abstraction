// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectiveComponent.h"
#include "ObjectiveWorldSubsystem.h"


UObjectiveComponent::UObjectiveComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;
	State = EObjectiveState::OS_Inactive;

}

void UObjectiveComponent::SetState(EObjectiveState NewState)
{
	if(NewState != State)
	{
		State = NewState;
		StateChangedEvent.Broadcast(this, State);
	}
}



// Called when the game starts
void UObjectiveComponent::BeginPlay()
{
	Super::BeginPlay();

	// register
	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if(ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->AddObjective(this);
	}
	
}

void UObjectiveComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if(ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->RemoveObjective(this);
	}
	Super::EndPlay(EndPlayReason);

}


// Called every frame
void UObjectiveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}



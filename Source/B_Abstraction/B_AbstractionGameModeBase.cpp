// Copyright Epic Games, Inc. All Rights Reserved.


#include "B_AbstractionGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "ObjectiveWorldSubsystem.h"


void AB_AbstractionGameModeBase::StartPlay()
{
	Super::StartPlay();

	UObjectiveWorldSubsystem* ObjectiveWorldSubsystem = GetWorld()->GetSubsystem<UObjectiveWorldSubsystem>();
	if(ObjectiveWorldSubsystem)
	{
		ObjectiveWorldSubsystem->CreateObjectiveWidget(ObjectiveWidgetClass);
		ObjectiveWorldSubsystem->DisplayObjectiveWidget();
	}
}


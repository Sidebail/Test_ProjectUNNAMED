// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Test_ProjectUNNAMEDGameMode.h"
#include "Test_ProjectUNNAMEDCharacter.h"

ATest_ProjectUNNAMEDGameMode::ATest_ProjectUNNAMEDGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATest_ProjectUNNAMEDCharacter::StaticClass();	
}

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Test_ProjectUNNAMEDTarget : TargetRules
{
	public Test_ProjectUNNAMEDTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Test_ProjectUNNAMED");
	}
}

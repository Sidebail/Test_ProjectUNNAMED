// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Test_ProjectUNNAMEDEditorTarget : TargetRules
{
	public Test_ProjectUNNAMEDEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Test_ProjectUNNAMED");
	}
}

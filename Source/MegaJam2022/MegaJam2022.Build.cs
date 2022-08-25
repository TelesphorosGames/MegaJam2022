// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MegaJam2022 : ModuleRules
{
	public MegaJam2022(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

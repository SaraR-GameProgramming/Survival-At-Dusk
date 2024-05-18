// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Survival_at_Dusk : ModuleRules
{
	public Survival_at_Dusk(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

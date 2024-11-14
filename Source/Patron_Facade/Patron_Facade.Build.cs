// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patron_Facade : ModuleRules
{
	public Patron_Facade(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}

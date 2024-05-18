// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival_at_Dusk/Survival_at_DuskGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_at_DuskGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SURVIVAL_AT_DUSK_API UClass* Z_Construct_UClass_ASurvival_at_DuskGameMode();
	SURVIVAL_AT_DUSK_API UClass* Z_Construct_UClass_ASurvival_at_DuskGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Survival_at_Dusk();
// End Cross Module References
	void ASurvival_at_DuskGameMode::StaticRegisterNativesASurvival_at_DuskGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvival_at_DuskGameMode);
	UClass* Z_Construct_UClass_ASurvival_at_DuskGameMode_NoRegister()
	{
		return ASurvival_at_DuskGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival_at_Dusk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Survival_at_DuskGameMode.h" },
		{ "ModuleRelativePath", "Survival_at_DuskGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvival_at_DuskGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::ClassParams = {
		&ASurvival_at_DuskGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvival_at_DuskGameMode()
	{
		if (!Z_Registration_Info_UClass_ASurvival_at_DuskGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvival_at_DuskGameMode.OuterSingleton, Z_Construct_UClass_ASurvival_at_DuskGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvival_at_DuskGameMode.OuterSingleton;
	}
	template<> SURVIVAL_AT_DUSK_API UClass* StaticClass<ASurvival_at_DuskGameMode>()
	{
		return ASurvival_at_DuskGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvival_at_DuskGameMode);
	ASurvival_at_DuskGameMode::~ASurvival_at_DuskGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_saral_Unreal_Projects_Survival_At_Dusk_Survival_at_Dusk_Source_Survival_at_Dusk_Survival_at_DuskGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_saral_Unreal_Projects_Survival_At_Dusk_Survival_at_Dusk_Source_Survival_at_Dusk_Survival_at_DuskGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvival_at_DuskGameMode, ASurvival_at_DuskGameMode::StaticClass, TEXT("ASurvival_at_DuskGameMode"), &Z_Registration_Info_UClass_ASurvival_at_DuskGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvival_at_DuskGameMode), 3829357076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_saral_Unreal_Projects_Survival_At_Dusk_Survival_at_Dusk_Source_Survival_at_Dusk_Survival_at_DuskGameMode_h_2951823932(TEXT("/Script/Survival_at_Dusk"),
		Z_CompiledInDeferFile_FID_Users_saral_Unreal_Projects_Survival_At_Dusk_Survival_at_Dusk_Source_Survival_at_Dusk_Survival_at_DuskGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_saral_Unreal_Projects_Survival_At_Dusk_Survival_at_Dusk_Source_Survival_at_Dusk_Survival_at_DuskGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

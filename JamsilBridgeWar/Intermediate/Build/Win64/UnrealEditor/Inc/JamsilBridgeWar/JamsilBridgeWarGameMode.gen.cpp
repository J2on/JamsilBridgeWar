// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamsilBridgeWar/JamsilBridgeWarGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamsilBridgeWarGameMode() {}
// Cross Module References
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarGameMode_NoRegister();
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JamsilBridgeWar();
// End Cross Module References
	void AJamsilBridgeWarGameMode::StaticRegisterNativesAJamsilBridgeWarGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamsilBridgeWarGameMode);
	UClass* Z_Construct_UClass_AJamsilBridgeWarGameMode_NoRegister()
	{
		return AJamsilBridgeWarGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JamsilBridgeWar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JamsilBridgeWarGameMode.h" },
		{ "ModuleRelativePath", "JamsilBridgeWarGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamsilBridgeWarGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::ClassParams = {
		&AJamsilBridgeWarGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamsilBridgeWarGameMode()
	{
		if (!Z_Registration_Info_UClass_AJamsilBridgeWarGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamsilBridgeWarGameMode.OuterSingleton, Z_Construct_UClass_AJamsilBridgeWarGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJamsilBridgeWarGameMode.OuterSingleton;
	}
	template<> JAMSILBRIDGEWAR_API UClass* StaticClass<AJamsilBridgeWarGameMode>()
	{
		return AJamsilBridgeWarGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamsilBridgeWarGameMode);
	struct Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJamsilBridgeWarGameMode, AJamsilBridgeWarGameMode::StaticClass, TEXT("AJamsilBridgeWarGameMode"), &Z_Registration_Info_UClass_AJamsilBridgeWarGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamsilBridgeWarGameMode), 3183355475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarGameMode_h_111381563(TEXT("/Script/JamsilBridgeWar"),
		Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

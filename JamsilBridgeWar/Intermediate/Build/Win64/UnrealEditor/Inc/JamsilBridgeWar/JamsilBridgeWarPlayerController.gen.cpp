// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamsilBridgeWar/JamsilBridgeWarPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamsilBridgeWarPlayerController() {}
// Cross Module References
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarPlayerController_NoRegister();
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_JamsilBridgeWar();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	void AJamsilBridgeWarPlayerController::StaticRegisterNativesAJamsilBridgeWarPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamsilBridgeWarPlayerController);
	UClass* Z_Construct_UClass_AJamsilBridgeWarPlayerController_NoRegister()
	{
		return AJamsilBridgeWarPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_JamsilBridgeWar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "JamsilBridgeWarPlayerController.h" },
		{ "ModuleRelativePath", "JamsilBridgeWarPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "JamsilBridgeWarPlayerController.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamsilBridgeWarPlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "JamsilBridgeWarPlayerController.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamsilBridgeWarPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_FXCursor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::NewProp_FXCursor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamsilBridgeWarPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::ClassParams = {
		&AJamsilBridgeWarPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamsilBridgeWarPlayerController()
	{
		if (!Z_Registration_Info_UClass_AJamsilBridgeWarPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamsilBridgeWarPlayerController.OuterSingleton, Z_Construct_UClass_AJamsilBridgeWarPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJamsilBridgeWarPlayerController.OuterSingleton;
	}
	template<> JAMSILBRIDGEWAR_API UClass* StaticClass<AJamsilBridgeWarPlayerController>()
	{
		return AJamsilBridgeWarPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamsilBridgeWarPlayerController);
	struct Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJamsilBridgeWarPlayerController, AJamsilBridgeWarPlayerController::StaticClass, TEXT("AJamsilBridgeWarPlayerController"), &Z_Registration_Info_UClass_AJamsilBridgeWarPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamsilBridgeWarPlayerController), 994893649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarPlayerController_h_3997617947(TEXT("/Script/JamsilBridgeWar"),
		Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

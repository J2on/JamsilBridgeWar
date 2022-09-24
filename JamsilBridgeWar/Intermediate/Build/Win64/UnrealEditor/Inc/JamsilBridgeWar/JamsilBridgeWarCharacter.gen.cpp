// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamsilBridgeWar/JamsilBridgeWarCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamsilBridgeWarCharacter() {}
// Cross Module References
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarCharacter_NoRegister();
	JAMSILBRIDGEWAR_API UClass* Z_Construct_UClass_AJamsilBridgeWarCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_JamsilBridgeWar();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AJamsilBridgeWarCharacter::StaticRegisterNativesAJamsilBridgeWarCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamsilBridgeWarCharacter);
	UClass* Z_Construct_UClass_AJamsilBridgeWarCharacter_NoRegister()
	{
		return AJamsilBridgeWarCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_JamsilBridgeWar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JamsilBridgeWarCharacter.h" },
		{ "ModuleRelativePath", "JamsilBridgeWarCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamsilBridgeWarCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamsilBridgeWarCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JamsilBridgeWarCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamsilBridgeWarCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "JamsilBridgeWarCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJamsilBridgeWarCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamsilBridgeWarCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::ClassParams = {
		&AJamsilBridgeWarCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJamsilBridgeWarCharacter()
	{
		if (!Z_Registration_Info_UClass_AJamsilBridgeWarCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamsilBridgeWarCharacter.OuterSingleton, Z_Construct_UClass_AJamsilBridgeWarCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJamsilBridgeWarCharacter.OuterSingleton;
	}
	template<> JAMSILBRIDGEWAR_API UClass* StaticClass<AJamsilBridgeWarCharacter>()
	{
		return AJamsilBridgeWarCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamsilBridgeWarCharacter);
	struct Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJamsilBridgeWarCharacter, AJamsilBridgeWarCharacter::StaticClass, TEXT("AJamsilBridgeWarCharacter"), &Z_Registration_Info_UClass_AJamsilBridgeWarCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamsilBridgeWarCharacter), 2449267010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarCharacter_h_2431053471(TEXT("/Script/JamsilBridgeWar"),
		Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JamsilBridgeWar_Source_JamsilBridgeWar_JamsilBridgeWarCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

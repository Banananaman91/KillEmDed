// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KillEmDed/playerHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayerHud() {}
// Cross Module References
	KILLEMDED_API UClass* Z_Construct_UClass_AplayerHud_NoRegister();
	KILLEMDED_API UClass* Z_Construct_UClass_AplayerHud();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_KillEmDed();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void AplayerHud::StaticRegisterNativesAplayerHud()
	{
	}
	UClass* Z_Construct_UClass_AplayerHud_NoRegister()
	{
		return AplayerHud::StaticClass();
	}
	struct Z_Construct_UClass_AplayerHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarPad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarPad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hudFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AplayerHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_KillEmDed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "playerHud.h" },
		{ "ModuleRelativePath", "playerHud.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_BarMargin_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_BarMargin = { "BarMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, BarMargin), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarMargin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_BarPad_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_BarPad = { "BarPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, BarPad), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarPad_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarPad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_BarHeight_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_BarHeight = { "BarHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, BarHeight), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_BarWidth_MetaData[] = {
		{ "Category", "HealthBar" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_BarWidth = { "BarWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, BarWidth), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_BarWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_TextScale_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, TextScale), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_TextScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenY_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, ScreenY), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenX_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, ScreenX), METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplayerHud_Statics::NewProp_hudFont_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "playerHud.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AplayerHud_Statics::NewProp_hudFont = { "hudFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AplayerHud, hudFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::NewProp_hudFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::NewProp_hudFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AplayerHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_BarMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_BarPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_BarHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_BarWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_TextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_ScreenX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AplayerHud_Statics::NewProp_hudFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AplayerHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplayerHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AplayerHud_Statics::ClassParams = {
		&AplayerHud::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AplayerHud_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AplayerHud_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AplayerHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AplayerHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AplayerHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AplayerHud, 2321758047);
	template<> KILLEMDED_API UClass* StaticClass<AplayerHud>()
	{
		return AplayerHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AplayerHud(Z_Construct_UClass_AplayerHud, &AplayerHud::StaticClass, TEXT("/Script/KillEmDed"), TEXT("AplayerHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AplayerHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

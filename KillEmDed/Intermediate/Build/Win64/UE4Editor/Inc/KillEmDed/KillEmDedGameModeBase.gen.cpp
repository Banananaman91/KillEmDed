// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KillEmDed/KillEmDedGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillEmDedGameModeBase() {}
// Cross Module References
	KILLEMDED_API UClass* Z_Construct_UClass_AKillEmDedGameModeBase_NoRegister();
	KILLEMDED_API UClass* Z_Construct_UClass_AKillEmDedGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_KillEmDed();
// End Cross Module References
	void AKillEmDedGameModeBase::StaticRegisterNativesAKillEmDedGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKillEmDedGameModeBase_NoRegister()
	{
		return AKillEmDedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKillEmDedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillEmDedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KillEmDed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillEmDedGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KillEmDedGameModeBase.h" },
		{ "ModuleRelativePath", "KillEmDedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillEmDedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillEmDedGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKillEmDedGameModeBase_Statics::ClassParams = {
		&AKillEmDedGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AKillEmDedGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKillEmDedGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKillEmDedGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKillEmDedGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKillEmDedGameModeBase, 1418321518);
	template<> KILLEMDED_API UClass* StaticClass<AKillEmDedGameModeBase>()
	{
		return AKillEmDedGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKillEmDedGameModeBase(Z_Construct_UClass_AKillEmDedGameModeBase, &AKillEmDedGameModeBase::StaticClass, TEXT("/Script/KillEmDed"), TEXT("AKillEmDedGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillEmDedGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

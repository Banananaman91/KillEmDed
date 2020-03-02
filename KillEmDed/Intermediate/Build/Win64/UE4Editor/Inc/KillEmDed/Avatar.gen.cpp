// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KillEmDed/Avatar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatar() {}
// Cross Module References
	KILLEMDED_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	KILLEMDED_API UClass* Z_Construct_UClass_AAvatar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_KillEmDed();
// End Cross Module References
	void AAvatar::StaticRegisterNativesAAvatar()
	{
	}
	UClass* Z_Construct_UClass_AAvatar_NoRegister()
	{
		return AAvatar::StaticClass();
	}
	struct Z_Construct_UClass_AAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KillEmDed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Avatar.h" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAvatar_Statics::ClassParams = {
		&AAvatar::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAvatar, 1196380408);
	template<> KILLEMDED_API UClass* StaticClass<AAvatar>()
	{
		return AAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAvatar(Z_Construct_UClass_AAvatar, &AAvatar::StaticClass, TEXT("/Script/KillEmDed"), TEXT("AAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

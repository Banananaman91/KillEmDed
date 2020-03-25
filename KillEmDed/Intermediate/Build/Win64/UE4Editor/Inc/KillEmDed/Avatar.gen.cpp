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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletLaunchImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletLaunchImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, FireRate), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_FireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_AmmoCapacity_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_AmmoCapacity = { "AmmoCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, AmmoCapacity), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_AmmoCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_AmmoCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BulletSpawnDistance_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BulletSpawnDistance = { "BulletSpawnDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, BulletSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BulletSpawnDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BulletSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BulletLaunchImpulse_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BulletLaunchImpulse = { "BulletLaunchImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, BulletLaunchImpulse), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BulletLaunchImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BulletLaunchImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, MaxHp), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_MaxHp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_MaxHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_Hp_MetaData[] = {
		{ "Category", "PlayerProperties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_Hp = { "Hp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, Hp), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_Hp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_Hp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_FireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_AmmoCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_BulletSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_BulletLaunchImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_MaxHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_Hp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAvatar_Statics::ClassParams = {
		&AAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAvatar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AAvatar, 1439935618);
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

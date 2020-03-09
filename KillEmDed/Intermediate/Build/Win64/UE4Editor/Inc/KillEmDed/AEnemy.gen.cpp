// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KillEmDed/AEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEnemy() {}
// Cross Module References
	KILLEMDED_API UClass* Z_Construct_UClass_AAEnemy_NoRegister();
	KILLEMDED_API UClass* Z_Construct_UClass_AAEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_KillEmDed();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void AAEnemy::StaticRegisterNativesAAEnemy()
	{
	}
	UClass* Z_Construct_UClass_AAEnemy_NoRegister()
	{
		return AAEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRangeSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackRangeSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastStrike_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastStrike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BPLoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Experience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KillEmDed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AEnemy.h" },
		{ "ModuleRelativePath", "AEnemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackRangeSphere_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackRangeSphere = { "AttackRangeSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, AttackRangeSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackRangeSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackRangeSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_SightSphere_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_SightSphere = { "SightSphere", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, SightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_SightSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_SightSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_TimeSinceLastStrike_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_TimeSinceLastStrike = { "TimeSinceLastStrike", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, TimeSinceLastStrike), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_TimeSinceLastStrike_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_TimeSinceLastStrike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackTimeout_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackTimeout = { "AttackTimeout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, AttackTimeout), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_BaseAttackDamage_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_BaseAttackDamage = { "BaseAttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, BaseAttackDamage), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_BaseAttackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_BaseAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_BPLoot_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_BPLoot = { "BPLoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, BPLoot), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_BPLoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_BPLoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, Experience), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_Experience_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_Experience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_HitPoints_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_HitPoints = { "HitPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, HitPoints), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_HitPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_HitPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MonsterProperties" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, speed), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackRangeSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_SightSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_TimeSinceLastStrike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_AttackTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_BaseAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_BPLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_Experience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_HitPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAEnemy_Statics::ClassParams = {
		&AAEnemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAEnemy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEnemy, 2605821818);
	template<> KILLEMDED_API UClass* StaticClass<AAEnemy>()
	{
		return AAEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEnemy(Z_Construct_UClass_AAEnemy, &AAEnemy::StaticClass, TEXT("/Script/KillEmDed"), TEXT("AAEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

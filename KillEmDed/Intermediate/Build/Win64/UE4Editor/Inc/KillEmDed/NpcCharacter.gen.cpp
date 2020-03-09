// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KillEmDed/NpcCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNpcCharacter() {}
// Cross Module References
	KILLEMDED_API UClass* Z_Construct_UClass_ANpcCharacter_NoRegister();
	KILLEMDED_API UClass* Z_Construct_UClass_ANpcCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_KillEmDed();
	KILLEMDED_API UFunction* Z_Construct_UFunction_ANpcCharacter_InProximity();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_ANpcCharacter_InProximity = FName(TEXT("InProximity"));
	void ANpcCharacter::InProximity(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
	{
		NpcCharacter_eventInProximity_Parms Parms;
		Parms.HitComp=HitComp;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		Parms.bFromSweep=bFromSweep ? true : false;
		Parms.SweepResult=SweepResult;
		ProcessEvent(FindFunctionChecked(NAME_ANpcCharacter_InProximity),&Parms);
	}
	void ANpcCharacter::StaticRegisterNativesANpcCharacter()
	{
		UClass* Class = ANpcCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InProximity", &ANpcCharacter::execInProximity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANpcCharacter_InProximity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NpcCharacter_eventInProximity_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NpcCharacter_eventInProximity_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NpcCharacter_eventInProximity_Parms), &Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NpcCharacter_eventInProximity_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NpcCharacter_eventInProximity_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NpcCharacter_eventInProximity_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NpcCharacter_eventInProximity_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANpcCharacter, nullptr, "InProximity", sizeof(NpcCharacter_eventInProximity_Parms), Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANpcCharacter_InProximity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANpcCharacter_InProximity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANpcCharacter_NoRegister()
	{
		return ANpcCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANpcCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NpcMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NpcFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NpcName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NpcName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProxSphere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANpcCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_KillEmDed,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANpcCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANpcCharacter_InProximity, "InProximity" }, // 4071939828
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NpcCharacter.h" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcMessage_MetaData[] = {
		{ "Category", "NPCMessage" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcMessage = { "NpcMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcCharacter, NpcMessage), METADATA_PARAMS(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcFace_MetaData[] = {
		{ "Category", "NPCMessage" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcFace = { "NpcFace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcCharacter, NpcFace), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcFace_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcName_MetaData[] = {
		{ "Category", "NPCName" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcName = { "NpcName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcCharacter, NpcName), METADATA_PARAMS(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANpcCharacter_Statics::NewProp_ProxSphere_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NpcCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANpcCharacter_Statics::NewProp_ProxSphere = { "ProxSphere", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANpcCharacter, ProxSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_ProxSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::NewProp_ProxSphere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANpcCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcCharacter_Statics::NewProp_NpcName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANpcCharacter_Statics::NewProp_ProxSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANpcCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANpcCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANpcCharacter_Statics::ClassParams = {
		&ANpcCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANpcCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANpcCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANpcCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANpcCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANpcCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANpcCharacter, 3104117928);
	template<> KILLEMDED_API UClass* StaticClass<ANpcCharacter>()
	{
		return ANpcCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANpcCharacter(Z_Construct_UClass_ANpcCharacter, &ANpcCharacter::StaticClass, TEXT("/Script/KillEmDed"), TEXT("ANpcCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANpcCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

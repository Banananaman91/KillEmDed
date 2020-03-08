// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef KILLEMDED_NpcCharacter_generated_h
#error "NpcCharacter.generated.h already included, missing '#pragma once' in NpcCharacter.h"
#endif
#define KILLEMDED_NpcCharacter_generated_h

#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_RPC_WRAPPERS \
	virtual void InProximity_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execInProximity) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InProximity_Implementation(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InProximity_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execInProximity) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InProximity_Implementation(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_EVENT_PARMS \
	struct NpcCharacter_eventInProximity_Parms \
	{ \
		UPrimitiveComponent* HitComp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_CALLBACK_WRAPPERS
#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANpcCharacter(); \
	friend struct Z_Construct_UClass_ANpcCharacter_Statics; \
public: \
	DECLARE_CLASS(ANpcCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(ANpcCharacter)


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANpcCharacter(); \
	friend struct Z_Construct_UClass_ANpcCharacter_Statics; \
public: \
	DECLARE_CLASS(ANpcCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(ANpcCharacter)


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANpcCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANpcCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANpcCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANpcCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANpcCharacter(ANpcCharacter&&); \
	NO_API ANpcCharacter(const ANpcCharacter&); \
public:


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANpcCharacter(ANpcCharacter&&); \
	NO_API ANpcCharacter(const ANpcCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANpcCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANpcCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANpcCharacter)


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_NpcCharacter_h_12_PROLOG \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_EVENT_PARMS


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_CALLBACK_WRAPPERS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_INCLASS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_NpcCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_CALLBACK_WRAPPERS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_NpcCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class ANpcCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_NpcCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
#ifdef KILLEMDED_ARotator_generated_h
#error "ARotator.generated.h already included, missing '#pragma once' in ARotator.h"
#endif
#define KILLEMDED_ARotator_generated_h

#define KillEmDed_Source_KillEmDed_ARotator_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAnimTriggered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimTriggered(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleProgress(Z_Param_value); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_ARotator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAnimTriggered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnimTriggered(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleProgress) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleProgress(Z_Param_value); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_ARotator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARotator(); \
	friend struct Z_Construct_UClass_AARotator_Statics; \
public: \
	DECLARE_CLASS(AARotator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AARotator)


#define KillEmDed_Source_KillEmDed_ARotator_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAARotator(); \
	friend struct Z_Construct_UClass_AARotator_Statics; \
public: \
	DECLARE_CLASS(AARotator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AARotator)


#define KillEmDed_Source_KillEmDed_ARotator_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARotator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARotator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARotator(AARotator&&); \
	NO_API AARotator(const AARotator&); \
public:


#define KillEmDed_Source_KillEmDed_ARotator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARotator(AARotator&&); \
	NO_API AARotator(const AARotator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARotator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARotator)


#define KillEmDed_Source_KillEmDed_ARotator_h_13_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_ARotator_h_10_PROLOG
#define KillEmDed_Source_KillEmDed_ARotator_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_ARotator_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_ARotator_h_13_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_ARotator_h_13_INCLASS \
	KillEmDed_Source_KillEmDed_ARotator_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_ARotator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_ARotator_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_ARotator_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_ARotator_h_13_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_ARotator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class AARotator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_ARotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

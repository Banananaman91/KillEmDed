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
#ifdef KILLEMDED_ADestructableObject_generated_h
#error "ADestructableObject.generated.h already included, missing '#pragma once' in ADestructableObject.h"
#endif
#define KILLEMDED_ADestructableObject_generated_h

#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_RPC_WRAPPERS \
	virtual void Prox_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox_Implementation(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Prox_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox_Implementation(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_EVENT_PARMS \
	struct ADestructableObject_eventProx_Parms \
	{ \
		UPrimitiveComponent* HitComp; \
		AActor* OtherActor; \
		UPrimitiveComponent* OtherComp; \
		int32 OtherBodyIndex; \
		bool bFromSweep; \
		FHitResult SweepResult; \
	};


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_CALLBACK_WRAPPERS
#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAADestructableObject(); \
	friend struct Z_Construct_UClass_AADestructableObject_Statics; \
public: \
	DECLARE_CLASS(AADestructableObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AADestructableObject)


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAADestructableObject(); \
	friend struct Z_Construct_UClass_AADestructableObject_Statics; \
public: \
	DECLARE_CLASS(AADestructableObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AADestructableObject)


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AADestructableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AADestructableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AADestructableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AADestructableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AADestructableObject(AADestructableObject&&); \
	NO_API AADestructableObject(const AADestructableObject&); \
public:


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AADestructableObject(AADestructableObject&&); \
	NO_API AADestructableObject(const AADestructableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AADestructableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AADestructableObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AADestructableObject)


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_ADestructableObject_h_10_PROLOG \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_EVENT_PARMS


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_CALLBACK_WRAPPERS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_INCLASS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_ADestructableObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_CALLBACK_WRAPPERS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_ADestructableObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class AADestructableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_ADestructableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

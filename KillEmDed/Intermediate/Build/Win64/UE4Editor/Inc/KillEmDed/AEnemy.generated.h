// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KILLEMDED_AEnemy_generated_h
#error "AEnemy.generated.h already included, missing '#pragma once' in AEnemy.h"
#endif
#define KILLEMDED_AEnemy_generated_h

#define KillEmDed_Source_KillEmDed_AEnemy_h_15_RPC_WRAPPERS
#define KillEmDed_Source_KillEmDed_AEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define KillEmDed_Source_KillEmDed_AEnemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAEnemy(); \
	friend struct Z_Construct_UClass_AAEnemy_Statics; \
public: \
	DECLARE_CLASS(AAEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AAEnemy)


#define KillEmDed_Source_KillEmDed_AEnemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAEnemy(); \
	friend struct Z_Construct_UClass_AAEnemy_Statics; \
public: \
	DECLARE_CLASS(AAEnemy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AAEnemy)


#define KillEmDed_Source_KillEmDed_AEnemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAEnemy(AAEnemy&&); \
	NO_API AAEnemy(const AAEnemy&); \
public:


#define KillEmDed_Source_KillEmDed_AEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAEnemy(AAEnemy&&); \
	NO_API AAEnemy(const AAEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAEnemy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAEnemy)


#define KillEmDed_Source_KillEmDed_AEnemy_h_15_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_AEnemy_h_12_PROLOG
#define KillEmDed_Source_KillEmDed_AEnemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_INCLASS \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_AEnemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_AEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class AAEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_AEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

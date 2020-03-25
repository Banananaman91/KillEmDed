// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KILLEMDED_playerHud_generated_h
#error "playerHud.generated.h already included, missing '#pragma once' in playerHud.h"
#endif
#define KILLEMDED_playerHud_generated_h

#define KillEmDed_Source_KillEmDed_playerHud_h_65_RPC_WRAPPERS
#define KillEmDed_Source_KillEmDed_playerHud_h_65_RPC_WRAPPERS_NO_PURE_DECLS
#define KillEmDed_Source_KillEmDed_playerHud_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplayerHud(); \
	friend struct Z_Construct_UClass_AplayerHud_Statics; \
public: \
	DECLARE_CLASS(AplayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AplayerHud)


#define KillEmDed_Source_KillEmDed_playerHud_h_65_INCLASS \
private: \
	static void StaticRegisterNativesAplayerHud(); \
	friend struct Z_Construct_UClass_AplayerHud_Statics; \
public: \
	DECLARE_CLASS(AplayerHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AplayerHud)


#define KillEmDed_Source_KillEmDed_playerHud_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplayerHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerHud(AplayerHud&&); \
	NO_API AplayerHud(const AplayerHud&); \
public:


#define KillEmDed_Source_KillEmDed_playerHud_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AplayerHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AplayerHud(AplayerHud&&); \
	NO_API AplayerHud(const AplayerHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AplayerHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AplayerHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AplayerHud)


#define KillEmDed_Source_KillEmDed_playerHud_h_65_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_playerHud_h_62_PROLOG
#define KillEmDed_Source_KillEmDed_playerHud_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_playerHud_h_65_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_playerHud_h_65_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_playerHud_h_65_INCLASS \
	KillEmDed_Source_KillEmDed_playerHud_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_playerHud_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_playerHud_h_65_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_playerHud_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_playerHud_h_65_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_playerHud_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class AplayerHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_playerHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

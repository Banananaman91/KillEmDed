// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KILLEMDED_Avatar_generated_h
#error "Avatar.generated.h already included, missing '#pragma once' in Avatar.h"
#endif
#define KILLEMDED_Avatar_generated_h

#define KillEmDed_Source_KillEmDed_Avatar_h_13_RPC_WRAPPERS
#define KillEmDed_Source_KillEmDed_Avatar_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define KillEmDed_Source_KillEmDed_Avatar_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvatar(); \
	friend struct Z_Construct_UClass_AAvatar_Statics; \
public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AAvatar)


#define KillEmDed_Source_KillEmDed_Avatar_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAAvatar(); \
	friend struct Z_Construct_UClass_AAvatar_Statics; \
public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KillEmDed"), NO_API) \
	DECLARE_SERIALIZER(AAvatar)


#define KillEmDed_Source_KillEmDed_Avatar_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAvatar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAvatar(AAvatar&&); \
	NO_API AAvatar(const AAvatar&); \
public:


#define KillEmDed_Source_KillEmDed_Avatar_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAvatar(AAvatar&&); \
	NO_API AAvatar(const AAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvatar)


#define KillEmDed_Source_KillEmDed_Avatar_h_13_PRIVATE_PROPERTY_OFFSET
#define KillEmDed_Source_KillEmDed_Avatar_h_10_PROLOG
#define KillEmDed_Source_KillEmDed_Avatar_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_Avatar_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_Avatar_h_13_RPC_WRAPPERS \
	KillEmDed_Source_KillEmDed_Avatar_h_13_INCLASS \
	KillEmDed_Source_KillEmDed_Avatar_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KillEmDed_Source_KillEmDed_Avatar_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KillEmDed_Source_KillEmDed_Avatar_h_13_PRIVATE_PROPERTY_OFFSET \
	KillEmDed_Source_KillEmDed_Avatar_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_Avatar_h_13_INCLASS_NO_PURE_DECLS \
	KillEmDed_Source_KillEmDed_Avatar_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KILLEMDED_API UClass* StaticClass<class AAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KillEmDed_Source_KillEmDed_Avatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

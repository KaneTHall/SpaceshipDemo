// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_PlayerControllerBase_generated_h
#error "PlayerControllerBase.generated.h already included, missing '#pragma once' in PlayerControllerBase.h"
#endif
#define SPACESHIPDEMO_PlayerControllerBase_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDClass() { return STRUCT_OFFSET(APlayerControllerBase, HUDClass); } \
	FORCEINLINE static uint32 __PPO__HUD() { return STRUCT_OFFSET(APlayerControllerBase, HUD); }


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_13_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class APlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_PlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

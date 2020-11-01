// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_EnemyShip_generated_h
#error "EnemyShip.generated.h already included, missing '#pragma once' in EnemyShip.h"
#endif
#define SPACESHIPDEMO_EnemyShip_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShip(); \
	friend struct Z_Construct_UClass_AEnemyShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyShip(); \
	friend struct Z_Construct_UClass_AEnemyShip_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip(AEnemyShip&&); \
	NO_API AEnemyShip(const AEnemyShip&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip(AEnemyShip&&); \
	NO_API AEnemyShip(const AEnemyShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloatingPawnMovement() { return STRUCT_OFFSET(AEnemyShip, FloatingPawnMovement); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_14_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AEnemyShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_EnemyShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

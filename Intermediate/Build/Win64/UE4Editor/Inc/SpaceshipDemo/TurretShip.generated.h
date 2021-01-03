// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_TurretShip_generated_h
#error "TurretShip.generated.h already included, missing '#pragma once' in TurretShip.h"
#endif
#define SPACESHIPDEMO_TurretShip_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurretShip(); \
	friend struct Z_Construct_UClass_ATurretShip_Statics; \
public: \
	DECLARE_CLASS(ATurretShip, AEnemyShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ATurretShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATurretShip(); \
	friend struct Z_Construct_UClass_ATurretShip_Statics; \
public: \
	DECLARE_CLASS(ATurretShip, AEnemyShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ATurretShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurretShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurretShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretShip(ATurretShip&&); \
	NO_API ATurretShip(const ATurretShip&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurretShip(ATurretShip&&); \
	NO_API ATurretShip(const ATurretShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurretShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurretShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurretShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CannonMesh() { return STRUCT_OFFSET(ATurretShip, CannonMesh); } \
	FORCEINLINE static uint32 __PPO__ShootPointTwo() { return STRUCT_OFFSET(ATurretShip, ShootPointTwo); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_14_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ATurretShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_TurretShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

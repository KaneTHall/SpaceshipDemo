// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_PlayerShip_generated_h
#error "PlayerShip.generated.h already included, missing '#pragma once' in PlayerShip.h"
#endif
#define SPACESHIPDEMO_PlayerShip_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShip(); \
	friend struct Z_Construct_UClass_APlayerShip_Statics; \
public: \
	DECLARE_CLASS(APlayerShip, ABaseShip, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayerShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShip(APlayerShip&&); \
	NO_API APlayerShip(const APlayerShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(APlayerShip, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__PlayerCam() { return STRUCT_OFFSET(APlayerShip, PlayerCam); } \
	FORCEINLINE static uint32 __PPO__EnginePoint() { return STRUCT_OFFSET(APlayerShip, EnginePoint); } \
	FORCEINLINE static uint32 __PPO__EnginePSC() { return STRUCT_OFFSET(APlayerShip, EnginePSC); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(APlayerShip, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(APlayerShip, Acceleration); } \
	FORCEINLINE static uint32 __PPO__OnBoostSound() { return STRUCT_OFFSET(APlayerShip, OnBoostSound); } \
	FORCEINLINE static uint32 __PPO__CruiseSpeed() { return STRUCT_OFFSET(APlayerShip, CruiseSpeed); } \
	FORCEINLINE static uint32 __PPO__BoostSpeed() { return STRUCT_OFFSET(APlayerShip, BoostSpeed); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_16_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class APlayerShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_PlayerShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

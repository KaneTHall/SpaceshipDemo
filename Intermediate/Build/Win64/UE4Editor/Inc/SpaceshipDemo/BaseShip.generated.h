// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_BaseShip_generated_h
#error "BaseShip.generated.h already included, missing '#pragma once' in BaseShip.h"
#endif
#define SPACESHIPDEMO_BaseShip_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseShip(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseShip) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShip); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShip(ABaseShip&&); \
	NO_API ABaseShip(const ABaseShip&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShip(ABaseShip&&); \
	NO_API ABaseShip(const ABaseShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapComp() { return STRUCT_OFFSET(ABaseShip, CapComp); } \
	FORCEINLINE static uint32 __PPO__ShipMesh() { return STRUCT_OFFSET(ABaseShip, ShipMesh); } \
	FORCEINLINE static uint32 __PPO__ShootPointOne() { return STRUCT_OFFSET(ABaseShip, ShootPointOne); } \
	FORCEINLINE static uint32 __PPO__ShootPointTwo() { return STRUCT_OFFSET(ABaseShip, ShootPointTwo); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_11_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ABaseShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SPACESHIPDEMO_BaseShip_generated_h
#error "BaseShip.generated.h already included, missing '#pragma once' in BaseShip.h"
#endif
#define SPACESHIPDEMO_BaseShip_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHealthPercent); \
	DECLARE_FUNCTION(execCrashed);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHealthPercent); \
	DECLARE_FUNCTION(execCrashed);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABaseShip(); \
	friend struct Z_Construct_UClass_ABaseShip_Statics; \
public: \
	DECLARE_CLASS(ABaseShip, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_STANDARD_CONSTRUCTORS \
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


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShip(ABaseShip&&); \
	NO_API ABaseShip(const ABaseShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShip); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseShip)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseShip, Health); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ABaseShip, Damage); } \
	FORCEINLINE static uint32 __PPO__ShootSound() { return STRUCT_OFFSET(ABaseShip, ShootSound); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedSound() { return STRUCT_OFFSET(ABaseShip, OnDestroyedSound); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedParticles() { return STRUCT_OFFSET(ABaseShip, OnDestroyedParticles); } \
	FORCEINLINE static uint32 __PPO__OnRollParticles() { return STRUCT_OFFSET(ABaseShip, OnRollParticles); } \
	FORCEINLINE static uint32 __PPO__CapComp() { return STRUCT_OFFSET(ABaseShip, CapComp); } \
	FORCEINLINE static uint32 __PPO__ShipMesh() { return STRUCT_OFFSET(ABaseShip, ShipMesh); } \
	FORCEINLINE static uint32 __PPO__ShootPoint() { return STRUCT_OFFSET(ABaseShip, ShootPoint); } \
	FORCEINLINE static uint32 __PPO__BeamClass() { return STRUCT_OFFSET(ABaseShip, BeamClass); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ABaseShip, RotationSpeed); } \
	FORCEINLINE static uint32 __PPO__BarrelRollSpeed() { return STRUCT_OFFSET(ABaseShip, BarrelRollSpeed); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_19_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ABaseShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_BaseShip_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

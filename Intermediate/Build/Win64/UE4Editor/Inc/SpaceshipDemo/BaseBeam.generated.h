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
#ifdef SPACESHIPDEMO_BaseBeam_generated_h
#error "BaseBeam.generated.h already included, missing '#pragma once' in BaseBeam.h"
#endif
#define SPACESHIPDEMO_BaseBeam_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBeam(); \
	friend struct Z_Construct_UClass_ABaseBeam_Statics; \
public: \
	DECLARE_CLASS(ABaseBeam, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseBeam)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_INCLASS \
private: \
	static void StaticRegisterNativesABaseBeam(); \
	friend struct Z_Construct_UClass_ABaseBeam_Statics; \
public: \
	DECLARE_CLASS(ABaseBeam, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseBeam)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseBeam(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseBeam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBeam); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBeam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBeam(ABaseBeam&&); \
	NO_API ABaseBeam(const ABaseBeam&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseBeam(ABaseBeam&&); \
	NO_API ABaseBeam(const ABaseBeam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBeam); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBeam); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBeam)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BeamMovement() { return STRUCT_OFFSET(ABaseBeam, BeamMovement); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ABaseBeam, SphereComp); } \
	FORCEINLINE static uint32 __PPO__BeamMesh() { return STRUCT_OFFSET(ABaseBeam, BeamMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ABaseBeam, DamageType); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ABaseBeam, Damage); } \
	FORCEINLINE static uint32 __PPO__OnHitParticles() { return STRUCT_OFFSET(ABaseBeam, OnHitParticles); } \
	FORCEINLINE static uint32 __PPO__OnHitSound() { return STRUCT_OFFSET(ABaseBeam, OnHitSound); } \
	FORCEINLINE static uint32 __PPO__OnRicochetSound() { return STRUCT_OFFSET(ABaseBeam, OnRicochetSound); }


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_17_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ABaseBeam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseBeam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

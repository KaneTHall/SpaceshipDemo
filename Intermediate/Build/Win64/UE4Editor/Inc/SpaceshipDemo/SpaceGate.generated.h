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
#ifdef SPACESHIPDEMO_SpaceGate_generated_h
#error "SpaceGate.generated.h already included, missing '#pragma once' in SpaceGate.h"
#endif
#define SPACESHIPDEMO_SpaceGate_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActiveGate);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActiveGate);


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceGate(); \
	friend struct Z_Construct_UClass_ASpaceGate_Statics; \
public: \
	DECLARE_CLASS(ASpaceGate, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ASpaceGate)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASpaceGate(); \
	friend struct Z_Construct_UClass_ASpaceGate_Statics; \
public: \
	DECLARE_CLASS(ASpaceGate, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ASpaceGate)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceGate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceGate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceGate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceGate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceGate(ASpaceGate&&); \
	NO_API ASpaceGate(const ASpaceGate&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceGate(ASpaceGate&&); \
	NO_API ASpaceGate(const ASpaceGate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceGate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceGate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceGate)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComp() { return STRUCT_OFFSET(ASpaceGate, SceneComp); } \
	FORCEINLINE static uint32 __PPO__CapsuleCompOne() { return STRUCT_OFFSET(ASpaceGate, CapsuleCompOne); } \
	FORCEINLINE static uint32 __PPO__CapsuleCompTwo() { return STRUCT_OFFSET(ASpaceGate, CapsuleCompTwo); } \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(ASpaceGate, BoxComp); } \
	FORCEINLINE static uint32 __PPO__SpaceGateMesh() { return STRUCT_OFFSET(ASpaceGate, SpaceGateMesh); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ASpaceGate, Health); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedSound() { return STRUCT_OFFSET(ASpaceGate, OnDestroyedSound); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedParticles() { return STRUCT_OFFSET(ASpaceGate, OnDestroyedParticles); } \
	FORCEINLINE static uint32 __PPO__PSC() { return STRUCT_OFFSET(ASpaceGate, PSC); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ASpaceGate, Damage); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_13_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ASpaceGate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_SpaceGate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

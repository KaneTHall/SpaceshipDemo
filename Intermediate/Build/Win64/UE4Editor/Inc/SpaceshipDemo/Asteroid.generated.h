// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_Asteroid_generated_h
#error "Asteroid.generated.h already included, missing '#pragma once' in Asteroid.h"
#endif
#define SPACESHIPDEMO_Asteroid_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAsteroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAsteroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAsteroid(AAsteroid&&); \
	NO_API AAsteroid(const AAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroid)


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapComp() { return STRUCT_OFFSET(AAsteroid, CapComp); } \
	FORCEINLINE static uint32 __PPO__AsteroidMesh() { return STRUCT_OFFSET(AAsteroid, AsteroidMesh); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AAsteroid, Health); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedSound() { return STRUCT_OFFSET(AAsteroid, OnDestroyedSound); } \
	FORCEINLINE static uint32 __PPO__OnDestroyedParticles() { return STRUCT_OFFSET(AAsteroid, OnDestroyedParticles); } \
	FORCEINLINE static uint32 __PPO__AsteroidChildClass() { return STRUCT_OFFSET(AAsteroid, AsteroidChildClass); }


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_17_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AAsteroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Pawns_Asteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

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
struct FHitResult;
#ifdef SPACESHIPDEMO_EnemyShip_Spawner_generated_h
#error "EnemyShip_Spawner.generated.h already included, missing '#pragma once' in EnemyShip_Spawner.h"
#endif
#define SPACESHIPDEMO_EnemyShip_Spawner_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnTrigger);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnTrigger);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyShip_Spawner(); \
	friend struct Z_Construct_UClass_AEnemyShip_Spawner_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip_Spawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip_Spawner)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyShip_Spawner(); \
	friend struct Z_Construct_UClass_AEnemyShip_Spawner_Statics; \
public: \
	DECLARE_CLASS(AEnemyShip_Spawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AEnemyShip_Spawner)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyShip_Spawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyShip_Spawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip_Spawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip_Spawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip_Spawner(AEnemyShip_Spawner&&); \
	NO_API AEnemyShip_Spawner(const AEnemyShip_Spawner&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyShip_Spawner(AEnemyShip_Spawner&&); \
	NO_API AEnemyShip_Spawner(const AEnemyShip_Spawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyShip_Spawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyShip_Spawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyShip_Spawner)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(AEnemyShip_Spawner, BoxComp); } \
	FORCEINLINE static uint32 __PPO__SpawnNum() { return STRUCT_OFFSET(AEnemyShip_Spawner, SpawnNum); } \
	FORCEINLINE static uint32 __PPO__EnemyShipClass() { return STRUCT_OFFSET(AEnemyShip_Spawner, EnemyShipClass); }


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_13_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AEnemyShip_Spawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Actors_EnemyShip_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

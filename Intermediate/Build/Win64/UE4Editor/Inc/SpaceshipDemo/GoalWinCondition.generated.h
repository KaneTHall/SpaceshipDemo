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
#ifdef SPACESHIPDEMO_GoalWinCondition_generated_h
#error "GoalWinCondition.generated.h already included, missing '#pragma once' in GoalWinCondition.h"
#endif
#define SPACESHIPDEMO_GoalWinCondition_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoal);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoal);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoalWinCondition(); \
	friend struct Z_Construct_UClass_AGoalWinCondition_Statics; \
public: \
	DECLARE_CLASS(AGoalWinCondition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AGoalWinCondition)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGoalWinCondition(); \
	friend struct Z_Construct_UClass_AGoalWinCondition_Statics; \
public: \
	DECLARE_CLASS(AGoalWinCondition, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AGoalWinCondition)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoalWinCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoalWinCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalWinCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalWinCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalWinCondition(AGoalWinCondition&&); \
	NO_API AGoalWinCondition(const AGoalWinCondition&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalWinCondition(AGoalWinCondition&&); \
	NO_API AGoalWinCondition(const AGoalWinCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalWinCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalWinCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoalWinCondition)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(AGoalWinCondition, BoxComp); }


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_12_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AGoalWinCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Actors_GoalWinCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

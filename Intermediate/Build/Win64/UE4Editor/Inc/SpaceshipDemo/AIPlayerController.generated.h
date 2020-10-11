// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_AIPlayerController_generated_h
#error "AIPlayerController.generated.h already included, missing '#pragma once' in AIPlayerController.h"
#endif
#define SPACESHIPDEMO_AIPlayerController_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIPlayerController(); \
	friend struct Z_Construct_UClass_AAIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAIPlayerController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AAIPlayerController)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIPlayerController(); \
	friend struct Z_Construct_UClass_AAIPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAIPlayerController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AAIPlayerController)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPlayerController(AAIPlayerController&&); \
	NO_API AAIPlayerController(const AAIPlayerController&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIPlayerController(AAIPlayerController&&); \
	NO_API AAIPlayerController(const AAIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIPlayerController)


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIBehaviorTree() { return STRUCT_OFFSET(AAIPlayerController, AIBehaviorTree); }


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_12_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AAIPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_PlayerControllers_AIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

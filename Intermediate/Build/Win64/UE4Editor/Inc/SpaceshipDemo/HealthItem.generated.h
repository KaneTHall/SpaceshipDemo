// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACESHIPDEMO_HealthItem_generated_h
#error "HealthItem.generated.h already included, missing '#pragma once' in HealthItem.h"
#endif
#define SPACESHIPDEMO_HealthItem_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_RPC_WRAPPERS
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthItem(); \
	friend struct Z_Construct_UClass_AHealthItem_Statics; \
public: \
	DECLARE_CLASS(AHealthItem, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AHealthItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHealthItem(); \
	friend struct Z_Construct_UClass_AHealthItem_Statics; \
public: \
	DECLARE_CLASS(AHealthItem, ABaseItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(AHealthItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthItem(AHealthItem&&); \
	NO_API AHealthItem(const AHealthItem&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthItem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthItem(AHealthItem&&); \
	NO_API AHealthItem(const AHealthItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthIncrease() { return STRUCT_OFFSET(AHealthItem, HealthIncrease); }


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_14_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class AHealthItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Actors_HealthItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

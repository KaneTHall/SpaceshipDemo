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
#ifdef SPACESHIPDEMO_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define SPACESHIPDEMO_BaseItem_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyEffect);


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem)


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapComp() { return STRUCT_OFFSET(ABaseItem, CapComp); } \
	FORCEINLINE static uint32 __PPO__OnPickupSound() { return STRUCT_OFFSET(ABaseItem, OnPickupSound); } \
	FORCEINLINE static uint32 __PPO__ItemEffect() { return STRUCT_OFFSET(ABaseItem, ItemEffect); } \
	FORCEINLINE static uint32 __PPO__PSC() { return STRUCT_OFFSET(ABaseItem, PSC); } \
	FORCEINLINE static uint32 __PPO__SceneComp() { return STRUCT_OFFSET(ABaseItem, SceneComp); }


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_19_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Actors_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

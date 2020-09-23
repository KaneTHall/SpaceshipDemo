// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SPACESHIPDEMO_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define SPACESHIPDEMO_Health_generated_h

#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_SPARSE_DATA
#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
public: \
	DECLARE_CLASS(UHealth, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(UHealth)


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
public: \
	DECLARE_CLASS(UHealth, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceshipDemo"), NO_API) \
	DECLARE_SERIALIZER(UHealth)


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealth(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealth(UHealth&&); \
	NO_API UHealth(const UHealth&); \
public:


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealth(UHealth&&); \
	NO_API UHealth(const UHealth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealth)


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(UHealth, MaxHealth); }


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_11_PROLOG
#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_RPC_WRAPPERS \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_INCLASS \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_PRIVATE_PROPERTY_OFFSET \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_SPARSE_DATA \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_INCLASS_NO_PURE_DECLS \
	SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACESHIPDEMO_API UClass* StaticClass<class UHealth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SpaceshipDemo_Source_SpaceshipDemo_Components_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

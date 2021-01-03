// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/Pawns/EnemyShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShip() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AEnemyShip_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AEnemyShip();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABaseShip();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UItemDrop_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	void AEnemyShip::StaticRegisterNativesAEnemyShip()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShip_NoRegister()
	{
		return AEnemyShip::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingPawnMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingPawnMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseShip,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * EnemyShip Class - Inherits from Baseclass\n * All EnemyShip specific member variables and functions used, declared and implemented here. \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/EnemyShip.h" },
		{ "ModuleRelativePath", "Pawns/EnemyShip.h" },
		{ "ToolTip", "EnemyShip Class - Inherits from Baseclass\nAll EnemyShip specific member variables and functions used, declared and implemented here." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_ItemDrop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/EnemyShip.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_ItemDrop = { "ItemDrop", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, ItemDrop), Z_Construct_UClass_UItemDrop_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ItemDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_ItemDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShip_Statics::NewProp_FloatingPawnMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "//Enemy specific components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/EnemyShip.h" },
		{ "ToolTip", "Enemy specific components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShip_Statics::NewProp_FloatingPawnMovement = { "FloatingPawnMovement", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShip, FloatingPawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::NewProp_FloatingPawnMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::NewProp_FloatingPawnMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyShip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_ItemDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShip_Statics::NewProp_FloatingPawnMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShip_Statics::ClassParams = {
		&AEnemyShip::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyShip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShip, 1232318631);
	template<> SPACESHIPDEMO_API UClass* StaticClass<AEnemyShip>()
	{
		return AEnemyShip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShip(Z_Construct_UClass_AEnemyShip, &AEnemyShip::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("AEnemyShip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/Pawns/AsteroidChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidChild() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AAsteroidChild_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AAsteroidChild();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AAsteroid();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UItemDrop_NoRegister();
// End Cross Module References
	void AAsteroidChild::StaticRegisterNativesAAsteroidChild()
	{
	}
	UClass* Z_Construct_UClass_AAsteroidChild_NoRegister()
	{
		return AAsteroidChild::StaticClass();
	}
	struct Z_Construct_UClass_AAsteroidChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDrop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAsteroidChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAsteroid,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidChild_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AsteroidChild Class - Inherits from Asteroid Class \n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/AsteroidChild.h" },
		{ "ModuleRelativePath", "Pawns/AsteroidChild.h" },
		{ "ToolTip", "AsteroidChild Class - Inherits from Asteroid Class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAsteroidChild_Statics::NewProp_ItemDrop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "//ItemDrop Component - Causes Item to spawn when Destroyed\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/AsteroidChild.h" },
		{ "ToolTip", "ItemDrop Component - Causes Item to spawn when Destroyed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAsteroidChild_Statics::NewProp_ItemDrop = { "ItemDrop", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAsteroidChild, ItemDrop), Z_Construct_UClass_UItemDrop_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAsteroidChild_Statics::NewProp_ItemDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidChild_Statics::NewProp_ItemDrop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroidChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroidChild_Statics::NewProp_ItemDrop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAsteroidChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidChild_Statics::ClassParams = {
		&AAsteroidChild::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAsteroidChild_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidChild_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAsteroidChild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAsteroidChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAsteroidChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAsteroidChild, 1618620132);
	template<> SPACESHIPDEMO_API UClass* StaticClass<AAsteroidChild>()
	{
		return AAsteroidChild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidChild(Z_Construct_UClass_AAsteroidChild, &AAsteroidChild::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("AAsteroidChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

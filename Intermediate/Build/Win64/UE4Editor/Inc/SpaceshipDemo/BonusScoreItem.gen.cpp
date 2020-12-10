// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/Actors/BonusScoreItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusScoreItem() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABonusScoreItem_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABonusScoreItem();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABaseItem();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void ABonusScoreItem::StaticRegisterNativesABonusScoreItem()
	{
	}
	UClass* Z_Construct_UClass_ABonusScoreItem_NoRegister()
	{
		return ABonusScoreItem::StaticClass();
	}
	struct Z_Construct_UClass_ABonusScoreItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonusScoreItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusScoreItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/BonusScoreItem.h" },
		{ "ModuleRelativePath", "Actors/BonusScoreItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusScoreItem_Statics::NewProp_ScoreBonus_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Actors/BonusScoreItem.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABonusScoreItem_Statics::NewProp_ScoreBonus = { "ScoreBonus", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABonusScoreItem, ScoreBonus), METADATA_PARAMS(Z_Construct_UClass_ABonusScoreItem_Statics::NewProp_ScoreBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABonusScoreItem_Statics::NewProp_ScoreBonus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonusScoreItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonusScoreItem_Statics::NewProp_ScoreBonus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonusScoreItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonusScoreItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABonusScoreItem_Statics::ClassParams = {
		&ABonusScoreItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABonusScoreItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonusScoreItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABonusScoreItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABonusScoreItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABonusScoreItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABonusScoreItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABonusScoreItem, 3864607801);
	template<> SPACESHIPDEMO_API UClass* StaticClass<ABonusScoreItem>()
	{
		return ABonusScoreItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABonusScoreItem(Z_Construct_UClass_ABonusScoreItem, &ABonusScoreItem::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("ABonusScoreItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonusScoreItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

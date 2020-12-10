// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/Actors/HealthItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthItem() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AHealthItem_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AHealthItem();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABaseItem();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void AHealthItem::StaticRegisterNativesAHealthItem()
	{
	}
	UClass* Z_Construct_UClass_AHealthItem_NoRegister()
	{
		return AHealthItem::StaticClass();
	}
	struct Z_Construct_UClass_AHealthItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthIncrease;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/HealthItem.h" },
		{ "ModuleRelativePath", "Actors/HealthItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthItem_Statics::NewProp_HealthIncrease_MetaData[] = {
		{ "Category", "Item Properties" },
		{ "ModuleRelativePath", "Actors/HealthItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthItem_Statics::NewProp_HealthIncrease = { "HealthIncrease", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealthItem, HealthIncrease), METADATA_PARAMS(Z_Construct_UClass_AHealthItem_Statics::NewProp_HealthIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthItem_Statics::NewProp_HealthIncrease_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthItem_Statics::NewProp_HealthIncrease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealthItem_Statics::ClassParams = {
		&AHealthItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealthItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealthItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealthItem, 3436620339);
	template<> SPACESHIPDEMO_API UClass* StaticClass<AHealthItem>()
	{
		return AHealthItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealthItem(Z_Construct_UClass_AHealthItem, &AHealthItem::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("AHealthItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

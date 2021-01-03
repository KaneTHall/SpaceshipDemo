// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/Components/ItemDrop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDrop() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UItemDrop_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UItemDrop();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AExtraBoostItem_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ABonusScoreItem_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AHealthItem_NoRegister();
// End Cross Module References
	void UItemDrop::StaticRegisterNativesUItemDrop()
	{
	}
	UClass* Z_Construct_UClass_UItemDrop_NoRegister()
	{
		return UItemDrop::StaticClass();
	}
	struct Z_Construct_UClass_UItemDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraBoostItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExtraBoostItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusScoreItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BonusScoreItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDrop_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * ItemDrop Component class - Component that drops an Item Actor when the Actor this component is attached to is destroyed. \n * Member variables and functions for classes.\n * */" },
		{ "IncludePath", "Components/ItemDrop.h" },
		{ "ModuleRelativePath", "Components/ItemDrop.h" },
		{ "ToolTip", "ItemDrop Component class - Component that drops an Item Actor when the Actor this component is attached to is destroyed.\nMember variables and functions for classes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDrop_Statics::NewProp_ExtraBoostItemClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Components/ItemDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDrop_Statics::NewProp_ExtraBoostItemClass = { "ExtraBoostItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemDrop, ExtraBoostItemClass), Z_Construct_UClass_AExtraBoostItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemDrop_Statics::NewProp_ExtraBoostItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDrop_Statics::NewProp_ExtraBoostItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDrop_Statics::NewProp_BonusScoreItemClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Components/ItemDrop.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDrop_Statics::NewProp_BonusScoreItemClass = { "BonusScoreItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemDrop, BonusScoreItemClass), Z_Construct_UClass_ABonusScoreItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemDrop_Statics::NewProp_BonusScoreItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDrop_Statics::NewProp_BonusScoreItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemDrop_Statics::NewProp_HealthItemClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawning" },
		{ "Comment", "//Item Drop Components\n" },
		{ "ModuleRelativePath", "Components/ItemDrop.h" },
		{ "ToolTip", "Item Drop Components" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDrop_Statics::NewProp_HealthItemClass = { "HealthItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemDrop, HealthItemClass), Z_Construct_UClass_AHealthItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemDrop_Statics::NewProp_HealthItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDrop_Statics::NewProp_HealthItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDrop_Statics::NewProp_ExtraBoostItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDrop_Statics::NewProp_BonusScoreItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDrop_Statics::NewProp_HealthItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDrop>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemDrop_Statics::ClassParams = {
		&UItemDrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemDrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemDrop_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UItemDrop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemDrop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemDrop()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemDrop_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemDrop, 881042665);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UItemDrop>()
	{
		return UItemDrop::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemDrop(Z_Construct_UClass_UItemDrop, &UItemDrop::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UItemDrop"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDrop);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

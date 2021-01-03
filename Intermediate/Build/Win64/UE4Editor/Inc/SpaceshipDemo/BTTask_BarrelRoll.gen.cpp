// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/BTServiceAndTask/BTTask_BarrelRoll.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BarrelRoll() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTTask_BarrelRoll_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTTask_BarrelRoll();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void UBTTask_BarrelRoll::StaticRegisterNativesUBTTask_BarrelRoll()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_BarrelRoll_NoRegister()
	{
		return UBTTask_BarrelRoll::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BarrelRoll_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BarrelRoll_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BarrelRoll_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blackboard Task Node to call the BarrelRoll function\n */" },
		{ "IncludePath", "BTServiceAndTask/BTTask_BarrelRoll.h" },
		{ "ModuleRelativePath", "BTServiceAndTask/BTTask_BarrelRoll.h" },
		{ "ToolTip", "Blackboard Task Node to call the BarrelRoll function" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BarrelRoll_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BarrelRoll>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BarrelRoll_Statics::ClassParams = {
		&UBTTask_BarrelRoll::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_BarrelRoll_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BarrelRoll_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_BarrelRoll()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_BarrelRoll_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_BarrelRoll, 2221553475);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UBTTask_BarrelRoll>()
	{
		return UBTTask_BarrelRoll::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_BarrelRoll(Z_Construct_UClass_UBTTask_BarrelRoll, &UBTTask_BarrelRoll::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UBTTask_BarrelRoll"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BarrelRoll);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/BTServiceAndTask/BTService_HealthCritical.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_HealthCritical() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_HealthCritical_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_HealthCritical();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void UBTService_HealthCritical::StaticRegisterNativesUBTService_HealthCritical()
	{
	}
	UClass* Z_Construct_UClass_UBTService_HealthCritical_NoRegister()
	{
		return UBTService_HealthCritical::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_HealthCritical_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_HealthCritical_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_HealthCritical_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBTService_HealthCritical Class - Used to create a Blackboard Service that returns true when the AIOwner health is low\n * \n */" },
		{ "IncludePath", "BTServiceAndTask/BTService_HealthCritical.h" },
		{ "ModuleRelativePath", "BTServiceAndTask/BTService_HealthCritical.h" },
		{ "ToolTip", "UBTService_HealthCritical Class - Used to create a Blackboard Service that returns true when the AIOwner health is low" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_HealthCritical_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_HealthCritical>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_HealthCritical_Statics::ClassParams = {
		&UBTService_HealthCritical::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_HealthCritical_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_HealthCritical_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_HealthCritical()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_HealthCritical_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_HealthCritical, 2014536090);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UBTService_HealthCritical>()
	{
		return UBTService_HealthCritical::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_HealthCritical(Z_Construct_UClass_UBTService_HealthCritical, &UBTService_HealthCritical::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UBTService_HealthCritical"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_HealthCritical);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

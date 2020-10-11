// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/BTServiceAndTask/BTService_UpdatePlayerLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdatePlayerLocation() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void UBTService_UpdatePlayerLocation::StaticRegisterNativesUBTService_UpdatePlayerLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation_NoRegister()
	{
		return UBTService_UpdatePlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTServiceAndTask/BTService_UpdatePlayerLocation.h" },
		{ "ModuleRelativePath", "BTServiceAndTask/BTService_UpdatePlayerLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdatePlayerLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::ClassParams = {
		&UBTService_UpdatePlayerLocation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdatePlayerLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_UpdatePlayerLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_UpdatePlayerLocation, 4142920897);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UBTService_UpdatePlayerLocation>()
	{
		return UBTService_UpdatePlayerLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_UpdatePlayerLocation(Z_Construct_UClass_UBTService_UpdatePlayerLocation, &UBTService_UpdatePlayerLocation::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UBTService_UpdatePlayerLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdatePlayerLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

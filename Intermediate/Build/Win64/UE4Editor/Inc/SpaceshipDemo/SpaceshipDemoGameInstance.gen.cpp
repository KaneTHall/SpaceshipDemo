// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/SpaceshipDemoGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceshipDemoGameInstance() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_USpaceshipDemoGameInstance_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_USpaceshipDemoGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void USpaceshipDemoGameInstance::StaticRegisterNativesUSpaceshipDemoGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USpaceshipDemoGameInstance_NoRegister()
	{
		return USpaceshipDemoGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpaceshipDemoGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpaceshipDemoGameInstance.h" },
		{ "ModuleRelativePath", "SpaceshipDemoGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceshipDemoGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::ClassParams = {
		&USpaceshipDemoGameInstance::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpaceshipDemoGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpaceshipDemoGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpaceshipDemoGameInstance, 4223264367);
	template<> SPACESHIPDEMO_API UClass* StaticClass<USpaceshipDemoGameInstance>()
	{
		return USpaceshipDemoGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpaceshipDemoGameInstance(Z_Construct_UClass_USpaceshipDemoGameInstance, &USpaceshipDemoGameInstance::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("USpaceshipDemoGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceshipDemoGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

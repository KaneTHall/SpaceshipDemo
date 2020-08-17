// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/SpaceshipDemoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceshipDemoGameModeBase() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ASpaceshipDemoGameModeBase_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_ASpaceshipDemoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void ASpaceshipDemoGameModeBase::StaticRegisterNativesASpaceshipDemoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASpaceshipDemoGameModeBase_NoRegister()
	{
		return ASpaceshipDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SpaceshipDemoGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceshipDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceshipDemoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::ClassParams = {
		&ASpaceshipDemoGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceshipDemoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceshipDemoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceshipDemoGameModeBase, 986826079);
	template<> SPACESHIPDEMO_API UClass* StaticClass<ASpaceshipDemoGameModeBase>()
	{
		return ASpaceshipDemoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceshipDemoGameModeBase(Z_Construct_UClass_ASpaceshipDemoGameModeBase, &ASpaceshipDemoGameModeBase::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("ASpaceshipDemoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceshipDemoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

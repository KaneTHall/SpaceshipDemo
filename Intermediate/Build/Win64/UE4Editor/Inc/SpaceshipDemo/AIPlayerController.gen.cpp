// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/PlayerControllers/AIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPlayerController() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AAIPlayerController_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_AAIPlayerController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIPlayerController::StaticRegisterNativesAAIPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AAIPlayerController_NoRegister()
	{
		return AAIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AAIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIBehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerControllers/AIPlayerController.h" },
		{ "ModuleRelativePath", "PlayerControllers/AIPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPlayerController_Statics::NewProp_AIBehaviorTree_MetaData[] = {
		{ "Category", "AIPlayerController" },
		{ "Comment", "//float AcceptanceRadius = 200;\n" },
		{ "ModuleRelativePath", "PlayerControllers/AIPlayerController.h" },
		{ "ToolTip", "float AcceptanceRadius = 200;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPlayerController_Statics::NewProp_AIBehaviorTree = { "AIBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPlayerController, AIBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPlayerController_Statics::NewProp_AIBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayerController_Statics::NewProp_AIBehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPlayerController_Statics::NewProp_AIBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPlayerController_Statics::ClassParams = {
		&AAIPlayerController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPlayerController, 463155300);
	template<> SPACESHIPDEMO_API UClass* StaticClass<AAIPlayerController>()
	{
		return AAIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPlayerController(Z_Construct_UClass_AAIPlayerController, &AAIPlayerController::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("AAIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

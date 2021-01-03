// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/BTServiceAndTask/BTService_SeenPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SeenPlayer() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_SeenPlayer_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_SeenPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void UBTService_SeenPlayer::StaticRegisterNativesUBTService_SeenPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_SeenPlayer_NoRegister()
	{
		return UBTService_SeenPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_SeenPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_SeenPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SeenPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  UBTService_SeenPlayer Class - Used to create a Blackboard Service that returns true when the Player hasn't moved passed the AIOwner\n */" },
		{ "IncludePath", "BTServiceAndTask/BTService_SeenPlayer.h" },
		{ "ModuleRelativePath", "BTServiceAndTask/BTService_SeenPlayer.h" },
		{ "ToolTip", "UBTService_SeenPlayer Class - Used to create a Blackboard Service that returns true when the Player hasn't moved passed the AIOwner" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_SeenPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SeenPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SeenPlayer_Statics::ClassParams = {
		&UBTService_SeenPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_SeenPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SeenPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_SeenPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_SeenPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_SeenPlayer, 491131553);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UBTService_SeenPlayer>()
	{
		return UBTService_SeenPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_SeenPlayer(Z_Construct_UClass_UBTService_SeenPlayer, &UBTService_SeenPlayer::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UBTService_SeenPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SeenPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

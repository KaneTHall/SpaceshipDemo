// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceshipDemo/BTServiceAndTask/BTService_UpdateWayPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateWayPoint() {}
// Cross Module References
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_UpdateWayPoint_NoRegister();
	SPACESHIPDEMO_API UClass* Z_Construct_UClass_UBTService_UpdateWayPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SpaceshipDemo();
// End Cross Module References
	void UBTService_UpdateWayPoint::StaticRegisterNativesUBTService_UpdateWayPoint()
	{
	}
	UClass* Z_Construct_UClass_UBTService_UpdateWayPoint_NoRegister()
	{
		return UBTService_UpdateWayPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdateWayPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceshipDemo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n Blackboard Service Update WayPoints Class - Returns a new FVector for the AIPlayerContrtroller to move the pawn to. \n */" },
		{ "IncludePath", "BTServiceAndTask/BTService_UpdateWayPoint.h" },
		{ "ModuleRelativePath", "BTServiceAndTask/BTService_UpdateWayPoint.h" },
		{ "ToolTip", "Blackboard Service Update WayPoints Class - Returns a new FVector for the AIPlayerContrtroller to move the pawn to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateWayPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::ClassParams = {
		&UBTService_UpdateWayPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdateWayPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_UpdateWayPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_UpdateWayPoint, 1796822522);
	template<> SPACESHIPDEMO_API UClass* StaticClass<UBTService_UpdateWayPoint>()
	{
		return UBTService_UpdateWayPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_UpdateWayPoint(Z_Construct_UClass_UBTService_UpdateWayPoint, &UBTService_UpdateWayPoint::StaticClass, TEXT("/Script/SpaceshipDemo"), TEXT("UBTService_UpdateWayPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateWayPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

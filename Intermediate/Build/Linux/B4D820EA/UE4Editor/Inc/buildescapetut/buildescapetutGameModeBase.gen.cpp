// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "buildescapetut/buildescapetutGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebuildescapetutGameModeBase() {}
// Cross Module References
	BUILDESCAPETUT_API UClass* Z_Construct_UClass_AbuildescapetutGameModeBase_NoRegister();
	BUILDESCAPETUT_API UClass* Z_Construct_UClass_AbuildescapetutGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_buildescapetut();
// End Cross Module References
	void AbuildescapetutGameModeBase::StaticRegisterNativesAbuildescapetutGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AbuildescapetutGameModeBase_NoRegister()
	{
		return AbuildescapetutGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AbuildescapetutGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_buildescapetut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "buildescapetutGameModeBase.h" },
		{ "ModuleRelativePath", "buildescapetutGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AbuildescapetutGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::ClassParams = {
		&AbuildescapetutGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AbuildescapetutGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AbuildescapetutGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AbuildescapetutGameModeBase, 2565216797);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbuildescapetutGameModeBase(Z_Construct_UClass_AbuildescapetutGameModeBase, &AbuildescapetutGameModeBase::StaticClass, TEXT("/Script/buildescapetut"), TEXT("AbuildescapetutGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbuildescapetutGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

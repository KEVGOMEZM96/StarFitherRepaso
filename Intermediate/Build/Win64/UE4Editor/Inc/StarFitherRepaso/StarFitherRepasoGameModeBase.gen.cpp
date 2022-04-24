// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFitherRepaso/StarFitherRepasoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarFitherRepasoGameModeBase() {}
// Cross Module References
	STARFITHERREPASO_API UClass* Z_Construct_UClass_AStarFitherRepasoGameModeBase_NoRegister();
	STARFITHERREPASO_API UClass* Z_Construct_UClass_AStarFitherRepasoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StarFitherRepaso();
// End Cross Module References
	void AStarFitherRepasoGameModeBase::StaticRegisterNativesAStarFitherRepasoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AStarFitherRepasoGameModeBase_NoRegister()
	{
		return AStarFitherRepasoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFitherRepaso,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StarFitherRepasoGameModeBase.h" },
		{ "ModuleRelativePath", "StarFitherRepasoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarFitherRepasoGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::ClassParams = {
		&AStarFitherRepasoGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarFitherRepasoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarFitherRepasoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarFitherRepasoGameModeBase, 1200469515);
	template<> STARFITHERREPASO_API UClass* StaticClass<AStarFitherRepasoGameModeBase>()
	{
		return AStarFitherRepasoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarFitherRepasoGameModeBase(Z_Construct_UClass_AStarFitherRepasoGameModeBase, &AStarFitherRepasoGameModeBase::StaticClass, TEXT("/Script/StarFitherRepaso"), TEXT("AStarFitherRepasoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarFitherRepasoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFitherRepaso/Balilla.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalilla() {}
// Cross Module References
	STARFITHERREPASO_API UClass* Z_Construct_UClass_ABalilla_NoRegister();
	STARFITHERREPASO_API UClass* Z_Construct_UClass_ABalilla();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFitherRepaso();
// End Cross Module References
	void ABalilla::StaticRegisterNativesABalilla()
	{
	}
	UClass* Z_Construct_UClass_ABalilla_NoRegister()
	{
		return ABalilla::StaticClass();
	}
	struct Z_Construct_UClass_ABalilla_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalilla_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFitherRepaso,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalilla_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Balilla.h" },
		{ "ModuleRelativePath", "Balilla.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalilla_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalilla>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABalilla_Statics::ClassParams = {
		&ABalilla::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABalilla_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalilla_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalilla()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABalilla_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABalilla, 4059603590);
	template<> STARFITHERREPASO_API UClass* StaticClass<ABalilla>()
	{
		return ABalilla::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABalilla(Z_Construct_UClass_ABalilla, &ABalilla::StaticClass, TEXT("/Script/StarFitherRepaso"), TEXT("ABalilla"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalilla);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

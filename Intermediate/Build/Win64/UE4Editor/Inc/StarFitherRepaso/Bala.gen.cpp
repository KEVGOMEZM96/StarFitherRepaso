// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFitherRepaso/Bala.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBala() {}
// Cross Module References
	STARFITHERREPASO_API UClass* Z_Construct_UClass_ABala_NoRegister();
	STARFITHERREPASO_API UClass* Z_Construct_UClass_ABala();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFitherRepaso();
// End Cross Module References
	DEFINE_FUNCTION(ABala::execSumarEnergia)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__Energia);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->SumarEnergia(Z_Param__Energia);
		P_NATIVE_END;
	}
	void ABala::StaticRegisterNativesABala()
	{
		UClass* Class = ABala::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SumarEnergia", &ABala::execSumarEnergia },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABala_SumarEnergia_Statics
	{
		struct Bala_eventSumarEnergia_Parms
		{
			float _Energia;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__Energia;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABala_SumarEnergia_Statics::NewProp__Energia = { "_Energia", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bala_eventSumarEnergia_Parms, _Energia), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABala_SumarEnergia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bala_eventSumarEnergia_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABala_SumarEnergia_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABala_SumarEnergia_Statics::NewProp__Energia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABala_SumarEnergia_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABala_SumarEnergia_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABala_SumarEnergia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABala, nullptr, "SumarEnergia", nullptr, nullptr, sizeof(Bala_eventSumarEnergia_Parms), Z_Construct_UFunction_ABala_SumarEnergia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABala_SumarEnergia_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABala_SumarEnergia_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABala_SumarEnergia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABala_SumarEnergia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABala_SumarEnergia_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABala_NoRegister()
	{
		return ABala::StaticClass();
	}
	struct Z_Construct_UClass_ABala_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UbicacionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UbicacionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UbicacionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UbicacionY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABala_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFitherRepaso,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABala_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABala_SumarEnergia, "SumarEnergia" }, // 1362780290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bala.h" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::NewProp_UbicacionX_MetaData[] = {
		{ "Category", "Prueba" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABala_Statics::NewProp_UbicacionX = { "UbicacionX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABala, UbicacionX), METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::NewProp_UbicacionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::NewProp_UbicacionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABala_Statics::NewProp_UbicacionY_MetaData[] = {
		{ "Category", "Prueba" },
		{ "ModuleRelativePath", "Bala.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABala_Statics::NewProp_UbicacionY = { "UbicacionY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABala, UbicacionY), METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::NewProp_UbicacionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::NewProp_UbicacionY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABala_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABala_Statics::NewProp_UbicacionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABala_Statics::NewProp_UbicacionY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABala_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABala>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABala_Statics::ClassParams = {
		&ABala::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABala_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABala_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABala()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABala_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABala, 4274362863);
	template<> STARFITHERREPASO_API UClass* StaticClass<ABala>()
	{
		return ABala::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABala(Z_Construct_UClass_ABala, &ABala::StaticClass, TEXT("/Script/StarFitherRepaso"), TEXT("ABala"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABala);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

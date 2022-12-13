// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Boss01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss01() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ABoss01_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ABoss01();
	ARCANOID_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ABoss01::StaticRegisterNativesABoss01()
	{
	}
	UClass* Z_Construct_UClass_ABoss01_NoRegister()
	{
		return ABoss01::StaticClass();
	}
	struct Z_Construct_UClass_ABoss01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoss01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoss01_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Boss01.h" },
		{ "ModuleRelativePath", "Boss01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoss01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoss01_Statics::ClassParams = {
		&ABoss01::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoss01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoss01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoss01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoss01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoss01, 3480800475);
	template<> ARCANOID_API UClass* StaticClass<ABoss01>()
	{
		return ABoss01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoss01(Z_Construct_UClass_ABoss01, &ABoss01::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ABoss01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

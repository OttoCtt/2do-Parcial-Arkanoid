// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Nivel_01_BossBilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivel_01_BossBilder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ANivel_01_BossBilder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ANivel_01_BossBilder();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ARCANOID_API UClass* Z_Construct_UClass_ABoss01_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UBossBilder_NoRegister();
// End Cross Module References
	void ANivel_01_BossBilder::StaticRegisterNativesANivel_01_BossBilder()
	{
	}
	UClass* Z_Construct_UClass_ANivel_01_BossBilder_NoRegister()
	{
		return ANivel_01_BossBilder::StaticClass();
	}
	struct Z_Construct_UClass_ANivel_01_BossBilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Boss01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Boss01;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANivel_01_BossBilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_01_BossBilder_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nivel_01_BossBilder.h" },
		{ "ModuleRelativePath", "Nivel_01_BossBilder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANivel_01_BossBilder_Statics::NewProp_Boss01_MetaData[] = {
		{ "Category", "Nivel_01 Boss" },
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "Nivel_01_BossBilder.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANivel_01_BossBilder_Statics::NewProp_Boss01 = { "Boss01", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANivel_01_BossBilder, Boss01), Z_Construct_UClass_ABoss01_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANivel_01_BossBilder_Statics::NewProp_Boss01_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_01_BossBilder_Statics::NewProp_Boss01_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANivel_01_BossBilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANivel_01_BossBilder_Statics::NewProp_Boss01,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANivel_01_BossBilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBossBilder_NoRegister, (int32)VTABLE_OFFSET(ANivel_01_BossBilder, IBossBilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANivel_01_BossBilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANivel_01_BossBilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANivel_01_BossBilder_Statics::ClassParams = {
		&ANivel_01_BossBilder::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANivel_01_BossBilder_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_01_BossBilder_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANivel_01_BossBilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANivel_01_BossBilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANivel_01_BossBilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANivel_01_BossBilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANivel_01_BossBilder, 4137565733);
	template<> ARCANOID_API UClass* StaticClass<ANivel_01_BossBilder>()
	{
		return ANivel_01_BossBilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANivel_01_BossBilder(Z_Construct_UClass_ANivel_01_BossBilder, &ANivel_01_BossBilder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ANivel_01_BossBilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANivel_01_BossBilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/BossBilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossBilder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UBossBilder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UBossBilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void UBossBilder::StaticRegisterNativesUBossBilder()
	{
	}
	UClass* Z_Construct_UClass_UBossBilder_NoRegister()
	{
		return UBossBilder::StaticClass();
	}
	struct Z_Construct_UClass_UBossBilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossBilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossBilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BossBilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossBilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBossBilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBossBilder_Statics::ClassParams = {
		&UBossBilder::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBossBilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBossBilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBossBilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBossBilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBossBilder, 3653641768);
	template<> ARCANOID_API UClass* StaticClass<UBossBilder>()
	{
		return UBossBilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBossBilder(Z_Construct_UClass_UBossBilder, &UBossBilder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UBossBilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossBilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

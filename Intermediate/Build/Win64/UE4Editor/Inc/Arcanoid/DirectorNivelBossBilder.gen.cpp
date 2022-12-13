// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/DirectorNivelBossBilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorNivelBossBilder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ADirectorNivelBossBilder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ADirectorNivelBossBilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ADirectorNivelBossBilder::StaticRegisterNativesADirectorNivelBossBilder()
	{
	}
	UClass* Z_Construct_UClass_ADirectorNivelBossBilder_NoRegister()
	{
		return ADirectorNivelBossBilder::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorNivelBossBilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorNivelBossBilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorNivelBossBilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorNivelBossBilder.h" },
		{ "ModuleRelativePath", "DirectorNivelBossBilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorNivelBossBilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorNivelBossBilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorNivelBossBilder_Statics::ClassParams = {
		&ADirectorNivelBossBilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorNivelBossBilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorNivelBossBilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorNivelBossBilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorNivelBossBilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorNivelBossBilder, 3923458533);
	template<> ARCANOID_API UClass* StaticClass<ADirectorNivelBossBilder>()
	{
		return ADirectorNivelBossBilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorNivelBossBilder(Z_Construct_UClass_ADirectorNivelBossBilder, &ADirectorNivelBossBilder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ADirectorNivelBossBilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorNivelBossBilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

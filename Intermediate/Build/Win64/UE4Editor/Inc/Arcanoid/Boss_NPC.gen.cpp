// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Boss_NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_NPC() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_UBoss_NPC_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_UBoss_NPC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void UBoss_NPC::StaticRegisterNativesUBoss_NPC()
	{
	}
	UClass* Z_Construct_UClass_UBoss_NPC_NoRegister()
	{
		return UBoss_NPC::StaticClass();
	}
	struct Z_Construct_UClass_UBoss_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoss_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoss_NPC_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boss_NPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoss_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBoss_NPC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoss_NPC_Statics::ClassParams = {
		&UBoss_NPC::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoss_NPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoss_NPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoss_NPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoss_NPC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoss_NPC, 2377504134);
	template<> ARCANOID_API UClass* StaticClass<UBoss_NPC>()
	{
		return UBoss_NPC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoss_NPC(Z_Construct_UClass_UBoss_NPC, &UBoss_NPC::StaticClass, TEXT("/Script/Arcanoid"), TEXT("UBoss_NPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoss_NPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

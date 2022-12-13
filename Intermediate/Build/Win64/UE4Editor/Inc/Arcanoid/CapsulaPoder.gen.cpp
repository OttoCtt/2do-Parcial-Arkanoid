// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/CapsulaPoder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaPoder() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsulaPoder();
	ARCANOID_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void ACapsulaPoder::StaticRegisterNativesACapsulaPoder()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaPoder_NoRegister()
	{
		return ACapsulaPoder::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaPoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaPoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaPoder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaPoder.h" },
		{ "ModuleRelativePath", "CapsulaPoder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaPoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaPoder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaPoder_Statics::ClassParams = {
		&ACapsulaPoder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaPoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaPoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaPoder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaPoder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaPoder, 2287520701);
	template<> ARCANOID_API UClass* StaticClass<ACapsulaPoder>()
	{
		return ACapsulaPoder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaPoder(Z_Construct_UClass_ACapsulaPoder, &ACapsulaPoder::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ACapsulaPoder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaPoder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

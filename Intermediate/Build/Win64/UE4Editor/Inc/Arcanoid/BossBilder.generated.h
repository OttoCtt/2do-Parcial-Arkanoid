// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_BossBilder_generated_h
#error "BossBilder.generated.h already included, missing '#pragma once' in BossBilder.h"
#endif
#define ARCANOID_BossBilder_generated_h

#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_SPARSE_DATA
#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_RPC_WRAPPERS
#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UBossBilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossBilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UBossBilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossBilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UBossBilder(UBossBilder&&); \
	ARCANOID_API UBossBilder(const UBossBilder&); \
public:


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UBossBilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UBossBilder(UBossBilder&&); \
	ARCANOID_API UBossBilder(const UBossBilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UBossBilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossBilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossBilder)


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBossBilder(); \
	friend struct Z_Construct_UClass_UBossBilder_Statics; \
public: \
	DECLARE_CLASS(UBossBilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arcanoid"), ARCANOID_API) \
	DECLARE_SERIALIZER(UBossBilder)


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBossBilder() {} \
public: \
	typedef UBossBilder UClassType; \
	typedef IBossBilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoidel_Source_Arcanoid_BossBilder_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBossBilder() {} \
public: \
	typedef UBossBilder UClassType; \
	typedef IBossBilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoidel_Source_Arcanoid_BossBilder_h_10_PROLOG
#define Arcanoidel_Source_Arcanoid_BossBilder_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_RPC_WRAPPERS \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_BossBilder_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_BossBilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UBossBilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoidel_Source_Arcanoid_BossBilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Boss_NPC_generated_h
#error "Boss_NPC.generated.h already included, missing '#pragma once' in Boss_NPC.h"
#endif
#define ARCANOID_Boss_NPC_generated_h

#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_SPARSE_DATA
#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_RPC_WRAPPERS
#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UBoss_NPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoss_NPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UBoss_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoss_NPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UBoss_NPC(UBoss_NPC&&); \
	ARCANOID_API UBoss_NPC(const UBoss_NPC&); \
public:


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARCANOID_API UBoss_NPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARCANOID_API UBoss_NPC(UBoss_NPC&&); \
	ARCANOID_API UBoss_NPC(const UBoss_NPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARCANOID_API, UBoss_NPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoss_NPC); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoss_NPC)


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBoss_NPC(); \
	friend struct Z_Construct_UClass_UBoss_NPC_Statics; \
public: \
	DECLARE_CLASS(UBoss_NPC, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Arcanoid"), ARCANOID_API) \
	DECLARE_SERIALIZER(UBoss_NPC)


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_GENERATED_UINTERFACE_BODY() \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBoss_NPC() {} \
public: \
	typedef UBoss_NPC UClassType; \
	typedef IBoss_NPC ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBoss_NPC() {} \
public: \
	typedef UBoss_NPC UClassType; \
	typedef IBoss_NPC ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_10_PROLOG
#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_RPC_WRAPPERS \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_Boss_NPC_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_Boss_NPC_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class UBoss_NPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoidel_Source_Arcanoid_Boss_NPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

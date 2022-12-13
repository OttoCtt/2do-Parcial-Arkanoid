// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID_Nave_generated_h
#error "Nave.generated.h already included, missing '#pragma once' in Nave.h"
#endif
#define ARCANOID_Nave_generated_h

#define Arcanoidel_Source_Arcanoid_Nave_h_12_SPARSE_DATA
#define Arcanoidel_Source_Arcanoid_Nave_h_12_RPC_WRAPPERS
#define Arcanoidel_Source_Arcanoid_Nave_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoidel_Source_Arcanoid_Nave_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define Arcanoidel_Source_Arcanoid_Nave_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANave(); \
	friend struct Z_Construct_UClass_ANave_Statics; \
public: \
	DECLARE_CLASS(ANave, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ANave)


#define Arcanoidel_Source_Arcanoid_Nave_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANave(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public:


#define Arcanoidel_Source_Arcanoid_Nave_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANave(ANave&&); \
	NO_API ANave(const ANave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANave)


#define Arcanoidel_Source_Arcanoid_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Nave() { return STRUCT_OFFSET(ANave, SM_Nave); }


#define Arcanoidel_Source_Arcanoid_Nave_h_9_PROLOG
#define Arcanoidel_Source_Arcanoid_Nave_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_Nave_h_12_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Nave_h_12_RPC_WRAPPERS \
	Arcanoidel_Source_Arcanoid_Nave_h_12_INCLASS \
	Arcanoidel_Source_Arcanoid_Nave_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoidel_Source_Arcanoid_Nave_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoidel_Source_Arcanoid_Nave_h_12_PRIVATE_PROPERTY_OFFSET \
	Arcanoidel_Source_Arcanoid_Nave_h_12_SPARSE_DATA \
	Arcanoidel_Source_Arcanoid_Nave_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_Nave_h_12_INCLASS_NO_PURE_DECLS \
	Arcanoidel_Source_Arcanoid_Nave_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ANave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoidel_Source_Arcanoid_Nave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

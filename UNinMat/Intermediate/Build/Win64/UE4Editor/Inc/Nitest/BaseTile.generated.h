// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NITEST_BaseTile_generated_h
#error "BaseTile.generated.h already included, missing '#pragma once' in BaseTile.h"
#endif
#define NITEST_BaseTile_generated_h

#define UNinMat_Source_Nitest_BaseTile_h_13_SPARSE_DATA
#define UNinMat_Source_Nitest_BaseTile_h_13_RPC_WRAPPERS
#define UNinMat_Source_Nitest_BaseTile_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define UNinMat_Source_Nitest_BaseTile_h_13_EVENT_PARMS \
	struct BaseTile_eventMaterialCollide_Parms \
	{ \
		AActor* target; \
	};


#define UNinMat_Source_Nitest_BaseTile_h_13_CALLBACK_WRAPPERS
#define UNinMat_Source_Nitest_BaseTile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTile(); \
	friend struct Z_Construct_UClass_ABaseTile_Statics; \
public: \
	DECLARE_CLASS(ABaseTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(ABaseTile)


#define UNinMat_Source_Nitest_BaseTile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseTile(); \
	friend struct Z_Construct_UClass_ABaseTile_Statics; \
public: \
	DECLARE_CLASS(ABaseTile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(ABaseTile)


#define UNinMat_Source_Nitest_BaseTile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTile(ABaseTile&&); \
	NO_API ABaseTile(const ABaseTile&); \
public:


#define UNinMat_Source_Nitest_BaseTile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseTile(ABaseTile&&); \
	NO_API ABaseTile(const ABaseTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTile)


#define UNinMat_Source_Nitest_BaseTile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ABaseTile, Root); } \
	FORCEINLINE static uint32 __PPO__TileCube() { return STRUCT_OFFSET(ABaseTile, TileCube); } \
	FORCEINLINE static uint32 __PPO__NinjaMaterial() { return STRUCT_OFFSET(ABaseTile, NinjaMaterial); }


#define UNinMat_Source_Nitest_BaseTile_h_10_PROLOG \
	UNinMat_Source_Nitest_BaseTile_h_13_EVENT_PARMS


#define UNinMat_Source_Nitest_BaseTile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_BaseTile_h_13_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_BaseTile_h_13_SPARSE_DATA \
	UNinMat_Source_Nitest_BaseTile_h_13_RPC_WRAPPERS \
	UNinMat_Source_Nitest_BaseTile_h_13_CALLBACK_WRAPPERS \
	UNinMat_Source_Nitest_BaseTile_h_13_INCLASS \
	UNinMat_Source_Nitest_BaseTile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UNinMat_Source_Nitest_BaseTile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_BaseTile_h_13_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_BaseTile_h_13_SPARSE_DATA \
	UNinMat_Source_Nitest_BaseTile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_BaseTile_h_13_CALLBACK_WRAPPERS \
	UNinMat_Source_Nitest_BaseTile_h_13_INCLASS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_BaseTile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NITEST_API UClass* StaticClass<class ABaseTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UNinMat_Source_Nitest_BaseTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

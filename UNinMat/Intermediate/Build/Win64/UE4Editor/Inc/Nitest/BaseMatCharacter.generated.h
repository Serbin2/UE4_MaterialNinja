// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NITEST_BaseMatCharacter_generated_h
#error "BaseMatCharacter.generated.h already included, missing '#pragma once' in BaseMatCharacter.h"
#endif
#define NITEST_BaseMatCharacter_generated_h

#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_SPARSE_DATA
#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_RPC_WRAPPERS
#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseMatCharacter(); \
	friend struct Z_Construct_UClass_ABaseMatCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseMatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(ABaseMatCharacter)


#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseMatCharacter(); \
	friend struct Z_Construct_UClass_ABaseMatCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseMatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(ABaseMatCharacter)


#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseMatCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseMatCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMatCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMatCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMatCharacter(ABaseMatCharacter&&); \
	NO_API ABaseMatCharacter(const ABaseMatCharacter&); \
public:


#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseMatCharacter(ABaseMatCharacter&&); \
	NO_API ABaseMatCharacter(const ABaseMatCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseMatCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseMatCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseMatCharacter)


#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NinjaMaterial() { return STRUCT_OFFSET(ABaseMatCharacter, NinjaMaterial); }


#define UNinMat_Source_Nitest_BaseMatCharacter_h_12_PROLOG
#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_SPARSE_DATA \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_RPC_WRAPPERS \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_INCLASS \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UNinMat_Source_Nitest_BaseMatCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_SPARSE_DATA \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_INCLASS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_BaseMatCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NITEST_API UClass* StaticClass<class ABaseMatCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UNinMat_Source_Nitest_BaseMatCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENinijaMaterial : uint8;
#ifdef NITEST_NinjaMaterialComponent_generated_h
#error "NinjaMaterialComponent.generated.h already included, missing '#pragma once' in NinjaMaterialComponent.h"
#endif
#define NITEST_NinjaMaterialComponent_generated_h

#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_SPARSE_DATA
#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMaterial);


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMaterial);


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaMaterialComponent(); \
	friend struct Z_Construct_UClass_UNinjaMaterialComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaMaterialComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(UNinjaMaterialComponent)


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUNinjaMaterialComponent(); \
	friend struct Z_Construct_UClass_UNinjaMaterialComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaMaterialComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nitest"), NO_API) \
	DECLARE_SERIALIZER(UNinjaMaterialComponent)


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaMaterialComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaMaterialComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaMaterialComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaMaterialComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaMaterialComponent(UNinjaMaterialComponent&&); \
	NO_API UNinjaMaterialComponent(const UNinjaMaterialComponent&); \
public:


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaMaterialComponent(UNinjaMaterialComponent&&); \
	NO_API UNinjaMaterialComponent(const UNinjaMaterialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaMaterialComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaMaterialComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaMaterialComponent)


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_PRIVATE_PROPERTY_OFFSET
#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_25_PROLOG
#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_SPARSE_DATA \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_RPC_WRAPPERS \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_INCLASS \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_SPARSE_DATA \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_INCLASS_NO_PURE_DECLS \
	UNinMat_Source_Nitest_NinjaMaterialComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NITEST_API UClass* StaticClass<class UNinjaMaterialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UNinMat_Source_Nitest_NinjaMaterialComponent_h


#define FOREACH_ENUM_ENINIJAMATERIAL(op) \
	op(ENinijaMaterial::eNone) \
	op(ENinijaMaterial::ePaper) \
	op(ENinijaMaterial::eWood) \
	op(ENinijaMaterial::eStone) \
	op(ENinijaMaterial::eIron) \
	op(ENinijaMaterial::eRubber) \
	op(ENinijaMaterial::eFire) \
	op(ENinijaMaterial::eWater) \
	op(ENinijaMaterial::eMax) 

enum class ENinijaMaterial : uint8;
template<> NITEST_API UEnum* StaticEnum<ENinijaMaterial>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

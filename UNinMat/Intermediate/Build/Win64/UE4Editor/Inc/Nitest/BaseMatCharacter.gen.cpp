// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nitest/BaseMatCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMatCharacter() {}
// Cross Module References
	NITEST_API UClass* Z_Construct_UClass_ABaseMatCharacter_NoRegister();
	NITEST_API UClass* Z_Construct_UClass_ABaseMatCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Nitest();
// End Cross Module References
	void ABaseMatCharacter::StaticRegisterNativesABaseMatCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABaseMatCharacter_NoRegister()
	{
		return ABaseMatCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseMatCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseMatCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Nitest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseMatCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseMatCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseMatCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseMatCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseMatCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseMatCharacter_Statics::ClassParams = {
		&ABaseMatCharacter::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ABaseMatCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseMatCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseMatCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseMatCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseMatCharacter, 2489784338);
	template<> NITEST_API UClass* StaticClass<ABaseMatCharacter>()
	{
		return ABaseMatCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseMatCharacter(Z_Construct_UClass_ABaseMatCharacter, &ABaseMatCharacter::StaticClass, TEXT("/Script/Nitest"), TEXT("ABaseMatCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseMatCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

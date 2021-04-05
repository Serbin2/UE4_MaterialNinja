// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nitest/BaseTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTile() {}
// Cross Module References
	NITEST_API UClass* Z_Construct_UClass_ABaseTile_NoRegister();
	NITEST_API UClass* Z_Construct_UClass_ABaseTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Nitest();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NITEST_API UClass* Z_Construct_UClass_UNinjaMaterialComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABaseTile_MaterialCollide = FName(TEXT("MaterialCollide"));
	void ABaseTile::MaterialCollide(AActor* target)
	{
		BaseTile_eventMaterialCollide_Parms Parms;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_ABaseTile_MaterialCollide),&Parms);
	}
	void ABaseTile::StaticRegisterNativesABaseTile()
	{
	}
	struct Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseTile_eventMaterialCollide_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseTile, nullptr, "MaterialCollide", nullptr, nullptr, sizeof(BaseTile_eventMaterialCollide_Parms), Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseTile_MaterialCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseTile_MaterialCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseTile_NoRegister()
	{
		return ABaseTile::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NinjaMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NinjaMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nitest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseTile_MaterialCollide, "MaterialCollide" }, // 373417222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseTile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTile_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "BaseTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTile_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTile, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTile_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTile_Statics::NewProp_TileCube_MetaData[] = {
		{ "Category", "BaseTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTile_Statics::NewProp_TileCube = { "TileCube", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTile, TileCube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTile_Statics::NewProp_TileCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::NewProp_TileCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTile_Statics::NewProp_NinjaMaterial_MetaData[] = {
		{ "Category", "BaseTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTile_Statics::NewProp_NinjaMaterial = { "NinjaMaterial", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTile, NinjaMaterial), Z_Construct_UClass_UNinjaMaterialComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTile_Statics::NewProp_NinjaMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::NewProp_NinjaMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTile_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTile_Statics::NewProp_TileCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTile_Statics::NewProp_NinjaMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseTile_Statics::ClassParams = {
		&ABaseTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseTile, 4273443850);
	template<> NITEST_API UClass* StaticClass<ABaseTile>()
	{
		return ABaseTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTile(Z_Construct_UClass_ABaseTile, &ABaseTile::StaticClass, TEXT("/Script/Nitest"), TEXT("ABaseTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nitest/NinjaMaterialComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaMaterialComponent() {}
// Cross Module References
	NITEST_API UEnum* Z_Construct_UEnum_Nitest_ENinijaMaterial();
	UPackage* Z_Construct_UPackage__Script_Nitest();
	NITEST_API UClass* Z_Construct_UClass_UNinjaMaterialComponent_NoRegister();
	NITEST_API UClass* Z_Construct_UClass_UNinjaMaterialComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
// End Cross Module References
	static UEnum* ENinijaMaterial_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Nitest_ENinijaMaterial, Z_Construct_UPackage__Script_Nitest(), TEXT("ENinijaMaterial"));
		}
		return Singleton;
	}
	template<> NITEST_API UEnum* StaticEnum<ENinijaMaterial>()
	{
		return ENinijaMaterial_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENinijaMaterial(ENinijaMaterial_StaticEnum, TEXT("/Script/Nitest"), TEXT("ENinijaMaterial"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Nitest_ENinijaMaterial_Hash() { return 1681021871U; }
	UEnum* Z_Construct_UEnum_Nitest_ENinijaMaterial()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Nitest();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENinijaMaterial"), 0, Get_Z_Construct_UEnum_Nitest_ENinijaMaterial_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENinijaMaterial::eNone", (int64)ENinijaMaterial::eNone },
				{ "ENinijaMaterial::ePaper", (int64)ENinijaMaterial::ePaper },
				{ "ENinijaMaterial::eWood", (int64)ENinijaMaterial::eWood },
				{ "ENinijaMaterial::eStone", (int64)ENinijaMaterial::eStone },
				{ "ENinijaMaterial::eIron", (int64)ENinijaMaterial::eIron },
				{ "ENinijaMaterial::eRubber", (int64)ENinijaMaterial::eRubber },
				{ "ENinijaMaterial::eFire", (int64)ENinijaMaterial::eFire },
				{ "ENinijaMaterial::eWater", (int64)ENinijaMaterial::eWater },
				{ "ENinijaMaterial::eMax", (int64)ENinijaMaterial::eMax },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eFire.DisplayName", "MatFire" },
				{ "eFire.Name", "ENinijaMaterial::eFire" },
				{ "eIron.DisplayName", "MatIron" },
				{ "eIron.Name", "ENinijaMaterial::eIron" },
				{ "eMax.Name", "ENinijaMaterial::eMax" },
				{ "eNone.DisplayName", "MatNone" },
				{ "eNone.Name", "ENinijaMaterial::eNone" },
				{ "ePaper.DisplayName", "MatPaper" },
				{ "ePaper.Name", "ENinijaMaterial::ePaper" },
				{ "eRubber.DisplayName", "MatRubber" },
				{ "eRubber.Name", "ENinijaMaterial::eRubber" },
				{ "eStone.DisplayName", "MatStone" },
				{ "eStone.Name", "ENinijaMaterial::eStone" },
				{ "eWater.DisplayName", "MatWater" },
				{ "eWater.Name", "ENinijaMaterial::eWater" },
				{ "eWood.DisplayName", "MatWood" },
				{ "eWood.Name", "ENinijaMaterial::eWood" },
				{ "ModuleRelativePath", "NinjaMaterialComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Nitest,
				nullptr,
				"ENinijaMaterial",
				"ENinijaMaterial",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UNinjaMaterialComponent::execChangeMaterial)
	{
		P_GET_ENUM(ENinijaMaterial,Z_Param_mat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMaterial(ENinijaMaterial(Z_Param_mat));
		P_NATIVE_END;
	}
	void UNinjaMaterialComponent::StaticRegisterNativesUNinjaMaterialComponent()
	{
		UClass* Class = UNinjaMaterialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMaterial", &UNinjaMaterialComponent::execChangeMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics
	{
		struct NinjaMaterialComponent_eventChangeMaterial_Parms
		{
			ENinijaMaterial mat;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::NewProp_mat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaMaterialComponent_eventChangeMaterial_Parms, mat), Z_Construct_UEnum_Nitest_ENinijaMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::NewProp_mat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::NewProp_mat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NinjaMaterialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaMaterialComponent, nullptr, "ChangeMaterial", nullptr, nullptr, sizeof(NinjaMaterialComponent_eventChangeMaterial_Parms), Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNinjaMaterialComponent_NoRegister()
	{
		return UNinjaMaterialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaMaterialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_myMaterial_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_myMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_massLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_massLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaMaterialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Nitest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNinjaMaterialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaMaterialComponent_ChangeMaterial, "ChangeMaterial" }, // 2002376117
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaMaterialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NinjaMaterialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NinjaMaterialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial_MetaData[] = {
		{ "Category", "NinjaMaterialComponent" },
		{ "ModuleRelativePath", "NinjaMaterialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial = { "myMaterial", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaMaterialComponent, myMaterial), Z_Construct_UEnum_Nitest_ENinijaMaterial, METADATA_PARAMS(Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_massLevel_MetaData[] = {
		{ "Category", "NinjaMaterialComponent" },
		{ "ModuleRelativePath", "NinjaMaterialComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_massLevel = { "massLevel", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaMaterialComponent, massLevel), METADATA_PARAMS(Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_massLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_massLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaMaterialComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_myMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaMaterialComponent_Statics::NewProp_massLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaMaterialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaMaterialComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNinjaMaterialComponent_Statics::ClassParams = {
		&UNinjaMaterialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNinjaMaterialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaMaterialComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaMaterialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaMaterialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaMaterialComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNinjaMaterialComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNinjaMaterialComponent, 2536325205);
	template<> NITEST_API UClass* StaticClass<UNinjaMaterialComponent>()
	{
		return UNinjaMaterialComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNinjaMaterialComponent(Z_Construct_UClass_UNinjaMaterialComponent, &UNinjaMaterialComponent::StaticClass, TEXT("/Script/Nitest"), TEXT("UNinjaMaterialComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaMaterialComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

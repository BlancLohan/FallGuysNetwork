// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjetFallGuys/MainPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerState() {}
// Cross Module References
	PROJETFALLGUYS_API UClass* Z_Construct_UClass_AMainPlayerState_NoRegister();
	PROJETFALLGUYS_API UClass* Z_Construct_UClass_AMainPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ProjetFallGuys();
// End Cross Module References
	DEFINE_FUNCTION(AMainPlayerState::execGetPseudo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPseudo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainPlayerState::execSetPseudo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPseudo(Z_Param__name);
		P_NATIVE_END;
	}
	void AMainPlayerState::StaticRegisterNativesAMainPlayerState()
	{
		UClass* Class = AMainPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPseudo", &AMainPlayerState::execGetPseudo },
			{ "SetPseudo", &AMainPlayerState::execSetPseudo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics
	{
		struct MainPlayerState_eventGetPseudo_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerState_eventGetPseudo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerState, nullptr, "GetPseudo", nullptr, nullptr, sizeof(MainPlayerState_eventGetPseudo_Parms), Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerState_GetPseudo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerState_GetPseudo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics
	{
		struct MainPlayerState_eventSetPseudo_Parms
		{
			FName _name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayerState_eventSetPseudo_Parms, _name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::NewProp__name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayerState, nullptr, "SetPseudo", nullptr, nullptr, sizeof(MainPlayerState_eventSetPseudo_Parms), Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayerState_SetPseudo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayerState_SetPseudo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayerState_NoRegister()
	{
		return AMainPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjetFallGuys,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayerState_GetPseudo, "GetPseudo" }, // 917135617
		{ &Z_Construct_UFunction_AMainPlayerState_SetPseudo, "SetPseudo" }, // 893906483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainPlayerState.h" },
		{ "ModuleRelativePath", "MainPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerState_Statics::ClassParams = {
		&AMainPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayerState, 1073251460);
	template<> PROJETFALLGUYS_API UClass* StaticClass<AMainPlayerState>()
	{
		return AMainPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayerState(Z_Construct_UClass_AMainPlayerState, &AMainPlayerState::StaticClass, TEXT("/Script/ProjetFallGuys"), TEXT("AMainPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

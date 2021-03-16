// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FallPeople/FallPeopleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFallPeopleGameModeBase() {}
// Cross Module References
	FALLPEOPLE_API UClass* Z_Construct_UClass_AFallPeopleGameModeBase_NoRegister();
	FALLPEOPLE_API UClass* Z_Construct_UClass_AFallPeopleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FallPeople();
// End Cross Module References
	void AFallPeopleGameModeBase::StaticRegisterNativesAFallPeopleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFallPeopleGameModeBase_NoRegister()
	{
		return AFallPeopleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFallPeopleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFallPeopleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FallPeople,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFallPeopleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FallPeopleGameModeBase.h" },
		{ "ModuleRelativePath", "FallPeopleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFallPeopleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFallPeopleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFallPeopleGameModeBase_Statics::ClassParams = {
		&AFallPeopleGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFallPeopleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFallPeopleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFallPeopleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFallPeopleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFallPeopleGameModeBase, 3288967837);
	template<> FALLPEOPLE_API UClass* StaticClass<AFallPeopleGameModeBase>()
	{
		return AFallPeopleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFallPeopleGameModeBase(Z_Construct_UClass_AFallPeopleGameModeBase, &AFallPeopleGameModeBase::StaticClass, TEXT("/Script/FallPeople"), TEXT("AFallPeopleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFallPeopleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

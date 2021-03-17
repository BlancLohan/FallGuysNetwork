// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjetFallGuys/ProjetFallGuysGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjetFallGuysGameMode() {}
// Cross Module References
	PROJETFALLGUYS_API UClass* Z_Construct_UClass_AProjetFallGuysGameMode_NoRegister();
	PROJETFALLGUYS_API UClass* Z_Construct_UClass_AProjetFallGuysGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjetFallGuys();
// End Cross Module References
	void AProjetFallGuysGameMode::StaticRegisterNativesAProjetFallGuysGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjetFallGuysGameMode_NoRegister()
	{
		return AProjetFallGuysGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjetFallGuysGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjetFallGuysGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjetFallGuys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjetFallGuysGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjetFallGuysGameMode.h" },
		{ "ModuleRelativePath", "ProjetFallGuysGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjetFallGuysGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjetFallGuysGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjetFallGuysGameMode_Statics::ClassParams = {
		&AProjetFallGuysGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjetFallGuysGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjetFallGuysGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjetFallGuysGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjetFallGuysGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjetFallGuysGameMode, 3020063917);
	template<> PROJETFALLGUYS_API UClass* StaticClass<AProjetFallGuysGameMode>()
	{
		return AProjetFallGuysGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjetFallGuysGameMode(Z_Construct_UClass_AProjetFallGuysGameMode, &AProjetFallGuysGameMode::StaticClass, TEXT("/Script/ProjetFallGuys"), TEXT("AProjetFallGuysGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjetFallGuysGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

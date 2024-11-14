// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Facade/EnemigosCocodrilo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigosCocodrilo() {}
// Cross Module References
	PATRON_FACADE_API UClass* Z_Construct_UClass_AEnemigosCocodrilo_NoRegister();
	PATRON_FACADE_API UClass* Z_Construct_UClass_AEnemigosCocodrilo();
	PATRON_FACADE_API UClass* Z_Construct_UClass_AEnemigos();
	UPackage* Z_Construct_UPackage__Script_Patron_Facade();
// End Cross Module References
	void AEnemigosCocodrilo::StaticRegisterNativesAEnemigosCocodrilo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigosCocodrilo_NoRegister()
	{
		return AEnemigosCocodrilo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigosCocodrilo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigosCocodrilo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Facade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigosCocodrilo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigosCocodrilo.h" },
		{ "ModuleRelativePath", "EnemigosCocodrilo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigosCocodrilo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigosCocodrilo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigosCocodrilo_Statics::ClassParams = {
		&AEnemigosCocodrilo::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigosCocodrilo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigosCocodrilo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigosCocodrilo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigosCocodrilo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigosCocodrilo, 156269496);
	template<> PATRON_FACADE_API UClass* StaticClass<AEnemigosCocodrilo>()
	{
		return AEnemigosCocodrilo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigosCocodrilo(Z_Construct_UClass_AEnemigosCocodrilo, &AEnemigosCocodrilo::StaticClass, TEXT("/Script/Patron_Facade"), TEXT("AEnemigosCocodrilo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigosCocodrilo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

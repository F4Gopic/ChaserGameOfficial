// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaserGame/ChaserGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaserGameGameMode() {}
// Cross Module References
	CHASERGAME_API UClass* Z_Construct_UClass_AChaserGameGameMode();
	CHASERGAME_API UClass* Z_Construct_UClass_AChaserGameGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChaserGame();
// End Cross Module References
	void AChaserGameGameMode::StaticRegisterNativesAChaserGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaserGameGameMode);
	UClass* Z_Construct_UClass_AChaserGameGameMode_NoRegister()
	{
		return AChaserGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChaserGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaserGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaserGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaserGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ChaserGameGameMode.h" },
		{ "ModuleRelativePath", "ChaserGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaserGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaserGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaserGameGameMode_Statics::ClassParams = {
		&AChaserGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChaserGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChaserGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaserGameGameMode()
	{
		if (!Z_Registration_Info_UClass_AChaserGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaserGameGameMode.OuterSingleton, Z_Construct_UClass_AChaserGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChaserGameGameMode.OuterSingleton;
	}
	template<> CHASERGAME_API UClass* StaticClass<AChaserGameGameMode>()
	{
		return AChaserGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaserGameGameMode);
	AChaserGameGameMode::~AChaserGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_ChaserGame_Source_ChaserGame_ChaserGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChaserGame_Source_ChaserGame_ChaserGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChaserGameGameMode, AChaserGameGameMode::StaticClass, TEXT("AChaserGameGameMode"), &Z_Registration_Info_UClass_AChaserGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaserGameGameMode), 2894571576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ChaserGame_Source_ChaserGame_ChaserGameGameMode_h_1889418697(TEXT("/Script/ChaserGame"),
		Z_CompiledInDeferFile_FID_ChaserGame_Source_ChaserGame_ChaserGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ChaserGame_Source_ChaserGame_ChaserGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

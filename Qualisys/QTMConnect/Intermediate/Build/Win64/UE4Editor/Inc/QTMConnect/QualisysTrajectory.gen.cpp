// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/QTMConnect.h"
#include "Classes/QualisysTrajectory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQualisysTrajectory() {}
// Cross Module References
	QTMCONNECT_API UClass* Z_Construct_UClass_UQualisysTrajectory_NoRegister();
	QTMCONNECT_API UClass* Z_Construct_UClass_UQualisysTrajectory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_QTMConnect();
	QTMCONNECT_API UClass* Z_Construct_UClass_AQualisysClient_NoRegister();
// End Cross Module References
	void UQualisysTrajectory::StaticRegisterNativesUQualisysTrajectory()
	{
	}
	UClass* Z_Construct_UClass_UQualisysTrajectory_NoRegister()
	{
		return UQualisysTrajectory::StaticClass();
	}
	UClass* Z_Construct_UClass_UQualisysTrajectory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_QTMConnect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Qualisys" },
				{ "IncludePath", "QualisysTrajectory.h" },
				{ "ModuleRelativePath", "Classes/QualisysTrajectory.h" },
				{ "ToolTip", "Trajectory component" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualisysClient_MetaData[] = {
				{ "Category", "Qualisys" },
				{ "ModuleRelativePath", "Classes/QualisysTrajectory.h" },
				{ "ToolTip", "Set to the Qualisys Client actor. If not set it will default to the first found in the World." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QualisysClient = { UE4CodeGen_Private::EPropertyClass::Object, "QualisysClient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UQualisysTrajectory, QualisysClient), Z_Construct_UClass_AQualisysClient_NoRegister, METADATA_PARAMS(NewProp_QualisysClient_MetaData, ARRAY_COUNT(NewProp_QualisysClient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "Qualisys" },
				{ "ModuleRelativePath", "Classes/QualisysTrajectory.h" },
				{ "ToolTip", "Name of the rigid body" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UQualisysTrajectory, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QualisysClient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UQualisysTrajectory>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UQualisysTrajectory::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQualisysTrajectory, 665505644);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQualisysTrajectory(Z_Construct_UClass_UQualisysTrajectory, &UQualisysTrajectory::StaticClass, TEXT("/Script/QTMConnect"), TEXT("UQualisysTrajectory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQualisysTrajectory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
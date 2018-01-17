// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyOpenDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyOpenDoor() {}
// Cross Module References
	ESCAPEROOM_API UClass* Z_Construct_UClass_UMyOpenDoor_NoRegister();
	ESCAPEROOM_API UClass* Z_Construct_UClass_UMyOpenDoor();
	ESCAPEROOM_API UClass* Z_Construct_UClass_UOpenDoor();
	UPackage* Z_Construct_UPackage__Script_EscapeRoom();
// End Cross Module References
	void UMyOpenDoor::StaticRegisterNativesUMyOpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UMyOpenDoor_NoRegister()
	{
		return UMyOpenDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyOpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UOpenDoor,
				(UObject* (*)())Z_Construct_UPackage__Script_EscapeRoom,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyOpenDoor.h" },
				{ "ModuleRelativePath", "MyOpenDoor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyOpenDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyOpenDoor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyOpenDoor, 3585203506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyOpenDoor(Z_Construct_UClass_UMyOpenDoor, &UMyOpenDoor::StaticClass, TEXT("/Script/EscapeRoom"), TEXT("UMyOpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyOpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

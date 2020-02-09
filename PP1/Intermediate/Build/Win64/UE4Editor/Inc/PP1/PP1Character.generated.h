// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PP1_PP1Character_generated_h
#error "PP1Character.generated.h already included, missing '#pragma once' in PP1Character.h"
#endif
#define PP1_PP1Character_generated_h

#define PP1_Source_PP1_PP1Character_h_14_SPARSE_DATA
#define PP1_Source_PP1_PP1Character_h_14_RPC_WRAPPERS
#define PP1_Source_PP1_PP1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PP1_Source_PP1_PP1Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPP1Character(); \
	friend struct Z_Construct_UClass_APP1Character_Statics; \
public: \
	DECLARE_CLASS(APP1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PP1"), NO_API) \
	DECLARE_SERIALIZER(APP1Character)


#define PP1_Source_PP1_PP1Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPP1Character(); \
	friend struct Z_Construct_UClass_APP1Character_Statics; \
public: \
	DECLARE_CLASS(APP1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PP1"), NO_API) \
	DECLARE_SERIALIZER(APP1Character)


#define PP1_Source_PP1_PP1Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APP1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APP1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APP1Character(APP1Character&&); \
	NO_API APP1Character(const APP1Character&); \
public:


#define PP1_Source_PP1_PP1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APP1Character(APP1Character&&); \
	NO_API APP1Character(const APP1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APP1Character)


#define PP1_Source_PP1_PP1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APP1Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APP1Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APP1Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APP1Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APP1Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APP1Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APP1Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APP1Character, L_MotionController); }


#define PP1_Source_PP1_PP1Character_h_11_PROLOG
#define PP1_Source_PP1_PP1Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PP1_Source_PP1_PP1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	PP1_Source_PP1_PP1Character_h_14_SPARSE_DATA \
	PP1_Source_PP1_PP1Character_h_14_RPC_WRAPPERS \
	PP1_Source_PP1_PP1Character_h_14_INCLASS \
	PP1_Source_PP1_PP1Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PP1_Source_PP1_PP1Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PP1_Source_PP1_PP1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	PP1_Source_PP1_PP1Character_h_14_SPARSE_DATA \
	PP1_Source_PP1_PP1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PP1_Source_PP1_PP1Character_h_14_INCLASS_NO_PURE_DECLS \
	PP1_Source_PP1_PP1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PP1_API UClass* StaticClass<class APP1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PP1_Source_PP1_PP1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

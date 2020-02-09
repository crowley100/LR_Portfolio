// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PP1_PP1Projectile_generated_h
#error "PP1Projectile.generated.h already included, missing '#pragma once' in PP1Projectile.h"
#endif
#define PP1_PP1Projectile_generated_h

#define PP1_Source_PP1_PP1Projectile_h_12_SPARSE_DATA
#define PP1_Source_PP1_PP1Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PP1_Source_PP1_PP1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define PP1_Source_PP1_PP1Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPP1Projectile(); \
	friend struct Z_Construct_UClass_APP1Projectile_Statics; \
public: \
	DECLARE_CLASS(APP1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PP1"), NO_API) \
	DECLARE_SERIALIZER(APP1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PP1_Source_PP1_PP1Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPP1Projectile(); \
	friend struct Z_Construct_UClass_APP1Projectile_Statics; \
public: \
	DECLARE_CLASS(APP1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PP1"), NO_API) \
	DECLARE_SERIALIZER(APP1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PP1_Source_PP1_PP1Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APP1Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APP1Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP1Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APP1Projectile(APP1Projectile&&); \
	NO_API APP1Projectile(const APP1Projectile&); \
public:


#define PP1_Source_PP1_PP1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APP1Projectile(APP1Projectile&&); \
	NO_API APP1Projectile(const APP1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP1Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APP1Projectile)


#define PP1_Source_PP1_PP1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APP1Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APP1Projectile, ProjectileMovement); }


#define PP1_Source_PP1_PP1Projectile_h_9_PROLOG
#define PP1_Source_PP1_PP1Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PP1_Source_PP1_PP1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PP1_Source_PP1_PP1Projectile_h_12_SPARSE_DATA \
	PP1_Source_PP1_PP1Projectile_h_12_RPC_WRAPPERS \
	PP1_Source_PP1_PP1Projectile_h_12_INCLASS \
	PP1_Source_PP1_PP1Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PP1_Source_PP1_PP1Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PP1_Source_PP1_PP1Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	PP1_Source_PP1_PP1Projectile_h_12_SPARSE_DATA \
	PP1_Source_PP1_PP1Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PP1_Source_PP1_PP1Projectile_h_12_INCLASS_NO_PURE_DECLS \
	PP1_Source_PP1_PP1Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PP1_API UClass* StaticClass<class APP1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PP1_Source_PP1_PP1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemComponent_ApplyStayDynamicField_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxLevelPerCommand;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemComponent_ApplyRadialForce_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemComponent_ApplyLinearForce_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

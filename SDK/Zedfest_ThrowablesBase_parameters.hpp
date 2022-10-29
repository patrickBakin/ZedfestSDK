#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ThrowablesBase.ThrowablesBase_C.Use Throwables
struct AThrowablesBase_C_Use_Throwables_Params
{
};

// Function ThrowablesBase.ThrowablesBase_C.SetThrowableMesh
struct AThrowablesBase_C_SetThrowableMesh_Params
{
	class UStaticMesh**                                NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ThrowablesBase.ThrowablesBase_C.ExecuteUbergraph_ThrowablesBase
struct AThrowablesBase_C_ExecuteUbergraph_ThrowablesBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

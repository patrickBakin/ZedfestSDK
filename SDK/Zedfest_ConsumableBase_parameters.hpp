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

// Function ConsumableBase.ConsumableBase_C.ReceiveBeginPlay
struct AConsumableBase_C_ReceiveBeginPlay_Params
{
};

// Function ConsumableBase.ConsumableBase_C.SetConsumableMesh
struct AConsumableBase_C_SetConsumableMesh_Params
{
	class UStaticMesh**                                NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsumableBase.ConsumableBase_C.ExecuteUbergraph_ConsumableBase
struct AConsumableBase_C_ExecuteUbergraph_ConsumableBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

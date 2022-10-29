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

// Function ItemSpecialBase.ItemSpecialBase_C.ReceiveBeginPlay
struct AItemSpecialBase_C_ReceiveBeginPlay_Params
{
};

// Function ItemSpecialBase.ItemSpecialBase_C.SetSpecialItemMesh
struct AItemSpecialBase_C_SetSpecialItemMesh_Params
{
	class UStaticMesh**                                NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemSpecialBase.ItemSpecialBase_C.ExecuteUbergraph_ItemSpecialBase
struct AItemSpecialBase_C_ExecuteUbergraph_ItemSpecialBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

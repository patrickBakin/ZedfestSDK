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

// Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ReceiveBeginPlay
struct ABP_SpecialItem_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.OnDestroyed_Event_1
struct ABP_SpecialItem_Parent_C_OnDestroyed_Event_1_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpecialItem_Parent.BP_SpecialItem_Parent_C.ExecuteUbergraph_BP_SpecialItem_Parent
struct ABP_SpecialItem_Parent_C_ExecuteUbergraph_BP_SpecialItem_Parent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

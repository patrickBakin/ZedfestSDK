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

// Function PickupMelee.PickupMelee_C.UserConstructionScript
struct APickupMelee_C_UserConstructionScript_Params
{
};

// Function PickupMelee.PickupMelee_C.ReceiveBeginPlay
struct APickupMelee_C_ReceiveBeginPlay_Params
{
};

// Function PickupMelee.PickupMelee_C.ExecuteUbergraph_PickupMelee
struct APickupMelee_C_ExecuteUbergraph_PickupMelee_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

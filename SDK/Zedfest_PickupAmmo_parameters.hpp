#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PickupAmmo.PickupAmmo_C.UserConstructionScript
struct APickupAmmo_C_UserConstructionScript_Params
{
};

// Function PickupAmmo.PickupAmmo_C.ReceiveBeginPlay
struct APickupAmmo_C_ReceiveBeginPlay_Params
{
};

// Function PickupAmmo.PickupAmmo_C.ExecuteUbergraph_PickupAmmo
struct APickupAmmo_C_ExecuteUbergraph_PickupAmmo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

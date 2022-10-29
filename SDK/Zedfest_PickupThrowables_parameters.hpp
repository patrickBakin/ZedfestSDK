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

// Function PickupThrowables.PickupThrowables_C.UserConstructionScript
struct APickupThrowables_C_UserConstructionScript_Params
{
};

// Function PickupThrowables.PickupThrowables_C.ReceiveBeginPlay
struct APickupThrowables_C_ReceiveBeginPlay_Params
{
};

// Function PickupThrowables.PickupThrowables_C.ExecuteUbergraph_PickupThrowables
struct APickupThrowables_C_ExecuteUbergraph_PickupThrowables_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PickupSpecialItem.PickupSpecialItem_C.UserConstructionScript
struct APickupSpecialItem_C_UserConstructionScript_Params
{
};

// Function PickupSpecialItem.PickupSpecialItem_C.ReceiveBeginPlay
struct APickupSpecialItem_C_ReceiveBeginPlay_Params
{
};

// Function PickupSpecialItem.PickupSpecialItem_C.ReceiveActorBeginOverlap
struct APickupSpecialItem_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupSpecialItem.PickupSpecialItem_C.ExecuteUbergraph_PickupSpecialItem
struct APickupSpecialItem_C_ExecuteUbergraph_PickupSpecialItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

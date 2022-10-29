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

// Function PickupConsumable.PickupConsumable_C.UserConstructionScript
struct APickupConsumable_C_UserConstructionScript_Params
{
};

// Function PickupConsumable.PickupConsumable_C.ReceiveBeginPlay
struct APickupConsumable_C_ReceiveBeginPlay_Params
{
};

// Function PickupConsumable.PickupConsumable_C.ReceiveActorBeginOverlap
struct APickupConsumable_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupConsumable.PickupConsumable_C.ExecuteUbergraph_PickupConsumable
struct APickupConsumable_C_ExecuteUbergraph_PickupConsumable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

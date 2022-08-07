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

// Function PickupWeapon.PickupWeapon_C.UserConstructionScript
struct APickupWeapon_C_UserConstructionScript_Params
{
};

// Function PickupWeapon.PickupWeapon_C.ReceiveBeginPlay
struct APickupWeapon_C_ReceiveBeginPlay_Params
{
};

// Function PickupWeapon.PickupWeapon_C.ExecuteUbergraph_PickupWeapon
struct APickupWeapon_C_ExecuteUbergraph_PickupWeapon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

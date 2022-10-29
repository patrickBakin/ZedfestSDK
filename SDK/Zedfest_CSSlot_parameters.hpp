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

// Function CSSlot.CSSlot_C.OnRep_Timer Elapsed to Upgrade
struct ACSSlot_C_OnRep_Timer_Elapsed_to_Upgrade_Params
{
};

// Function CSSlot.CSSlot_C.Start Timer to Upgrade
struct ACSSlot_C_Start_Timer_to_Upgrade_Params
{
};

// Function CSSlot.CSSlot_C.SpawnWeaponUpgraded
struct ACSSlot_C_SpawnWeaponUpgraded_Params
{
};

// Function CSSlot.CSSlot_C.ReceiveBeginPlay
struct ACSSlot_C_ReceiveBeginPlay_Params
{
};

// Function CSSlot.CSSlot_C.ReceiveTick
struct ACSSlot_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CSSlot.CSSlot_C.MultiCast Reset Slot Percent
struct ACSSlot_C_MultiCast_Reset_Slot_Percent_Params
{
};

// Function CSSlot.CSSlot_C.ExecuteUbergraph_CSSlot
struct ACSSlot_C_ExecuteUbergraph_CSSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

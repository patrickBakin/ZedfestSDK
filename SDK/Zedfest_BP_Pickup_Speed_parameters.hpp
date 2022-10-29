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

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Set Widget Key Binds
struct ABP_Pickup_Speed_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__FinishedFunc
struct ABP_Pickup_Speed_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.Timeline_0__UpdateFunc
struct ABP_Pickup_Speed_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.PickupEffect
struct ABP_Pickup_Speed_C_PickupEffect_Params
{
};

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.SpeedVisibilityEvent
struct ABP_Pickup_Speed_C_SpeedVisibilityEvent_Params
{
};

// Function BP_Pickup_Speed.BP_Pickup_Speed_C.ExecuteUbergraph_BP_Pickup_Speed
struct ABP_Pickup_Speed_C_ExecuteUbergraph_BP_Pickup_Speed_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

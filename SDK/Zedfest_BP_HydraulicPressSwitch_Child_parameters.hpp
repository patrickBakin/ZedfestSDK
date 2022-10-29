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

// Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.SetSwitchCodeText
struct ABP_HydraulicPressSwitch_Child_C_SetSwitchCodeText_Params
{
	struct FText*                                      Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HydraulicPressSwitch_Child.BP_HydraulicPressSwitch_Child_C.ExecuteUbergraph_BP_HydraulicPressSwitch_Child
struct ABP_HydraulicPressSwitch_Child_C_ExecuteUbergraph_BP_HydraulicPressSwitch_Child_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

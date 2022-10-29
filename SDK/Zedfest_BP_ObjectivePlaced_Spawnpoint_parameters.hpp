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

// Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ObjectivePlaceIndicatorEvent
struct ABP_ObjectivePlaced_Spawnpoint_C_ObjectivePlaceIndicatorEvent_Params
{
	bool*                                              TurnOn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint
struct ABP_ObjectivePlaced_Spawnpoint_C_ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.IsAllowedTarget
struct ABP_HM_MissileGrenade_C_IsAllowedTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ReceiveBeginPlay
struct ABP_HM_MissileGrenade_C_ReceiveBeginPlay_Params
{
};

// Function BP_HM_MissileGrenade.BP_HM_MissileGrenade_C.ExecuteUbergraph_BP_HM_MissileGrenade
struct ABP_HM_MissileGrenade_C_ExecuteUbergraph_BP_HM_MissileGrenade_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

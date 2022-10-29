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

// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.GetHealth
struct UPatrolRoute_Head_HP_C_GetHealth_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.Construct
struct UPatrolRoute_Head_HP_C_Construct_Params
{
};

// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.InitiateHeadUI
struct UPatrolRoute_Head_HP_C_InitiateHeadUI_Params
{
	class ABP_NPC_Base_C**                             AI_Ref;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PatrolRoute_Head_HP.PatrolRoute_Head_HP_C.ExecuteUbergraph_PatrolRoute_Head_HP
struct UPatrolRoute_Head_HP_C_ExecuteUbergraph_PatrolRoute_Head_HP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

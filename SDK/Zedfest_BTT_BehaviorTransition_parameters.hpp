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

// Function BTT_BehaviorTransition.BTT_BehaviorTransition_C.ReceiveExecute
struct UBTT_BehaviorTransition_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_BehaviorTransition.BTT_BehaviorTransition_C.ExecuteUbergraph_BTT_BehaviorTransition
struct UBTT_BehaviorTransition_C_ExecuteUbergraph_BTT_BehaviorTransition_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

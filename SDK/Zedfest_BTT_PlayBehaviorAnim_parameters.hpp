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

// Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ReceiveExecute
struct UBTT_PlayBehaviorAnim_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayBehaviorAnim.BTT_PlayBehaviorAnim_C.ExecuteUbergraph_BTT_PlayBehaviorAnim
struct UBTT_PlayBehaviorAnim_C_ExecuteUbergraph_BTT_PlayBehaviorAnim_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

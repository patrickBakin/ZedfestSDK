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

// Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ReceiveExecute
struct UBTT_AttackTargetRanged_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ExecuteUbergraph_BTT_AttackTargetRanged
struct UBTT_AttackTargetRanged_C_ExecuteUbergraph_BTT_AttackTargetRanged_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

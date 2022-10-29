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

// Function BTT_RotateToTarget.BTT_RotateToTarget_C.GetBlackboardAsVector
struct UBTT_RotateToTarget_C_GetBlackboardAsVector_Params
{
	struct FBlackboardKeySelector*                     BBKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     RetVector;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_RotateToTarget.BTT_RotateToTarget_C.ReceiveExecute
struct UBTT_RotateToTarget_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_RotateToTarget.BTT_RotateToTarget_C.ExecuteUbergraph_BTT_RotateToTarget
struct UBTT_RotateToTarget_C_ExecuteUbergraph_BTT_RotateToTarget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

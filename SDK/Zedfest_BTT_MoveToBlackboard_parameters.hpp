#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.GetBlackboardValue
struct UBTT_MoveToBlackboard_C_GetBlackboardValue_Params
{
	struct FBlackboardKeySelector*                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      ActorValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96
struct UBTT_MoveToBlackboard_C_OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController**                              AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96
struct UBTT_MoveToBlackboard_C_OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96_Params
{
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_914C5A064B7524DE0195529892D972A7
struct UBTT_MoveToBlackboard_C_OnMoveFinished_914C5A064B7524DE0195529892D972A7_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController**                              AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_914C5A064B7524DE0195529892D972A7
struct UBTT_MoveToBlackboard_C_OnRequestFailed_914C5A064B7524DE0195529892D972A7_Params
{
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveExecute
struct UBTT_MoveToBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnQueryFinishedEvent_Event_1
struct UBTT_MoveToBlackboard_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper**          QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>*                      QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveAbort
struct UBTT_MoveToBlackboard_C_ReceiveAbort_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.CustomEvent_1
struct UBTT_MoveToBlackboard_C_CustomEvent_1_Params
{
};

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ExecuteUbergraph_BTT_MoveToBlackboard
struct UBTT_MoveToBlackboard_C_ExecuteUbergraph_BTT_MoveToBlackboard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

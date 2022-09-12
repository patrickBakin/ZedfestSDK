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

// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.RotateNameToCamera
struct APatrolRoute_Head_BP_C_RotateNameToCamera_Params
{
};

// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.SetPatrolRouteRef
struct APatrolRoute_Head_BP_C_SetPatrolRouteRef_Params
{
	class ABP_NPC_Base_C**                             PatrolRouteRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ReceiveBeginPlay
struct APatrolRoute_Head_BP_C_ReceiveBeginPlay_Params
{
};

// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ExecuteUbergraph_PatrolRoute_Head_BP
struct APatrolRoute_Head_BP_C_ExecuteUbergraph_PatrolRoute_Head_BP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Workspace.BP_Workspace_C.GetSlotTransform
struct ABP_Workspace_C_GetSlotTransform_Params
{
	class ACharacter**                                 WorkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.RemoveFromSlot
struct ABP_Workspace_C_RemoveFromSlot_Params
{
	class ACharacter**                                 WorkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.GetRandomAnimation
struct ABP_Workspace_C_GetRandomAnimation_Params
{
	class UAnimMontage*                                RandAnim;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.PlayWorkerInSlot
struct ABP_Workspace_C_PlayWorkerInSlot_Params
{
	class ACharacter**                                 WorkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WorkSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.TakeSlot
struct ABP_Workspace_C_TakeSlot_Params
{
	class ACharacter**                                 WorkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SlotLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.HasAvailableSlot
struct ABP_Workspace_C_HasAvailableSlot_Params
{
	bool                                               Available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Workspace.BP_Workspace_C.UserConstructionScript
struct ABP_Workspace_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

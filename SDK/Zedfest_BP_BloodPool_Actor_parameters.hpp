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

// Function BP_BloodPool_Actor.BP_BloodPool_Actor_C.Timeline_0__FinishedFunc
struct ABP_BloodPool_Actor_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_BloodPool_Actor.BP_BloodPool_Actor_C.Timeline_0__UpdateFunc
struct ABP_BloodPool_Actor_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_BloodPool_Actor.BP_BloodPool_Actor_C.ReceiveBeginPlay
struct ABP_BloodPool_Actor_C_ReceiveBeginPlay_Params
{
};

// Function BP_BloodPool_Actor.BP_BloodPool_Actor_C.BndEvt__SimplePlane_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BloodPool_Actor_C_BndEvt__SimplePlane_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BloodPool_Actor.BP_BloodPool_Actor_C.ExecuteUbergraph_BP_BloodPool_Actor
struct ABP_BloodPool_Actor_C_ExecuteUbergraph_BP_BloodPool_Actor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

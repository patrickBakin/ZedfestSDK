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

// Function BP_NPC_Siren.BP_NPC_Siren_C.UserConstructionScript
struct ABP_NPC_Siren_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_Siren_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.OnDeath
struct ABP_NPC_Siren_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.ReceiveBeginPlay
struct ABP_NPC_Siren_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.OnMeleeAttack
struct ABP_NPC_Siren_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.FanTimer
struct ABP_NPC_Siren_C_FanTimer_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.SirenExplodeEvent
struct ABP_NPC_Siren_C_SirenExplodeEvent_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_NPC_Siren_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.StompGroundEvent
struct ABP_NPC_Siren_C_StompGroundEvent_Params
{
};

// Function BP_NPC_Siren.BP_NPC_Siren_C.ExecuteUbergraph_BP_NPC_Siren
struct ABP_NPC_Siren_C_ExecuteUbergraph_BP_NPC_Siren_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.UserConstructionScript
struct ABP_NPC_SpaceBoss_C_UserConstructionScript_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__FinishedFunc
struct ABP_NPC_SpaceBoss_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__UpdateFunc
struct ABP_NPC_SpaceBoss_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__FinishedFunc
struct ABP_NPC_SpaceBoss_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__UpdateFunc
struct ABP_NPC_SpaceBoss_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveBeginPlay
struct ABP_NPC_SpaceBoss_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDeath
struct ABP_NPC_SpaceBoss_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_SpaceBoss_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnMeleeAttack
struct ABP_NPC_SpaceBoss_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveTick
struct ABP_NPC_SpaceBoss_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage
struct ABP_NPC_SpaceBoss_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage2
struct ABP_NPC_SpaceBoss_C_PerformSpecialDamage2_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage3
struct ABP_NPC_SpaceBoss_C_PerformSpecialDamage3_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DashTimerEvent
struct ABP_NPC_SpaceBoss_C_DashTimerEvent_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage4
struct ABP_NPC_SpaceBoss_C_PerformSpecialDamage4_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_NPC_SpaceBoss_C_BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StompGroundEvent
struct ABP_NPC_SpaceBoss_C_StompGroundEvent_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Boss25%Event
struct ABP_NPC_SpaceBoss_C_Boss25_Event_Params
{
	struct FText*                                      BossQuote;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDamaged
struct ABP_NPC_SpaceBoss_C_OnDamaged_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DeluxeShieldUp
struct ABP_NPC_SpaceBoss_C_DeluxeShieldUp_Params
{
	bool*                                              Up_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StopDeluxeShieldEvent
struct ABP_NPC_SpaceBoss_C_StopDeluxeShieldEvent_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.CustomEvent_1
struct ABP_NPC_SpaceBoss_C_CustomEvent_1_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.RivianFrontJumpEvent
struct ABP_NPC_SpaceBoss_C_RivianFrontJumpEvent_Params
{
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.EnragedMaterialEvent
struct ABP_NPC_SpaceBoss_C_EnragedMaterialEvent_Params
{
	bool*                                              Enrage_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ExecuteUbergraph_BP_NPC_SpaceBoss
struct ABP_NPC_SpaceBoss_C_ExecuteUbergraph_BP_NPC_SpaceBoss_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

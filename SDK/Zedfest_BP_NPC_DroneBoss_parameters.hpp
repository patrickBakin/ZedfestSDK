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

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.UserConstructionScript
struct ABP_NPC_DroneBoss_C_UserConstructionScript_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__FinishedFunc
struct ABP_NPC_DroneBoss_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__UpdateFunc
struct ABP_NPC_DroneBoss_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__FinishedFunc
struct ABP_NPC_DroneBoss_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__UpdateFunc
struct ABP_NPC_DroneBoss_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveBeginPlay
struct ABP_NPC_DroneBoss_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDeath
struct ABP_NPC_DroneBoss_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_DroneBoss_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnMeleeAttack
struct ABP_NPC_DroneBoss_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDamaged
struct ABP_NPC_DroneBoss_C_OnDamaged_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveTick
struct ABP_NPC_DroneBoss_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.PerformSpecialDamage
struct ABP_NPC_DroneBoss_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Boss25%Event
struct ABP_NPC_DroneBoss_C_Boss25_Event_Params
{
	struct FText*                                      BossQuote;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.DispenserArcEvent
struct ABP_NPC_DroneBoss_C_DispenserArcEvent_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.AndroidShieldUp
struct ABP_NPC_DroneBoss_C_AndroidShieldUp_Params
{
	bool*                                              Up_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.HurtGlitchFaceEvent
struct ABP_NPC_DroneBoss_C_HurtGlitchFaceEvent_Params
{
};

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ExecuteUbergraph_BP_NPC_DroneBoss
struct ABP_NPC_DroneBoss_C_ExecuteUbergraph_BP_NPC_DroneBoss_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.UserConstructionScript
struct ABP_NPC_AndroidBoss_C_UserConstructionScript_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.Timeline_0__FinishedFunc
struct ABP_NPC_AndroidBoss_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.Timeline_0__UpdateFunc
struct ABP_NPC_AndroidBoss_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.ReceiveBeginPlay
struct ABP_NPC_AndroidBoss_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.OnDeath
struct ABP_NPC_AndroidBoss_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_AndroidBoss_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.OnMeleeAttack
struct ABP_NPC_AndroidBoss_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.OnDamaged
struct ABP_NPC_AndroidBoss_C_OnDamaged_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.ReceiveTick
struct ABP_NPC_AndroidBoss_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.PerformSpecialDamage
struct ABP_NPC_AndroidBoss_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.Boss25%Event
struct ABP_NPC_AndroidBoss_C_Boss25_Event_Params
{
	struct FText*                                      BossQuote;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.PerformSpecialDamage2
struct ABP_NPC_AndroidBoss_C_PerformSpecialDamage2_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.PerformSpecialDamage3
struct ABP_NPC_AndroidBoss_C_PerformSpecialDamage3_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.AndroidFrontJumpEvent
struct ABP_NPC_AndroidBoss_C_AndroidFrontJumpEvent_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.AndroidShieldUp
struct ABP_NPC_AndroidBoss_C_AndroidShieldUp_Params
{
	bool*                                              Up_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.StopAndroidShieldEvent
struct ABP_NPC_AndroidBoss_C_StopAndroidShieldEvent_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.PerformSpecialDamage4
struct ABP_NPC_AndroidBoss_C_PerformSpecialDamage4_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.EnragedCustomEvent
struct ABP_NPC_AndroidBoss_C_EnragedCustomEvent_Params
{
};

// Function BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C.ExecuteUbergraph_BP_NPC_AndroidBoss
struct ABP_NPC_AndroidBoss_C_ExecuteUbergraph_BP_NPC_AndroidBoss_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.UserConstructionScript
struct ABP_NPC_Fleshman_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ReceiveBeginPlay
struct ABP_NPC_Fleshman_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage
struct ABP_NPC_Fleshman_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnMeleeAttack
struct ABP_NPC_Fleshman_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnDeath
struct ABP_NPC_Fleshman_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage2
struct ABP_NPC_Fleshman_C_PerformSpecialDamage2_Params
{
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_Fleshman_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ExecuteUbergraph_BP_NPC_Fleshman
struct ABP_NPC_Fleshman_C_ExecuteUbergraph_BP_NPC_Fleshman_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

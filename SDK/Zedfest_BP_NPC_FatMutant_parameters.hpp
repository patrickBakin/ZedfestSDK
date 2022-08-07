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

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.UserConstructionScript
struct ABP_NPC_FatMutant_C_UserConstructionScript_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.PerformSpecialDamage
struct ABP_NPC_FatMutant_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.OnMeleeAttack
struct ABP_NPC_FatMutant_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.PerformSpecialDamage2
struct ABP_NPC_FatMutant_C_PerformSpecialDamage2_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_FatMutant_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.OnDeath
struct ABP_NPC_FatMutant_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.ReceiveBeginPlay
struct ABP_NPC_FatMutant_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.ReceiveDestroyed
struct ABP_NPC_FatMutant_C_ReceiveDestroyed_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.StompGroundEvent
struct ABP_NPC_FatMutant_C_StompGroundEvent_Params
{
};

// Function BP_NPC_FatMutant.BP_NPC_FatMutant_C.ExecuteUbergraph_BP_NPC_FatMutant
struct ABP_NPC_FatMutant_C_ExecuteUbergraph_BP_NPC_FatMutant_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

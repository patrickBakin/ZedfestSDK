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

// Function BP_NPC_Manta.BP_NPC_Manta_C.UserConstructionScript
struct ABP_NPC_Manta_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_Manta_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.OnMeleeAttack
struct ABP_NPC_Manta_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.OnDamaged
struct ABP_NPC_Manta_C_OnDamaged_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.OnDeath
struct ABP_NPC_Manta_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.ReceiveBeginPlay
struct ABP_NPC_Manta_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Manta.BP_NPC_Manta_C.ExecuteUbergraph_BP_NPC_Manta
struct ABP_NPC_Manta_C_ExecuteUbergraph_BP_NPC_Manta_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_NPC_PoisonDroid.BP_NPC_PoisonDroid_C.ReceiveBeginPlay
struct ABP_NPC_PoisonDroid_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_PoisonDroid.BP_NPC_PoisonDroid_C.OnDeath
struct ABP_NPC_PoisonDroid_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_PoisonDroid.BP_NPC_PoisonDroid_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_PoisonDroid_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_PoisonDroid.BP_NPC_PoisonDroid_C.ExecuteUbergraph_BP_NPC_PoisonDroid
struct ABP_NPC_PoisonDroid_C_ExecuteUbergraph_BP_NPC_PoisonDroid_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

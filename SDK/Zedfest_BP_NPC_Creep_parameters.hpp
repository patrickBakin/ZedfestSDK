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

// Function BP_NPC_Creep.BP_NPC_Creep_C.UserConstructionScript
struct ABP_NPC_Creep_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Creep.BP_NPC_Creep_C.ReceiveBeginPlay
struct ABP_NPC_Creep_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Creep.BP_NPC_Creep_C.OnDeath
struct ABP_NPC_Creep_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Creep.BP_NPC_Creep_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_Creep_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_Creep.BP_NPC_Creep_C.OnMeleeAttack
struct ABP_NPC_Creep_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Creep.BP_NPC_Creep_C.ExecuteUbergraph_BP_NPC_Creep
struct ABP_NPC_Creep_C_ExecuteUbergraph_BP_NPC_Creep_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

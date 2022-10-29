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

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.UserConstructionScript
struct ABP_NPC_Mutant3_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnMeleeAttack
struct ABP_NPC_Mutant3_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_NPC_Mutant3_C_BndEvt__Mini_Gas_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.PerformSpecialDamage
struct ABP_NPC_Mutant3_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.OnDeath
struct ABP_NPC_Mutant3_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ReceiveBeginPlay
struct ABP_NPC_Mutant3_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_Mutant3_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_Mutant3.BP_NPC_Mutant3_C.ExecuteUbergraph_BP_NPC_Mutant3
struct ABP_NPC_Mutant3_C_ExecuteUbergraph_BP_NPC_Mutant3_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

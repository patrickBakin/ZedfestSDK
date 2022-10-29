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

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.UserConstructionScript
struct ABP_NPC_ExplodingRobot_C_UserConstructionScript_Params
{
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnDeath
struct ABP_NPC_ExplodingRobot_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
struct ABP_NPC_ExplodingRobot_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.OnMeleeAttack
struct ABP_NPC_ExplodingRobot_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ReceiveBeginPlay
struct ABP_NPC_ExplodingRobot_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.SirenExplodeEvent
struct ABP_NPC_ExplodingRobot_C_SirenExplodeEvent_Params
{
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_NPC_ExplodingRobot_C_BndEvt__MeleeCollision_0_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_ExplodingRobot.BP_NPC_ExplodingRobot_C.ExecuteUbergraph_BP_NPC_ExplodingRobot
struct ABP_NPC_ExplodingRobot_C_ExecuteUbergraph_BP_NPC_ExplodingRobot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayParkourAnim
struct UBP_BehaviorComponent_C_PlayParkourAnim_Params
{
	struct FVector*                                    TargetLoc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    WallNormal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Wide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Climb;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_InvestigateBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_HitBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_HitBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_DefendBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_DefendBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_AttackRangedBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_AttackMeleeBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_SeekBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_PatrolBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_PatrolBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_FleeBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_FollowBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleBehaviorConfig
struct UBP_BehaviorComponent_C_OnRep_IdleBehaviorConfig_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetRandomActorWithTag
struct UBP_BehaviorComponent_C_GetRandomActorWithTag_Params
{
	class AActor*                                      RandomActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekTarget
struct UBP_BehaviorComponent_C_OnRep_SeekTarget_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekAcceptanceRadius
struct UBP_BehaviorComponent_C_OnRep_SeekAcceptanceRadius_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateInterval
struct UBP_BehaviorComponent_C_OnRep_InvestigateInterval_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateDistance
struct UBP_BehaviorComponent_C_OnRep_InvestigateDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackSpeed
struct UBP_BehaviorComponent_C_OnRep_AttackSpeed_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowDistance
struct UBP_BehaviorComponent_C_OnRep_FollowDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedDistance
struct UBP_BehaviorComponent_C_OnRep_AttackRangedDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeDistance
struct UBP_BehaviorComponent_C_OnRep_AttackMeleeDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeDistance
struct UBP_BehaviorComponent_C_OnRep_FleeDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_RandLocationDelay
struct UBP_BehaviorComponent_C_OnRep_RandLocationDelay_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_MaxRandLocationDistance
struct UBP_BehaviorComponent_C_OnRep_MaxRandLocationDistance_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleType
struct UBP_BehaviorComponent_C_OnRep_IdleType_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetEQSContextActor
struct UBP_BehaviorComponent_C_GetEQSContextActor_Params
{
	class AActor*                                      RetActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetBBKeyTargetActor
struct UBP_BehaviorComponent_C_GetBBKeyTargetActor_Params
{
	class AActor*                                      RetActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ResetDelayTrigger
struct UBP_BehaviorComponent_C_ResetDelayTrigger_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForHealthTriggers
struct UBP_BehaviorComponent_C_CheckForHealthTriggers_Params
{
	float*                                             Percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAudio
struct UBP_BehaviorComponent_C_PlayAudio_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorConfig
struct UBP_BehaviorComponent_C_GetCurrentBehaviorConfig_Params
{
	struct FStruct_BasicBehavior                       Config;                                                   // (Parm, OutParm)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetNearestActorWithTag
struct UBP_BehaviorComponent_C_GetNearestActorWithTag_Params
{
	class AActor*                                      NearestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.DoRangedAttack
struct UBP_BehaviorComponent_C_DoRangedAttack_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckIfAliveIfNPC
struct UBP_BehaviorComponent_C_CheckIfAliveIfNPC_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetOwningCharacter
struct UBP_BehaviorComponent_C_GetOwningCharacter_Params
{
	class ACharacter*                                  RetCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentWorkspace
struct UBP_BehaviorComponent_C_GetCurrentWorkspace_Params
{
	class ABP_Workspace_C*                             RetWorkspace;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetCurrentWorkspace
struct UBP_BehaviorComponent_C_SetCurrentWorkspace_Params
{
	class ABP_Workspace_C**                            NewWorkspace;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.IsPlayingAnimation
struct UBP_BehaviorComponent_C_IsPlayingAnimation_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAnimation
struct UBP_BehaviorComponent_C_PlayAnimation_Params
{
	float                                              AnimLength;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentAttackTarget
struct UBP_BehaviorComponent_C_GetCurrentAttackTarget_Params
{
	class AActor*                                      TargetRef;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindAttackTarget
struct UBP_BehaviorComponent_C_FindAttackTarget_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindSeekTarget
struct UBP_BehaviorComponent_C_FindSeekTarget_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindNextPatrolLocation
struct UBP_BehaviorComponent_C_FindNextPatrolLocation_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorType
struct UBP_BehaviorComponent_C_GetCurrentBehaviorType_Params
{
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehaviorType;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForDistanceTriggers
struct UBP_BehaviorComponent_C_CheckForDistanceTriggers_Params
{
	bool*                                              CheckWithin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ChangeBehavior
struct UBP_BehaviorComponent_C_ChangeBehavior_Params
{
	TEnumAsByte<Enum_BehaviorType>*                    NewBehaviorType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              StopAnimations;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetDefaults
struct UBP_BehaviorComponent_C_SetDefaults_Params
{
	class AAIController**                              ControllerIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStopAnimation
struct UBP_BehaviorComponent_C_OnStopAnimation_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveBeginPlay
struct UBP_BehaviorComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnPerceptionUpdate
struct UBP_BehaviorComponent_C_OnPerceptionUpdate_Params
{
	class AActor**                                     ActorRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus*                                StimulusRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDelayTrigger
struct UBP_BehaviorComponent_C_OnDelayTrigger_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveMessageTag
struct UBP_BehaviorComponent_C_ReceiveMessageTag_Params
{
	TEnumAsByte<Enum_MessageTag>*                      MessageTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDeath
struct UBP_BehaviorComponent_C_OnDeath_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAudio
struct UBP_BehaviorComponent_C_ReplicatedAudio_Params
{
	class USoundBase**                                 Audio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAnimation
struct UBP_BehaviorComponent_C_ReplicatedAnimation_Params
{
	class UAnimMontage**                               Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttack_Event
struct UBP_BehaviorComponent_C_OnEndAttack_Event_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate_Event
struct UBP_BehaviorComponent_C_OnBeginInvestigate_Event_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle_Event
struct UBP_BehaviorComponent_C_OnBeginIdle_Event_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStartTalking
struct UBP_BehaviorComponent_C_OnStartTalking_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TalkLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_IdleType>*                        PrevIdleType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveEndPlay
struct UBP_BehaviorComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ExecuteUbergraph_BP_BehaviorComponent
struct UBP_BehaviorComponent_C_ExecuteUbergraph_BP_BehaviorComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndInvestigate__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndInvestigate__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginInvestigate__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndHit__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndHit__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginHit__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginHit__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndDefend__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndDefend__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginDefend__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginDefend__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackRanged__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndAttackRanged__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackRanged__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginAttackRanged__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackMelee__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndAttackMelee__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackMelee__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginAttackMelee__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndSeek__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndSeek__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginSeek__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginSeek__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndPatrol__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndPatrol__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginPatrol__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginPatrol__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFlee__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndFlee__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFlee__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginFlee__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFollow__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndFollow__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFollow__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginFollow__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndIdle__DelegateSignature
struct UBP_BehaviorComponent_C_OnEndIdle__DelegateSignature_Params
{
};

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle__DelegateSignature
struct UBP_BehaviorComponent_C_OnBeginIdle__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

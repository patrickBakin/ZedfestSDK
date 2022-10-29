#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BehaviorComponent.BP_BehaviorComponent_C
// 0x0B3D (0x0C35 - 0x00F8)
class UBP_BehaviorComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FStruct_BasicBehavior                       CurrentBehaviorConfig;                                    // 0x0100(0x00B0) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FStruct_BasicBehavior                       IdleBehaviorConfig;                                       // 0x01B0(0x00B0) (Edit, BlueprintVisible, Net)
	struct FStruct_BasicBehavior                       FollowBehaviorConfig;                                     // 0x0260(0x00B0) (Edit, BlueprintVisible, Net)
	struct FStruct_BasicBehavior                       FleeBehaviorConfig;                                       // 0x0310(0x00B0) (Edit, BlueprintVisible, Net)
	struct FStruct_BasicBehavior                       PatrolBehaviorConfig;                                     // 0x03C0(0x00B0) (Edit, BlueprintVisible, Net)
	class ABP_PatrolRoute_C*                           PatrolRoute;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     InitialBehavior;                                          // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	TArray<struct FStruct_BasicBehavior>               BehaviorArray;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAIController*                               ControllerRef;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FStruct_BasicBehavior                       SeekBehaviorConfig;                                       // 0x0498(0x00B0) (Edit, BlueprintVisible, Net)
	class ACharacter*                                  OwningCharacter;                                          // 0x0548(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FleeDistance;                                             // 0x0550(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     FleeTransition;                                           // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_PatrolType>                       PatrolType;                                               // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0556(0x0002) MISSED OFFSET
	int                                                PatrolSplineIndex;                                        // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PatrolDirection;                                          // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	class AActor*                                      SeekTarget;                                               // 0x0560(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     SeekTransition;                                           // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	struct FStruct_BasicBehavior                       AttackMeleeBehaviorConfig;                                // 0x0570(0x00B0) (Edit, BlueprintVisible, Net)
	struct FStruct_BasicBehavior                       AttackRangedBehaviorConfig;                               // 0x0620(0x00B0) (Edit, BlueprintVisible, Net)
	class AActor*                                      AttackTarget;                                             // 0x06D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetsConsiderationRadius;                               // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackMeleeDistance;                                      // 0x06DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FStruct_BasicBehavior                       DefendBehaviorConfig;                                     // 0x06E0(0x00B0) (Edit, BlueprintVisible, Net)
	float                                              AttackRangedDistance;                                     // 0x0790(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     AttackMeleeTransition;                                    // 0x0794(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_IdleType>                         IdleType;                                                 // 0x0795(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0796(0x0002) MISSED OFFSET
	float                                              MaxRandLocationDistance;                                  // 0x0798(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              RandLocationDelay;                                        // 0x079C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class ABP_Workspace_C*                             CurrentWorkspace;                                         // 0x07A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Workspace_C*>                     AvailableWorkspaces;                                      // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               IsAlive;                                                  // 0x07B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     AttackRangedTransition;                                   // 0x07B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x07BA(0x0002) MISSED OFFSET
	float                                              AttackSpeed;                                              // 0x07BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumAttacksBeforeReload;                                   // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumAttacks;                                               // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ReloadAnimation;                                          // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     DefendTransition;                                         // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class ABP_AIStorage_C*                             AiStorageRef;                                             // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsReplicated;                                             // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	TArray<int>                                        AnimationIndices;                                         // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FollowDistance;                                           // 0x07F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               RequireLineOfSight;                                       // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginIdle;                                              // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndIdle;                                                // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginFollow;                                            // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndFollow;                                              // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginFlee;                                              // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndFlee;                                                // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginPatrol;                                            // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndPatrol;                                              // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSeek;                                              // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSeek;                                                // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginAttackMelee;                                       // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAttackMelee;                                         // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginAttackRanged;                                      // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndAttackRanged;                                        // 0x08D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginDefend;                                            // 0x08E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndDefend;                                              // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<Enum_BehaviorType>                     BehaviorToDelay;                                          // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStruct_BasicBehavior                       HitBehaviorConfig;                                        // 0x0910(0x00B0) (Edit, BlueprintVisible, Net)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     HitTransition;                                            // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginHit;                                               // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndHit;                                                 // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FStruct_BasicBehavior                       InvestigateBehaviorConfig;                                // 0x09F0(0x00B0) (Edit, BlueprintVisible, Net)
	float                                              InvestigateDistance;                                      // 0x0AA0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              InvestigateInterval;                                      // 0x0AA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                InvestigateCount;                                         // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     InvestigateTransition;                                    // 0x0AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0AAD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginInvestigate;                                       // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndInvestigate;                                         // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     SenseLocation;                                            // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentInvestigateCount;                                  // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SeekAcceptanceRadius;                                     // 0x0AE0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldMatchSpeed;                                         // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0AE5(0x0003) MISSED OFFSET
	class AActor*                                      EQSContextActor;                                          // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TalkingInterval;                                          // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	class ABP_Spawner_C*                               SpawnerRef;                                               // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FStruct_BasicBehavior                       ParkourBehaviorConfig;                                    // 0x0B00(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseDeathAnimation;                                        // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	TArray<class UAnimSequenceBase*>                   DeathAnimations;                                          // 0x0BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<Enum_BehaviorType>                     CurrentBehaviorType;                                      // 0x0BC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_BehaviorType>                     PrevBehaviorType;                                         // 0x0BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanParkour;                                               // 0x0BCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               JumpsOnly;                                                // 0x0BCB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCheckDistance;                                         // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VaultHeight;                                              // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbHeight;                                              // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightLimit;                                              // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	TArray<class UAnimMontage*>                        VaultAnimations;                                          // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        VaultWideAnimations;                                      // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        ClimbAnimations;                                          // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        ClimbWideAnimations;                                      // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RootMotionParkour;                                        // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	float                                              AnimLength;                                               // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_GM_HordeMode_C*                          BehaviorGamemodeRef;                                      // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomSpeedFloat;                                         // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttacking_;                                             // 0x0C34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BehaviorComponent.BP_BehaviorComponent_C");
		return ptr;
	}


	void PlayParkourAnim(struct FVector* TargetLoc, struct FVector* WallNormal, bool* Wide, bool* Climb, float* PlayLength);
	void OnRep_InvestigateBehaviorConfig();
	void OnRep_HitBehaviorConfig();
	void OnRep_DefendBehaviorConfig();
	void OnRep_AttackRangedBehaviorConfig();
	void OnRep_AttackMeleeBehaviorConfig();
	void OnRep_SeekBehaviorConfig();
	void OnRep_PatrolBehaviorConfig();
	void OnRep_FleeBehaviorConfig();
	void OnRep_FollowBehaviorConfig();
	void OnRep_IdleBehaviorConfig();
	void GetRandomActorWithTag(class AActor** RandomActor);
	void OnRep_SeekTarget();
	void OnRep_SeekAcceptanceRadius();
	void OnRep_InvestigateInterval();
	void OnRep_InvestigateDistance();
	void OnRep_AttackSpeed();
	void OnRep_FollowDistance();
	void OnRep_AttackRangedDistance();
	void OnRep_AttackMeleeDistance();
	void OnRep_FleeDistance();
	void OnRep_RandLocationDelay();
	void OnRep_MaxRandLocationDistance();
	void OnRep_IdleType();
	void GetEQSContextActor(class AActor** RetActor);
	void GetBBKeyTargetActor(class AActor** RetActor);
	void ResetDelayTrigger();
	void CheckForHealthTriggers(float* Percentage);
	void PlayAudio();
	void GetCurrentBehaviorConfig(struct FStruct_BasicBehavior* Config);
	void GetNearestActorWithTag(class AActor** NearestActor);
	void DoRangedAttack(bool* Success);
	void CheckIfAliveIfNPC(class AActor** ActorRef, bool* IsAlive);
	void GetOwningCharacter(class ACharacter** RetCharacter);
	void GetCurrentWorkspace(class ABP_Workspace_C** RetWorkspace);
	void SetCurrentWorkspace(class ABP_Workspace_C** NewWorkspace);
	void IsPlayingAnimation(bool* IsPlaying);
	void PlayAnimation(float* AnimLength);
	void GetCurrentAttackTarget(class AActor** TargetRef);
	void FindAttackTarget(bool* Success);
	void FindSeekTarget();
	void FindNextPatrolLocation();
	void GetCurrentBehaviorType(TEnumAsByte<Enum_BehaviorType>* CurrentBehaviorType);
	void CheckForDistanceTriggers(bool* CheckWithin);
	void ChangeBehavior(TEnumAsByte<Enum_BehaviorType>* NewBehaviorType, bool* StopAnimations);
	void SetDefaults(class AAIController** ControllerIn);
	void ReceiveBeginPlay();
	void OnPerceptionUpdate(class AActor** ActorRef, struct FAIStimulus* StimulusRef);
	void OnDelayTrigger();
	void ReceiveMessageTag(TEnumAsByte<Enum_MessageTag>* MessageTag);
	void OnDeath();
	void ReplicatedAudio(class USoundBase** Audio);
	void ReplicatedAnimation(class UAnimMontage** Anim);
	void OnEndAttack_Event();
	void OnBeginInvestigate_Event();
	void OnBeginIdle_Event();
	void OnStartTalking(class AActor** OtherActor, float* TalkLength, TEnumAsByte<Enum_IdleType>* PrevIdleType);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnStopAnimation();
	void ExecuteUbergraph_BP_BehaviorComponent(int* EntryPoint);
	void OnEndInvestigate__DelegateSignature();
	void OnBeginInvestigate__DelegateSignature();
	void OnEndHit__DelegateSignature();
	void OnBeginHit__DelegateSignature();
	void OnEndDefend__DelegateSignature();
	void OnBeginDefend__DelegateSignature();
	void OnEndAttackRanged__DelegateSignature();
	void OnBeginAttackRanged__DelegateSignature();
	void OnEndAttackMelee__DelegateSignature();
	void OnBeginAttackMelee__DelegateSignature();
	void OnEndSeek__DelegateSignature();
	void OnBeginSeek__DelegateSignature();
	void OnEndPatrol__DelegateSignature();
	void OnBeginPatrol__DelegateSignature();
	void OnEndFlee__DelegateSignature();
	void OnBeginFlee__DelegateSignature();
	void OnEndFollow__DelegateSignature();
	void OnBeginFollow__DelegateSignature();
	void OnEndIdle__DelegateSignature();
	void OnBeginIdle__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

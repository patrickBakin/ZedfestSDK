// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayParkourAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLoc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                WallNormal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Wide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Climb                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::PlayParkourAnim(struct FVector* TargetLoc, struct FVector* WallNormal, bool* Wide, bool* Climb, float* PlayLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayParkourAnim");

	UBP_BehaviorComponent_C_PlayParkourAnim_Params params;
	params.TargetLoc = TargetLoc;
	params.WallNormal = WallNormal;
	params.Wide = Wide;
	params.Climb = Climb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayLength != nullptr)
		*PlayLength = params.PlayLength;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_InvestigateBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_InvestigateBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_HitBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_HitBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_HitBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_HitBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_DefendBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_DefendBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_DefendBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_DefendBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_AttackRangedBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_AttackRangedBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_AttackMeleeBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_AttackMeleeBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_SeekBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_SeekBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_PatrolBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_PatrolBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_PatrolBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_PatrolBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_FleeBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_FleeBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_FollowBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_FollowBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleBehaviorConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_IdleBehaviorConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleBehaviorConfig");

	UBP_BehaviorComponent_C_OnRep_IdleBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetRandomActorWithTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  RandomActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetRandomActorWithTag(class AActor** RandomActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetRandomActorWithTag");

	UBP_BehaviorComponent_C_GetRandomActorWithTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomActor != nullptr)
		*RandomActor = params.RandomActor;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekTarget
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_SeekTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekTarget");

	UBP_BehaviorComponent_C_OnRep_SeekTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekAcceptanceRadius
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_SeekAcceptanceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_SeekAcceptanceRadius");

	UBP_BehaviorComponent_C_OnRep_SeekAcceptanceRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateInterval
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_InvestigateInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateInterval");

	UBP_BehaviorComponent_C_OnRep_InvestigateInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_InvestigateDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_InvestigateDistance");

	UBP_BehaviorComponent_C_OnRep_InvestigateDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackSpeed
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_AttackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackSpeed");

	UBP_BehaviorComponent_C_OnRep_AttackSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_FollowDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FollowDistance");

	UBP_BehaviorComponent_C_OnRep_FollowDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_AttackRangedDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackRangedDistance");

	UBP_BehaviorComponent_C_OnRep_AttackRangedDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_AttackMeleeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_AttackMeleeDistance");

	UBP_BehaviorComponent_C_OnRep_AttackMeleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_FleeDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_FleeDistance");

	UBP_BehaviorComponent_C_OnRep_FleeDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_RandLocationDelay
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_RandLocationDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_RandLocationDelay");

	UBP_BehaviorComponent_C_OnRep_RandLocationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_MaxRandLocationDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_MaxRandLocationDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_MaxRandLocationDistance");

	UBP_BehaviorComponent_C_OnRep_MaxRandLocationDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleType
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnRep_IdleType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnRep_IdleType");

	UBP_BehaviorComponent_C_OnRep_IdleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetEQSContextActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  RetActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetEQSContextActor(class AActor** RetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetEQSContextActor");

	UBP_BehaviorComponent_C_GetEQSContextActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetActor != nullptr)
		*RetActor = params.RetActor;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetBBKeyTargetActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  RetActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetBBKeyTargetActor(class AActor** RetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetBBKeyTargetActor");

	UBP_BehaviorComponent_C_GetBBKeyTargetActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetActor != nullptr)
		*RetActor = params.RetActor;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ResetDelayTrigger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::ResetDelayTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ResetDelayTrigger");

	UBP_BehaviorComponent_C_ResetDelayTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForHealthTriggers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::CheckForHealthTriggers(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForHealthTriggers");

	UBP_BehaviorComponent_C_CheckForHealthTriggers_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAudio");

	UBP_BehaviorComponent_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorConfig
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_BasicBehavior   Config                         (Parm, OutParm)

void UBP_BehaviorComponent_C::GetCurrentBehaviorConfig(struct FStruct_BasicBehavior* Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorConfig");

	UBP_BehaviorComponent_C_GetCurrentBehaviorConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetNearestActorWithTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  NearestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetNearestActorWithTag(class AActor** NearestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetNearestActorWithTag");

	UBP_BehaviorComponent_C_GetNearestActorWithTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestActor != nullptr)
		*NearestActor = params.NearestActor;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.DoRangedAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::DoRangedAttack(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.DoRangedAttack");

	UBP_BehaviorComponent_C_DoRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckIfAliveIfNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAlive                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::CheckIfAliveIfNPC(class AActor** ActorRef, bool* IsAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckIfAliveIfNPC");

	UBP_BehaviorComponent_C_CheckIfAliveIfNPC_Params params;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetOwningCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              RetCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetOwningCharacter(class ACharacter** RetCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetOwningCharacter");

	UBP_BehaviorComponent_C_GetOwningCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetCharacter != nullptr)
		*RetCharacter = params.RetCharacter;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentWorkspace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_Workspace_C*         RetWorkspace                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetCurrentWorkspace(class ABP_Workspace_C** RetWorkspace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentWorkspace");

	UBP_BehaviorComponent_C_GetCurrentWorkspace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetWorkspace != nullptr)
		*RetWorkspace = params.RetWorkspace;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetCurrentWorkspace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Workspace_C**        NewWorkspace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::SetCurrentWorkspace(class ABP_Workspace_C** NewWorkspace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetCurrentWorkspace");

	UBP_BehaviorComponent_C_SetCurrentWorkspace_Params params;
	params.NewWorkspace = NewWorkspace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.IsPlayingAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::IsPlayingAnimation(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.IsPlayingAnimation");

	UBP_BehaviorComponent_C_IsPlayingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimLength                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::PlayAnimation(float* AnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.PlayAnimation");

	UBP_BehaviorComponent_C_PlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimLength != nullptr)
		*AnimLength = params.AnimLength;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentAttackTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  TargetRef                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetCurrentAttackTarget(class AActor** TargetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentAttackTarget");

	UBP_BehaviorComponent_C_GetCurrentAttackTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetRef != nullptr)
		*TargetRef = params.TargetRef;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindAttackTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::FindAttackTarget(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindAttackTarget");

	UBP_BehaviorComponent_C_FindAttackTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindSeekTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::FindSeekTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindSeekTarget");

	UBP_BehaviorComponent_C_FindSeekTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindNextPatrolLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::FindNextPatrolLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.FindNextPatrolLocation");

	UBP_BehaviorComponent_C_FindNextPatrolLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Enum_BehaviorType> CurrentBehaviorType            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::GetCurrentBehaviorType(TEnumAsByte<Enum_BehaviorType>* CurrentBehaviorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.GetCurrentBehaviorType");

	UBP_BehaviorComponent_C_GetCurrentBehaviorType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentBehaviorType != nullptr)
		*CurrentBehaviorType = params.CurrentBehaviorType;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForDistanceTriggers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CheckWithin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::CheckForDistanceTriggers(bool* CheckWithin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.CheckForDistanceTriggers");

	UBP_BehaviorComponent_C_CheckForDistanceTriggers_Params params;
	params.CheckWithin = CheckWithin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ChangeBehavior
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BehaviorType>* NewBehaviorType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StopAnimations                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ChangeBehavior(TEnumAsByte<Enum_BehaviorType>* NewBehaviorType, bool* StopAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ChangeBehavior");

	UBP_BehaviorComponent_C_ChangeBehavior_Params params;
	params.NewBehaviorType = NewBehaviorType;
	params.StopAnimations = StopAnimations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          ControllerIn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::SetDefaults(class AAIController** ControllerIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.SetDefaults");

	UBP_BehaviorComponent_C_SetDefaults_Params params;
	params.ControllerIn = ControllerIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStopAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnStopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStopAnimation");

	UBP_BehaviorComponent_C_OnStopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BehaviorComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveBeginPlay");

	UBP_BehaviorComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnPerceptionUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus*            StimulusRef                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BehaviorComponent_C::OnPerceptionUpdate(class AActor** ActorRef, struct FAIStimulus* StimulusRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnPerceptionUpdate");

	UBP_BehaviorComponent_C_OnPerceptionUpdate_Params params;
	params.ActorRef = ActorRef;
	params.StimulusRef = StimulusRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDelayTrigger
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnDelayTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDelayTrigger");

	UBP_BehaviorComponent_C_OnDelayTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveMessageTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_MessageTag>*  MessageTag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ReceiveMessageTag(TEnumAsByte<Enum_MessageTag>* MessageTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveMessageTag");

	UBP_BehaviorComponent_C_ReceiveMessageTag_Params params;
	params.MessageTag = MessageTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDeath
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnDeath");

	UBP_BehaviorComponent_C_OnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Audio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ReplicatedAudio(class USoundBase** Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAudio");

	UBP_BehaviorComponent_C_ReplicatedAudio_Params params;
	params.Audio = Audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ReplicatedAnimation(class UAnimMontage** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReplicatedAnimation");

	UBP_BehaviorComponent_C_ReplicatedAnimation_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttack_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndAttack_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttack_Event");

	UBP_BehaviorComponent_C_OnEndAttack_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginInvestigate_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate_Event");

	UBP_BehaviorComponent_C_OnBeginInvestigate_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginIdle_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle_Event");

	UBP_BehaviorComponent_C_OnBeginIdle_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStartTalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TalkLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_IdleType>*    PrevIdleType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::OnStartTalking(class AActor** OtherActor, float* TalkLength, TEnumAsByte<Enum_IdleType>* PrevIdleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnStartTalking");

	UBP_BehaviorComponent_C_OnStartTalking_Params params;
	params.OtherActor = OtherActor;
	params.TalkLength = TalkLength;
	params.PrevIdleType = PrevIdleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ReceiveEndPlay");

	UBP_BehaviorComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.ExecuteUbergraph_BP_BehaviorComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BehaviorComponent_C::ExecuteUbergraph_BP_BehaviorComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.ExecuteUbergraph_BP_BehaviorComponent");

	UBP_BehaviorComponent_C_ExecuteUbergraph_BP_BehaviorComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndInvestigate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndInvestigate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndInvestigate__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndInvestigate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginInvestigate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginInvestigate__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginInvestigate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndHit__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginHit__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndDefend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndDefend__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndDefend__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndDefend__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginDefend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginDefend__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginDefend__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginDefend__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackRanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackRanged__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackRanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackRanged__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackMelee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndAttackMelee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndAttackMelee__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndAttackMelee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackMelee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginAttackMelee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginAttackMelee__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginAttackMelee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndSeek__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndSeek__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndSeek__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndSeek__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginSeek__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginSeek__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginSeek__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginSeek__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndPatrol__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndPatrol__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndPatrol__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndPatrol__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginPatrol__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginPatrol__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginPatrol__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginPatrol__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFlee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndFlee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFlee__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndFlee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFlee__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginFlee__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFlee__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginFlee__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFollow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndFollow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndFollow__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndFollow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFollow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginFollow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginFollow__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginFollow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndIdle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnEndIdle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnEndIdle__DelegateSignature");

	UBP_BehaviorComponent_C_OnEndIdle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_BehaviorComponent_C::OnBeginIdle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BehaviorComponent.BP_BehaviorComponent_C.OnBeginIdle__DelegateSignature");

	UBP_BehaviorComponent_C_OnBeginIdle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

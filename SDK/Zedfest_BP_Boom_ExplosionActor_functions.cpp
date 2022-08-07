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

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetStuck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stuck_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::GetStuck(bool* Stuck_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetStuck");

	ABP_Boom_ExplosionActor_C_GetStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stuck_ != nullptr)
		*Stuck_ = params.Stuck_;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GetState                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::GetState(bool* GetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetState");

	ABP_Boom_ExplosionActor_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GetState != nullptr)
		*GetState = params.GetState;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.AdjustRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::AdjustRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.AdjustRotation");

	ABP_Boom_ExplosionActor_C_AdjustRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.RunHitDetection
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::RunHitDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.RunHitDetection");

	ABP_Boom_ExplosionActor_C_RunHitDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SpawnClusters
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::SpawnClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SpawnClusters");

	ABP_Boom_ExplosionActor_C_SpawnClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ArmExplosive
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ArmExplosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ArmExplosive");

	ABP_Boom_ExplosionActor_C_ArmExplosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetHitResults
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          IsSimple                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percentile                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::GetHitResults(bool* IsSimple, TArray<struct FVector>* Array, bool* Successful, float* Percentile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetHitResults");

	ABP_Boom_ExplosionActor_C_GetHitResults_Params params;
	params.IsSimple = IsSimple;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Successful != nullptr)
		*Successful = params.Successful;
	if (Percentile != nullptr)
		*Percentile = params.Percentile;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Simple
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitMade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ObstructionCheck_Simple(class AActor** TargetActor, bool* HitMade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Simple");

	ABP_Boom_ExplosionActor_C_ObstructionCheck_Simple_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitMade != nullptr)
		*HitMade = params.HitMade;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Bones
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSimpleTrace                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitMade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percentile                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ObstructionCheck_Bones(class AActor** TargetActor, bool* IsSimpleTrace, bool* HitMade, float* Percentile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Bones");

	ABP_Boom_ExplosionActor_C_ObstructionCheck_Bones_Params params;
	params.TargetActor = TargetActor;
	params.IsSimpleTrace = IsSimpleTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitMade != nullptr)
		*HitMade = params.HitMade;
	if (Percentile != nullptr)
		*Percentile = params.Percentile;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-SevenPoint
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSimpleTrace                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitMade                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Percentile                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ObstructionCheck_SevenPoint(class AActor** TargetActor, bool* IsSimpleTrace, bool* HitMade, float* Percentile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-SevenPoint");

	ABP_Boom_ExplosionActor_C_ObstructionCheck_SevenPoint_Params params;
	params.TargetActor = TargetActor;
	params.IsSimpleTrace = IsSimpleTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitMade != nullptr)
		*HitMade = params.HitMade;
	if (Percentile != nullptr)
		*Percentile = params.Percentile;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessHit
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ProcessHit(class AActor** ActorHit, struct FVector* HitLocation, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessHit");

	ABP_Boom_ExplosionActor_C_ProcessHit_Params params;
	params.ActorHit = ActorHit;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetStickyObject
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::SetStickyObject(class AActor** Actor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetStickyObject");

	ABP_Boom_ExplosionActor_C_SetStickyObject_Params params;
	params.Actor = Actor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.InitializeProjectile
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::InitializeProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.InitializeProjectile");

	ABP_Boom_ExplosionActor_C_InitializeProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateProxyTrigger
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ActivateProxyTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateProxyTrigger");

	ABP_Boom_ExplosionActor_C_ActivateProxyTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessProxyTrigger
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 OverlappingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceExplosion                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ProcessProxyTrigger(class AActor** OverlappingActor, bool* ForceExplosion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessProxyTrigger");

	ABP_Boom_ExplosionActor_C_ProcessProxyTrigger_Params params;
	params.OverlappingActor = OverlappingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForceExplosion != nullptr)
		*ForceExplosion = params.ForceExplosion;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.CheckOwnerProximity
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::CheckOwnerProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.CheckOwnerProximity");

	ABP_Boom_ExplosionActor_C_CheckOwnerProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetAdjustedDamage
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Boom_ExplosionActor_C::GetAdjustedDamage(class AActor** Actor, float* HitPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetAdjustedDamage");

	ABP_Boom_ExplosionActor_C_GetAdjustedDamage_Params params;
	params.Actor = Actor;
	params.HitPercent = HitPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageSounds
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             NewSound                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FadeOut_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FadeIn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation**      Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ManageSounds(class USoundBase** NewSound, bool* FadeOut_, bool* FadeIn_, class USoundAttenuation** Attenuation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageSounds");

	ABP_Boom_ExplosionActor_C_ManageSounds_Params params;
	params.NewSound = NewSound;
	params.FadeOut_ = FadeOut_;
	params.FadeIn_ = FadeIn_;
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetMassImpact
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Boom_ExplosionActor_C::GetMassImpact(class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetMassImpact");

	ABP_Boom_ExplosionActor_C_GetMassImpact_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetExplosionForce
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Boom_ExplosionActor_C::GetExplosionForce(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetExplosionForce");

	ABP_Boom_ExplosionActor_C_GetExplosionForce_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActorDelayed
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ExplodeActorDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActorDelayed");

	ABP_Boom_ExplosionActor_C_ExplodeActorDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SelfDamageLoop
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::SelfDamageLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SelfDamageLoop");

	ABP_Boom_ExplosionActor_C_SelfDamageLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageParticles
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        ParticleEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DelayParticle_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ManageParticles(class UParticleSystem** ParticleEffect, bool* DelayParticle_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageParticles");

	ABP_Boom_ExplosionActor_C_ManageParticles_Params params;
	params.ParticleEffect = ParticleEffect;
	params.DelayParticle_ = DelayParticle_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ExplodeActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActor");

	ABP_Boom_ExplosionActor_C_ExplodeActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DamageActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::DamageActor(float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DamageActor");

	ABP_Boom_ExplosionActor_C_DamageActor_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.UserConstructionScript");

	ABP_Boom_ExplosionActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateParticles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        ParticleEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DelayParticle_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ManipulateParticles(class UParticleSystem** ParticleEffect, bool* DelayParticle_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateParticles");

	ABP_Boom_ExplosionActor_C_ManipulateParticles_Params params;
	params.ParticleEffect = ParticleEffect;
	params.DelayParticle_ = DelayParticle_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateSounds
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             NewSound                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FadeOut_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FadeIn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation**      Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ManipulateSounds(class USoundBase** NewSound, bool* FadeOut_, bool* FadeIn_, class USoundAttenuation** Attenuation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateSounds");

	ABP_Boom_ExplosionActor_C_ManipulateSounds_Params params;
	params.NewSound = NewSound;
	params.FadeOut_ = FadeOut_;
	params.FadeIn_ = FadeIn_;
	params.Attenuation = Attenuation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveEndPlay");

	ABP_Boom_ExplosionActor_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveBeginPlay");

	ABP_Boom_ExplosionActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ForceTrigger
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ForceTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ForceTrigger");

	ABP_Boom_ExplosionActor_C_ForceTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveHit");

	ABP_Boom_ExplosionActor_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateSticky
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ParentActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ActivateSticky(class AActor** ParentActor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateSticky");

	ABP_Boom_ExplosionActor_C_ActivateSticky_Params params;
	params.ParentActor = ParentActor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetOwningPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::SetOwningPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetOwningPawn");

	ABP_Boom_ExplosionActor_C_SetOwningPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveTick");

	ABP_Boom_ExplosionActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelBody
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::PropelBody(class UPrimitiveComponent** Target, struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelBody");

	ABP_Boom_ExplosionActor_C_PropelBody_Params params;
	params.Target = Target;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter**             Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LaunchVelocity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::PropelCharacter(class ACharacter** Character, struct FVector* LaunchVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelCharacter");

	ABP_Boom_ExplosionActor_C_PropelCharacter_Params params;
	params.Character = Character;
	params.LaunchVelocity = LaunchVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosionEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::ExplosionEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosionEffects");

	ABP_Boom_ExplosionActor_C_ExplosionEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Boom_ExplosionActor_C_BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveAnyDamage");

	ABP_Boom_ExplosionActor_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosiveActorDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BaseDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ExplosiveActorDamage(float* BaseDamage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** DamageTypeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosiveActorDamage");

	ABP_Boom_ExplosionActor_C_ExplosiveActorDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTypeClass = DamageTypeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DelayExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Boom_ExplosionActor_C::DelayExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DelayExplosion");

	ABP_Boom_ExplosionActor_C_DelayExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExecuteUbergraph_BP_Boom_ExplosionActor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_C::ExecuteUbergraph_BP_Boom_ExplosionActor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExecuteUbergraph_BP_Boom_ExplosionActor");

	ABP_Boom_ExplosionActor_C_ExecuteUbergraph_BP_Boom_ExplosionActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

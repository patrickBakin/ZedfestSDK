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

// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.UserConstructionScript");

	ABP_NPC_PatrolRouteObjective_3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PerformSpecialDamage");

	ABP_NPC_PatrolRouteObjective_3_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnMeleeAttack");

	ABP_NPC_PatrolRouteObjective_3_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_PatrolRouteObjective_3_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnDeath");

	ABP_NPC_PatrolRouteObjective_3_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.ReceiveBeginPlay");

	ABP_NPC_PatrolRouteObjective_3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PerformSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::PerformSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PerformSpecialDamage2");

	ABP_NPC_PatrolRouteObjective_3_C_PerformSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_NPC_PatrolRouteObjective_3_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_NPC_PatrolRouteObjective_3_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::OnDamaged(float* Damage, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.OnDamaged");

	ABP_NPC_PatrolRouteObjective_3_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.StartScreenIndicatorNPC_Obj3
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::StartScreenIndicatorNPC_Obj3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.StartScreenIndicatorNPC_Obj3");

	ABP_NPC_PatrolRouteObjective_3_C_StartScreenIndicatorNPC_Obj3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.NpcObj3Suicide
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::NpcObj3Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.NpcObj3Suicide");

	ABP_NPC_PatrolRouteObjective_3_C_NpcObj3Suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.SuicideVfx
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::SuicideVfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.SuicideVfx");

	ABP_NPC_PatrolRouteObjective_3_C_SuicideVfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PlayEscortPunchSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_PatrolRouteObjective_3_C::PlayEscortPunchSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.PlayEscortPunchSound");

	ABP_NPC_PatrolRouteObjective_3_C_PlayEscortPunchSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.ExecuteUbergraph_BP_NPC_PatrolRouteObjective_4
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_PatrolRouteObjective_3_C::ExecuteUbergraph_BP_NPC_PatrolRouteObjective_4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C.ExecuteUbergraph_BP_NPC_PatrolRouteObjective_4");

	ABP_NPC_PatrolRouteObjective_3_C_ExecuteUbergraph_BP_NPC_PatrolRouteObjective_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

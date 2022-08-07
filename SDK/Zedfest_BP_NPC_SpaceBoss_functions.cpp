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

// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.UserConstructionScript");

	ABP_NPC_SpaceBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_SpaceBoss_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__FinishedFunc");

	ABP_NPC_SpaceBoss_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_SpaceBoss_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_0__UpdateFunc");

	ABP_NPC_SpaceBoss_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_SpaceBoss_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__FinishedFunc");

	ABP_NPC_SpaceBoss_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_SpaceBoss_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Timeline_1__UpdateFunc");

	ABP_NPC_SpaceBoss_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveBeginPlay");

	ABP_NPC_SpaceBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDeath");

	ABP_NPC_SpaceBoss_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_SpaceBoss_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_SpaceBoss_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnMeleeAttack");

	ABP_NPC_SpaceBoss_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ReceiveTick");

	ABP_NPC_SpaceBoss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage");

	ABP_NPC_SpaceBoss_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::PerformSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage2");

	ABP_NPC_SpaceBoss_C_PerformSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage3
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::PerformSpecialDamage3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage3");

	ABP_NPC_SpaceBoss_C_PerformSpecialDamage3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DashTimerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::DashTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DashTimerEvent");

	ABP_NPC_SpaceBoss_C_DashTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage4
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::PerformSpecialDamage4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.PerformSpecialDamage4");

	ABP_NPC_SpaceBoss_C_PerformSpecialDamage4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_NPC_SpaceBoss_C_BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StompGroundEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::StompGroundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StompGroundEvent");

	ABP_NPC_SpaceBoss_C_StompGroundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Boss25%Event
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  BossQuote                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NPC_SpaceBoss_C::Boss25_Event(struct FText* BossQuote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.Boss25%Event");

	ABP_NPC_SpaceBoss_C_Boss25_Event_Params params;
	params.BossQuote = BossQuote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::OnDamaged(float* Damage, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.OnDamaged");

	ABP_NPC_SpaceBoss_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DeluxeShieldUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Up_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::DeluxeShieldUp(bool* Up_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.DeluxeShieldUp");

	ABP_NPC_SpaceBoss_C_DeluxeShieldUp_Params params;
	params.Up_ = Up_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StopDeluxeShieldEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::StopDeluxeShieldEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.StopDeluxeShieldEvent");

	ABP_NPC_SpaceBoss_C_StopDeluxeShieldEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.CustomEvent_1");

	ABP_NPC_SpaceBoss_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.RivianFrontJumpEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_NPC_SpaceBoss_C::RivianFrontJumpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.RivianFrontJumpEvent");

	ABP_NPC_SpaceBoss_C_RivianFrontJumpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.EnragedMaterialEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enrage_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::EnragedMaterialEvent(bool* Enrage_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.EnragedMaterialEvent");

	ABP_NPC_SpaceBoss_C_EnragedMaterialEvent_Params params;
	params.Enrage_ = Enrage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ExecuteUbergraph_BP_NPC_SpaceBoss
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_SpaceBoss_C::ExecuteUbergraph_BP_NPC_SpaceBoss(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C.ExecuteUbergraph_BP_NPC_SpaceBoss");

	ABP_NPC_SpaceBoss_C_ExecuteUbergraph_BP_NPC_SpaceBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

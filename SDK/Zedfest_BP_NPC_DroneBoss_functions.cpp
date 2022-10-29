// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_DroneBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.UserConstructionScript");

	ABP_NPC_DroneBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_DroneBoss_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__FinishedFunc");

	ABP_NPC_DroneBoss_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_DroneBoss_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_0__UpdateFunc");

	ABP_NPC_DroneBoss_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_NPC_DroneBoss_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__FinishedFunc");

	ABP_NPC_DroneBoss_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_NPC_DroneBoss_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Timeline_1__UpdateFunc");

	ABP_NPC_DroneBoss_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_DroneBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveBeginPlay");

	ABP_NPC_DroneBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDeath");

	ABP_NPC_DroneBoss_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_DroneBoss_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_DroneBoss_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnMeleeAttack");

	ABP_NPC_DroneBoss_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::OnDamaged(float* Damage, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.OnDamaged");

	ABP_NPC_DroneBoss_C_OnDamaged_Params params;
	params.Damage = Damage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ReceiveTick");

	ABP_NPC_DroneBoss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_DroneBoss_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.PerformSpecialDamage");

	ABP_NPC_DroneBoss_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Boss25%Event
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  BossQuote                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_NPC_DroneBoss_C::Boss25_Event(struct FText* BossQuote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.Boss25%Event");

	ABP_NPC_DroneBoss_C_Boss25_Event_Params params;
	params.BossQuote = BossQuote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.DispenserArcEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_DroneBoss_C::DispenserArcEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.DispenserArcEvent");

	ABP_NPC_DroneBoss_C_DispenserArcEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.AndroidShieldUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Up_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::AndroidShieldUp(bool* Up_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.AndroidShieldUp");

	ABP_NPC_DroneBoss_C_AndroidShieldUp_Params params;
	params.Up_ = Up_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.HurtGlitchFaceEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_DroneBoss_C::HurtGlitchFaceEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.HurtGlitchFaceEvent");

	ABP_NPC_DroneBoss_C_HurtGlitchFaceEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ExecuteUbergraph_BP_NPC_DroneBoss
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_DroneBoss_C::ExecuteUbergraph_BP_NPC_DroneBoss(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_DroneBoss.BP_NPC_DroneBoss_C.ExecuteUbergraph_BP_NPC_DroneBoss");

	ABP_NPC_DroneBoss_C_ExecuteUbergraph_BP_NPC_DroneBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

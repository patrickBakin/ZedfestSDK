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

// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_NPC_Fleshman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.UserConstructionScript");

	ABP_NPC_Fleshman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_Fleshman_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ReceiveBeginPlay");

	ABP_NPC_Fleshman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Fleshman_C::PerformSpecialDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage");

	ABP_NPC_Fleshman_C_PerformSpecialDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HitSuccess                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                HitCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Fleshman_C::OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnMeleeAttack");

	ABP_NPC_Fleshman_C_OnMeleeAttack_Params params;
	params.HitSuccess = HitSuccess;
	params.HitCharacter = HitCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Fleshman_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.OnDeath");

	ABP_NPC_Fleshman_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage2
// (BlueprintCallable, BlueprintEvent)

void ABP_NPC_Fleshman_C::PerformSpecialDamage2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.PerformSpecialDamage2");

	ABP_NPC_Fleshman_C_PerformSpecialDamage2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_Fleshman_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_Fleshman_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ExecuteUbergraph_BP_NPC_Fleshman
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_Fleshman_C::ExecuteUbergraph_BP_NPC_Fleshman(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_Fleshman.BP_NPC_Fleshman_C.ExecuteUbergraph_BP_NPC_Fleshman");

	ABP_NPC_Fleshman_C_ExecuteUbergraph_BP_NPC_Fleshman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

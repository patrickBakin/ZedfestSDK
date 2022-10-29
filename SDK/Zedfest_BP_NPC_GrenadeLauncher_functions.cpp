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

// Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Head_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_GrenadeLauncher_C::OnDeath(bool* Head_, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.OnDeath");

	ABP_NPC_GrenadeLauncher_C_OnDeath_Params params;
	params.Head_ = Head_;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_NPC_GrenadeLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.ReceiveBeginPlay");

	ABP_NPC_GrenadeLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature
// (BlueprintEvent)

void ABP_NPC_GrenadeLauncher_C::BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature");

	ABP_NPC_GrenadeLauncher_C_BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.ExecuteUbergraph_BP_NPC_GrenadeLauncher
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_NPC_GrenadeLauncher_C::ExecuteUbergraph_BP_NPC_GrenadeLauncher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_GrenadeLauncher.BP_NPC_GrenadeLauncher_C.ExecuteUbergraph_BP_NPC_GrenadeLauncher");

	ABP_NPC_GrenadeLauncher_C_ExecuteUbergraph_BP_NPC_GrenadeLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

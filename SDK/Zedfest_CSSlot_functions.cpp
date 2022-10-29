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

// Function CSSlot.CSSlot_C.OnRep_Timer Elapsed to Upgrade
// (BlueprintCallable, BlueprintEvent)

void ACSSlot_C::OnRep_Timer_Elapsed_to_Upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.OnRep_Timer Elapsed to Upgrade");

	ACSSlot_C_OnRep_Timer_Elapsed_to_Upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.Start Timer to Upgrade
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACSSlot_C::Start_Timer_to_Upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.Start Timer to Upgrade");

	ACSSlot_C_Start_Timer_to_Upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.SpawnWeaponUpgraded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACSSlot_C::SpawnWeaponUpgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.SpawnWeaponUpgraded");

	ACSSlot_C_SpawnWeaponUpgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACSSlot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.ReceiveBeginPlay");

	ACSSlot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACSSlot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.ReceiveTick");

	ACSSlot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.MultiCast Reset Slot Percent
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACSSlot_C::MultiCast_Reset_Slot_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.MultiCast Reset Slot Percent");

	ACSSlot_C_MultiCast_Reset_Slot_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CSSlot.CSSlot_C.ExecuteUbergraph_CSSlot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACSSlot_C::ExecuteUbergraph_CSSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CSSlot.CSSlot_C.ExecuteUbergraph_CSSlot");

	ACSSlot_C_ExecuteUbergraph_CSSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

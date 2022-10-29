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

// Function PickupAmmo.PickupAmmo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupAmmo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupAmmo.PickupAmmo_C.UserConstructionScript");

	APickupAmmo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupAmmo.PickupAmmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupAmmo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupAmmo.PickupAmmo_C.ReceiveBeginPlay");

	APickupAmmo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupAmmo.PickupAmmo_C.ExecuteUbergraph_PickupAmmo
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupAmmo_C::ExecuteUbergraph_PickupAmmo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupAmmo.PickupAmmo_C.ExecuteUbergraph_PickupAmmo");

	APickupAmmo_C_ExecuteUbergraph_PickupAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

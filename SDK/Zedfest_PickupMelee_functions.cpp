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

// Function PickupMelee.PickupMelee_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupMelee_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMelee.PickupMelee_C.UserConstructionScript");

	APickupMelee_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMelee.PickupMelee_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupMelee_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMelee.PickupMelee_C.ReceiveBeginPlay");

	APickupMelee_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupMelee.PickupMelee_C.ExecuteUbergraph_PickupMelee
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupMelee_C::ExecuteUbergraph_PickupMelee(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupMelee.PickupMelee_C.ExecuteUbergraph_PickupMelee");

	APickupMelee_C_ExecuteUbergraph_PickupMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

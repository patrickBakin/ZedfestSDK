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

// Function PickupThrowables.PickupThrowables_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupThrowables_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupThrowables.PickupThrowables_C.UserConstructionScript");

	APickupThrowables_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupThrowables.PickupThrowables_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupThrowables_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupThrowables.PickupThrowables_C.ReceiveBeginPlay");

	APickupThrowables_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupThrowables.PickupThrowables_C.ExecuteUbergraph_PickupThrowables
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupThrowables_C::ExecuteUbergraph_PickupThrowables(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupThrowables.PickupThrowables_C.ExecuteUbergraph_PickupThrowables");

	APickupThrowables_C_ExecuteUbergraph_PickupThrowables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

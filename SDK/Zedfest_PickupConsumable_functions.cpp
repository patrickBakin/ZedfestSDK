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

// Function PickupConsumable.PickupConsumable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupConsumable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupConsumable.PickupConsumable_C.UserConstructionScript");

	APickupConsumable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupConsumable.PickupConsumable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupConsumable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupConsumable.PickupConsumable_C.ReceiveBeginPlay");

	APickupConsumable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupConsumable.PickupConsumable_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupConsumable_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupConsumable.PickupConsumable_C.ReceiveActorBeginOverlap");

	APickupConsumable_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupConsumable.PickupConsumable_C.ExecuteUbergraph_PickupConsumable
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupConsumable_C::ExecuteUbergraph_PickupConsumable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupConsumable.PickupConsumable_C.ExecuteUbergraph_PickupConsumable");

	APickupConsumable_C_ExecuteUbergraph_PickupConsumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

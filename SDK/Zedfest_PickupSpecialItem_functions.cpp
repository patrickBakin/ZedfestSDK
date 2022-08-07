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

// Function PickupSpecialItem.PickupSpecialItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APickupSpecialItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupSpecialItem.PickupSpecialItem_C.UserConstructionScript");

	APickupSpecialItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupSpecialItem.PickupSpecialItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APickupSpecialItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupSpecialItem.PickupSpecialItem_C.ReceiveBeginPlay");

	APickupSpecialItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupSpecialItem.PickupSpecialItem_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupSpecialItem_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupSpecialItem.PickupSpecialItem_C.ReceiveActorBeginOverlap");

	APickupSpecialItem_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupSpecialItem.PickupSpecialItem_C.ExecuteUbergraph_PickupSpecialItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APickupSpecialItem_C::ExecuteUbergraph_PickupSpecialItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupSpecialItem.PickupSpecialItem_C.ExecuteUbergraph_PickupSpecialItem");

	APickupSpecialItem_C_ExecuteUbergraph_PickupSpecialItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

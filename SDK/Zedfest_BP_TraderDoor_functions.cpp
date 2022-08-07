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

// Function BP_TraderDoor.BP_TraderDoor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_TraderDoor_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraderDoor.BP_TraderDoor_C.Timeline_0__FinishedFunc");

	ABP_TraderDoor_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraderDoor.BP_TraderDoor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_TraderDoor_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraderDoor.BP_TraderDoor_C.Timeline_0__UpdateFunc");

	ABP_TraderDoor_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraderDoor.BP_TraderDoor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TraderDoor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraderDoor.BP_TraderDoor_C.ReceiveBeginPlay");

	ABP_TraderDoor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraderDoor.BP_TraderDoor_C.TraderdoorEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Internmission                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraderDoor_C::TraderdoorEvent(bool* Internmission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraderDoor.BP_TraderDoor_C.TraderdoorEvent");

	ABP_TraderDoor_C_TraderdoorEvent_Params params;
	params.Internmission = Internmission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TraderDoor.BP_TraderDoor_C.ExecuteUbergraph_BP_TraderDoor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TraderDoor_C::ExecuteUbergraph_BP_TraderDoor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TraderDoor.BP_TraderDoor_C.ExecuteUbergraph_BP_TraderDoor");

	ABP_TraderDoor_C_ExecuteUbergraph_BP_TraderDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

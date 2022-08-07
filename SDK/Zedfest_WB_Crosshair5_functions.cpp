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

// Function WB_Crosshair5.WB_Crosshair5_C.DisplayRecoil
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair5_C::DisplayRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair5.WB_Crosshair5_C.DisplayRecoil");

	UWB_Crosshair5_C_DisplayRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair5.WB_Crosshair5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Crosshair5_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair5.WB_Crosshair5_C.Construct");

	UWB_Crosshair5_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair5.WB_Crosshair5_C.SingleRecoil_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair5_C::SingleRecoil_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair5.WB_Crosshair5_C.SingleRecoil_Event_1");

	UWB_Crosshair5_C_SingleRecoil_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair5.WB_Crosshair5_C.ExecuteUbergraph_WB_Crosshair5
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Crosshair5_C::ExecuteUbergraph_WB_Crosshair5(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair5.WB_Crosshair5_C.ExecuteUbergraph_WB_Crosshair5");

	UWB_Crosshair5_C_ExecuteUbergraph_WB_Crosshair5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

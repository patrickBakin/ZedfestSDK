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

// Function WB_Crosshair8.WB_Crosshair8_C.DisplayRecoil
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair8_C::DisplayRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair8.WB_Crosshair8_C.DisplayRecoil");

	UWB_Crosshair8_C_DisplayRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair8.WB_Crosshair8_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Crosshair8_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair8.WB_Crosshair8_C.Construct");

	UWB_Crosshair8_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair8.WB_Crosshair8_C.SingleRecoil_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair8_C::SingleRecoil_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair8.WB_Crosshair8_C.SingleRecoil_Event_1");

	UWB_Crosshair8_C_SingleRecoil_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair8.WB_Crosshair8_C.ExecuteUbergraph_WB_Crosshair8
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Crosshair8_C::ExecuteUbergraph_WB_Crosshair8(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair8.WB_Crosshair8_C.ExecuteUbergraph_WB_Crosshair8");

	UWB_Crosshair8_C_ExecuteUbergraph_WB_Crosshair8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

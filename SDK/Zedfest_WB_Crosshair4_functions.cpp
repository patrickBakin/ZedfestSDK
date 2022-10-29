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

// Function WB_Crosshair4.WB_Crosshair4_C.DisplayRecoil
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair4_C::DisplayRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair4.WB_Crosshair4_C.DisplayRecoil");

	UWB_Crosshair4_C_DisplayRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair4.WB_Crosshair4_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Crosshair4_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair4.WB_Crosshair4_C.Construct");

	UWB_Crosshair4_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair4.WB_Crosshair4_C.SingleRecoil_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWB_Crosshair4_C::SingleRecoil_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair4.WB_Crosshair4_C.SingleRecoil_Event_1");

	UWB_Crosshair4_C_SingleRecoil_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Crosshair4.WB_Crosshair4_C.ExecuteUbergraph_WB_Crosshair4
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Crosshair4_C::ExecuteUbergraph_WB_Crosshair4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Crosshair4.WB_Crosshair4_C.ExecuteUbergraph_WB_Crosshair4");

	UWB_Crosshair4_C_ExecuteUbergraph_WB_Crosshair4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

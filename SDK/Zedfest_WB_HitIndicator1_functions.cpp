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

// Function WB_HitIndicator1.WB_HitIndicator1_C.RemoveHitIndication
// (BlueprintCallable, BlueprintEvent)

void UWB_HitIndicator1_C::RemoveHitIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator1.WB_HitIndicator1_C.RemoveHitIndication");

	UWB_HitIndicator1_C_RemoveHitIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator1.WB_HitIndicator1_C.AddHitIndication
// (BlueprintCallable, BlueprintEvent)

void UWB_HitIndicator1_C::AddHitIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator1.WB_HitIndicator1_C.AddHitIndication");

	UWB_HitIndicator1_C_AddHitIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator1.WB_HitIndicator1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_HitIndicator1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator1.WB_HitIndicator1_C.Construct");

	UWB_HitIndicator1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator1.WB_HitIndicator1_C.ExecuteUbergraph_WB_HitIndicator1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_HitIndicator1_C::ExecuteUbergraph_WB_HitIndicator1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator1.WB_HitIndicator1_C.ExecuteUbergraph_WB_HitIndicator1");

	UWB_HitIndicator1_C_ExecuteUbergraph_WB_HitIndicator1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WB_HitIndicator2.WB_HitIndicator2_C.RemoveHitIndication
// (BlueprintCallable, BlueprintEvent)

void UWB_HitIndicator2_C::RemoveHitIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator2.WB_HitIndicator2_C.RemoveHitIndication");

	UWB_HitIndicator2_C_RemoveHitIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator2.WB_HitIndicator2_C.AddHitIndication
// (BlueprintCallable, BlueprintEvent)

void UWB_HitIndicator2_C::AddHitIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator2.WB_HitIndicator2_C.AddHitIndication");

	UWB_HitIndicator2_C_AddHitIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator2.WB_HitIndicator2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_HitIndicator2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator2.WB_HitIndicator2_C.Construct");

	UWB_HitIndicator2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_HitIndicator2.WB_HitIndicator2_C.ExecuteUbergraph_WB_HitIndicator2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_HitIndicator2_C::ExecuteUbergraph_WB_HitIndicator2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_HitIndicator2.WB_HitIndicator2_C.ExecuteUbergraph_WB_HitIndicator2");

	UWB_HitIndicator2_C_ExecuteUbergraph_WB_HitIndicator2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

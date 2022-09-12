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

// Function FadeOut.FadeOut_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFadeOut_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeOut.FadeOut_C.Construct");

	UFadeOut_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeOut.FadeOut_C.OnAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UFadeOut_C::OnAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeOut.FadeOut_C.OnAnimFinish");

	UFadeOut_C_OnAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeOut.FadeOut_C.ExecuteUbergraph_FadeOut
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFadeOut_C::ExecuteUbergraph_FadeOut(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeOut.FadeOut_C.ExecuteUbergraph_FadeOut");

	UFadeOut_C_ExecuteUbergraph_FadeOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeOut.FadeOut_C.FadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFadeOut_C::FadeOutFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeOut.FadeOut_C.FadeOutFinished__DelegateSignature");

	UFadeOut_C_FadeOutFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

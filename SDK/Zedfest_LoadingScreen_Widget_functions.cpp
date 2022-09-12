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

// Function LoadingScreen_Widget.LoadingScreen_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingScreen_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen_Widget.LoadingScreen_Widget_C.Construct");

	ULoadingScreen_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadingScreen_Widget.LoadingScreen_Widget_C.ExecuteUbergraph_LoadingScreen_Widget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadingScreen_Widget_C::ExecuteUbergraph_LoadingScreen_Widget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadingScreen_Widget.LoadingScreen_Widget_C.ExecuteUbergraph_LoadingScreen_Widget");

	ULoadingScreen_Widget_C_ExecuteUbergraph_LoadingScreen_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

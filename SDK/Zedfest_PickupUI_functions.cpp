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

// Function PickupUI.PickupUI_C.Set Pickup Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPickupUI_C::Set_Pickup_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupUI.PickupUI_C.Set Pickup Visibility");

	UPickupUI_C_Set_Pickup_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PickupUI.PickupUI_C.ExecuteUbergraph_PickupUI
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupUI_C::ExecuteUbergraph_PickupUI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupUI.PickupUI_C.ExecuteUbergraph_PickupUI");

	UPickupUI_C_ExecuteUbergraph_PickupUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

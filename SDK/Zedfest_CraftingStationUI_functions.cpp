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

// Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCraftingStationUI_C::Set_Progress_Bar_UI_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Visibility");

	UCraftingStationUI_C_Set_Progress_Bar_UI_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCraftingStationUI_C::Set_Progress_Bar_UI_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Percent");

	UCraftingStationUI_C_Set_Progress_Bar_UI_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingStationUI.CraftingStationUI_C.Set Crafting Station UI Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCraftingStationUI_C::Set_Crafting_Station_UI_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingStationUI.CraftingStationUI_C.Set Crafting Station UI Visibility");

	UCraftingStationUI_C_Set_Crafting_Station_UI_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

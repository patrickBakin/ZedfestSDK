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

// Function HUDSlotBar.HUDSlotBar_C.Get Background
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUDSlotBar_C::Get_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Get Background");

	UHUDSlotBar_C_Get_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBar.HUDSlotBar_C.Get Rarity Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHUDSlotBar_C::Get_Rarity_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Get Rarity Color");

	UHUDSlotBar_C_Get_Rarity_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBar.HUDSlotBar_C.Get Selection UI
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUDSlotBar_C::Get_Selection_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Get Selection UI");

	UHUDSlotBar_C_Get_Selection_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBar.HUDSlotBar_C.Get Item Amount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUDSlotBar_C::Get_Item_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Get Item Amount");

	UHUDSlotBar_C_Get_Item_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBar.HUDSlotBar_C.Get Item Icon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UHUDSlotBar_C::Get_Item_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Get Item Icon");

	UHUDSlotBar_C_Get_Item_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBar.HUDSlotBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDSlotBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.Construct");

	UHUDSlotBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDSlotBar.HUDSlotBar_C.KeyVisibilityEvent
// (BlueprintCallable, BlueprintEvent)

void UHUDSlotBar_C::KeyVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.KeyVisibilityEvent");

	UHUDSlotBar_C_KeyVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDSlotBar.HUDSlotBar_C.ExecuteUbergraph_HUDSlotBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDSlotBar_C::ExecuteUbergraph_HUDSlotBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBar.HUDSlotBar_C.ExecuteUbergraph_HUDSlotBar");

	UHUDSlotBar_C_ExecuteUbergraph_HUDSlotBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

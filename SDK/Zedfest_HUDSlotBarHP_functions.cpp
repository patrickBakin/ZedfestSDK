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

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Background
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUDSlotBarHP_C::Get_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Get Background");

	UHUDSlotBarHP_C_Get_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Rarity Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHUDSlotBarHP_C::Get_Rarity_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Get Rarity Color");

	UHUDSlotBarHP_C_Get_Rarity_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Selection UI
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUDSlotBarHP_C::Get_Selection_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Get Selection UI");

	UHUDSlotBarHP_C_Get_Selection_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Amount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUDSlotBarHP_C::Get_Item_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Amount");

	UHUDSlotBarHP_C_Get_Item_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Icon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UHUDSlotBarHP_C::Get_Item_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Icon");

	UHUDSlotBarHP_C_Get_Item_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDSlotBarHP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.Construct");

	UHUDSlotBarHP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.KeyVisibilityEvent
// (BlueprintCallable, BlueprintEvent)

void UHUDSlotBarHP_C::KeyVisibilityEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.KeyVisibilityEvent");

	UHUDSlotBarHP_C_KeyVisibilityEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDSlotBarHP.HUDSlotBarHP_C.ExecuteUbergraph_HUDSlotBarHP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUDSlotBarHP_C::ExecuteUbergraph_HUDSlotBarHP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDSlotBarHP.HUDSlotBarHP_C.ExecuteUbergraph_HUDSlotBarHP");

	UHUDSlotBarHP_C_ExecuteUbergraph_HUDSlotBarHP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

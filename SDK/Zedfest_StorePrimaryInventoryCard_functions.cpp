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

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIsSelected");

	UStorePrimaryInventoryCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetEventHandler");

	UStorePrimaryInventoryCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIndex");

	UStorePrimaryInventoryCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStorePrimaryInventoryCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetNavigationAction");

	UStorePrimaryInventoryCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStorePrimaryInventoryCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetVisibility_1");

	UStorePrimaryInventoryCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetAmmoBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStorePrimaryInventoryCard_C::GetAmmoBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetAmmoBrush");

	UStorePrimaryInventoryCard_C_GetAmmoBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SellText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryInventoryCard_C::SellText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SellText");

	UStorePrimaryInventoryCard_C_SellText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.FillUpText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryInventoryCard_C::FillUpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.FillUpText");

	UStorePrimaryInventoryCard_C_FillUpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OneMagText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryInventoryCard_C::OneMagText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OneMagText");

	UStorePrimaryInventoryCard_C_OneMagText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_WeaponName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryInventoryCard_C::Get_WeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_WeaponName");

	UStorePrimaryInventoryCard_C_Get_WeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_AmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryInventoryCard_C::Get_AmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_AmmoText");

	UStorePrimaryInventoryCard_C_Get_AmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStorePrimaryInventoryCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetBrush_1");

	UStorePrimaryInventoryCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverDeselect");

	UStorePrimaryInventoryCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverSelect");

	UStorePrimaryInventoryCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetFocus");

	UStorePrimaryInventoryCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.RemoveFocus");

	UStorePrimaryInventoryCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClick");

	UStorePrimaryInventoryCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStorePrimaryInventoryCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Construct");

	UStorePrimaryInventoryCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStorePrimaryInventoryCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.NotEvent");

	UStorePrimaryInventoryCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIsSelected");

	UStorePrimaryInventoryCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStorePrimaryInventoryCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetEventHandler");

	UStorePrimaryInventoryCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIndex");

	UStorePrimaryInventoryCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ChangeValue");

	UStorePrimaryInventoryCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStorePrimaryInventoryCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.StoreRef");

	UStorePrimaryInventoryCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ExecuteUbergraph_StorePrimaryInventoryCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryInventoryCard_C::ExecuteUbergraph_StorePrimaryInventoryCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ExecuteUbergraph_StorePrimaryInventoryCard");

	UStorePrimaryInventoryCard_C_ExecuteUbergraph_StorePrimaryInventoryCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnUnhover__DelegateSignature");

	UStorePrimaryInventoryCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnHover__DelegateSignature");

	UStorePrimaryInventoryCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryInventoryCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClicked__DelegateSignature");

	UStorePrimaryInventoryCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

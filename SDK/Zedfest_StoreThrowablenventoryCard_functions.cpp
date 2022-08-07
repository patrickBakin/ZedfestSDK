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

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIsSelected");

	UStoreThrowablenventoryCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetEventHandler");

	UStoreThrowablenventoryCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIndex");

	UStoreThrowablenventoryCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreThrowablenventoryCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetNavigationAction");

	UStoreThrowablenventoryCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStoreThrowablenventoryCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetVisibility_1");

	UStoreThrowablenventoryCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetAmmoBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreThrowablenventoryCard_C::GetAmmoBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetAmmoBrush");

	UStoreThrowablenventoryCard_C_GetAmmoBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SellText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowablenventoryCard_C::SellText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SellText");

	UStoreThrowablenventoryCard_C_SellText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.FillUpText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowablenventoryCard_C::FillUpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.FillUpText");

	UStoreThrowablenventoryCard_C_FillUpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OneMagText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowablenventoryCard_C::OneMagText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OneMagText");

	UStoreThrowablenventoryCard_C_OneMagText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_WeaponName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowablenventoryCard_C::Get_WeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_WeaponName");

	UStoreThrowablenventoryCard_C_Get_WeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_AmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowablenventoryCard_C::Get_AmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_AmmoText");

	UStoreThrowablenventoryCard_C_Get_AmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreThrowablenventoryCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetBrush_1");

	UStoreThrowablenventoryCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverDeselect");

	UStoreThrowablenventoryCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverSelect");

	UStoreThrowablenventoryCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetFocus");

	UStoreThrowablenventoryCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.RemoveFocus");

	UStoreThrowablenventoryCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClick");

	UStoreThrowablenventoryCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIsSelected");

	UStoreThrowablenventoryCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreThrowablenventoryCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Construct");

	UStoreThrowablenventoryCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreThrowablenventoryCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.NotEvent");

	UStoreThrowablenventoryCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreThrowablenventoryCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetEventHandler");

	UStoreThrowablenventoryCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIndex");

	UStoreThrowablenventoryCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.PreConstruct");

	UStoreThrowablenventoryCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ChangeValue");

	UStoreThrowablenventoryCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowablenventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreThrowablenventoryCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.StoreRef");

	UStoreThrowablenventoryCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ExecuteUbergraph_StoreThrowablenventoryCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowablenventoryCard_C::ExecuteUbergraph_StoreThrowablenventoryCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ExecuteUbergraph_StoreThrowablenventoryCard");

	UStoreThrowablenventoryCard_C_ExecuteUbergraph_StoreThrowablenventoryCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnUnhover__DelegateSignature");

	UStoreThrowablenventoryCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnHover__DelegateSignature");

	UStoreThrowablenventoryCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowablenventoryCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClicked__DelegateSignature");

	UStoreThrowablenventoryCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIsSelected");

	UStoreSecInventoryCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetEventHandler");

	UStoreSecInventoryCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIndex");

	UStoreSecInventoryCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreSecInventoryCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetNavigationAction");

	UStoreSecInventoryCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStoreSecInventoryCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetVisibility_1");

	UStoreSecInventoryCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetAmmoBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreSecInventoryCard_C::GetAmmoBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetAmmoBrush");

	UStoreSecInventoryCard_C_GetAmmoBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SellText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSecInventoryCard_C::SellText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.SellText");

	UStoreSecInventoryCard_C_SellText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.FillUpText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSecInventoryCard_C::FillUpText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.FillUpText");

	UStoreSecInventoryCard_C_FillUpText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OneMagText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSecInventoryCard_C::OneMagText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.OneMagText");

	UStoreSecInventoryCard_C_OneMagText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_WeaponName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSecInventoryCard_C::Get_WeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_WeaponName");

	UStoreSecInventoryCard_C_Get_WeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_AmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSecInventoryCard_C::Get_AmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_AmmoText");

	UStoreSecInventoryCard_C_Get_AmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreSecInventoryCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetBrush_1");

	UStoreSecInventoryCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverDeselect");

	UStoreSecInventoryCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverSelect");

	UStoreSecInventoryCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetFocus");

	UStoreSecInventoryCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.RemoveFocus");

	UStoreSecInventoryCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClick");

	UStoreSecInventoryCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreSecInventoryCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.Construct");

	UStoreSecInventoryCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreSecInventoryCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.NotEvent");

	UStoreSecInventoryCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIsSelected");

	UStoreSecInventoryCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreSecInventoryCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetEventHandler");

	UStoreSecInventoryCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIndex");

	UStoreSecInventoryCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.PreConstruct");

	UStoreSecInventoryCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.ChangeValue");

	UStoreSecInventoryCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreSecInventoryCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.StoreRef");

	UStoreSecInventoryCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSecInventoryCard_C::BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.ExecuteUbergraph_StoreSecInventoryCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSecInventoryCard_C::ExecuteUbergraph_StoreSecInventoryCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.ExecuteUbergraph_StoreSecInventoryCard");

	UStoreSecInventoryCard_C_ExecuteUbergraph_StoreSecInventoryCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnUnhover__DelegateSignature");

	UStoreSecInventoryCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnHover__DelegateSignature");

	UStoreSecInventoryCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSecInventoryCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClicked__DelegateSignature");

	UStoreSecInventoryCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

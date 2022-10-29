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

// Function ButtonVertical.ButtonVertical_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UButtonVertical_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.GetNavigationAction");

	UButtonVertical_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function ButtonVertical.ButtonVertical_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.GetIndex");

	UButtonVertical_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function ButtonVertical.ButtonVertical_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.GetEventHandler");

	UButtonVertical_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function ButtonVertical.ButtonVertical_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.GetIsSelected");

	UButtonVertical_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function ButtonVertical.ButtonVertical_C.VerticalText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LocalString1                   (Parm, OutParm, ZeroConstructor)

void UButtonVertical_C::VerticalText(struct FString* Text, struct FString* LocalString1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.VerticalText");

	UButtonVertical_C_VerticalText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalString1 != nullptr)
		*LocalString1 = params.LocalString1;
}


// Function ButtonVertical.ButtonVertical_C.UpdateButtonStyle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Specified_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::UpdateButtonStyle(struct FLinearColor* Specified_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.UpdateButtonStyle");

	UButtonVertical_C_UpdateButtonStyle_Params params;
	params.Specified_Color = Specified_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.SetIsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::SetIsActive(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.SetIsActive");

	UButtonVertical_C_SetIsActive_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.ChangeValue");

	UButtonVertical_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.PreConstruct");

	UButtonVertical_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButtonVertical_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UButtonVertical_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UButtonVertical_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UButtonVertical_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.HoverSelect");

	UButtonVertical_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.HoverDeselect");

	UButtonVertical_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.SetIsSelected");

	UButtonVertical_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.OnClick");

	UButtonVertical_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UButtonVertical_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.SetEventHandler");

	UButtonVertical_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.SetIndex");

	UButtonVertical_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.SetFocus");

	UButtonVertical_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.RemoveFocus");

	UButtonVertical_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.ExecuteUbergraph_ButtonVertical
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButtonVertical_C::ExecuteUbergraph_ButtonVertical(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.ExecuteUbergraph_ButtonVertical");

	UButtonVertical_C_ExecuteUbergraph_ButtonVertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.OnUnhover__DelegateSignature");

	UButtonVertical_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.OnHover__DelegateSignature");

	UButtonVertical_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonVertical.ButtonVertical_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButtonVertical_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonVertical.ButtonVertical_C.OnClicked__DelegateSignature");

	UButtonVertical_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

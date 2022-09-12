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

// Function Button1.Button1_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UButton1_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.GetNavigationAction");

	UButton1_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function Button1.Button1_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButton1_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.GetIndex");

	UButton1_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function Button1.Button1_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButton1_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.GetEventHandler");

	UButton1_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function Button1.Button1_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UButton1_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.GetIsSelected");

	UButton1_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function Button1.Button1_C.UpdateButtonStyle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Specified_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::UpdateButtonStyle(struct FLinearColor* Specified_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.UpdateButtonStyle");

	UButton1_C_UpdateButtonStyle_Params params;
	params.Specified_Color = Specified_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.SetIsActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::SetIsActive(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.SetIsActive");

	UButton1_C_SetIsActive_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.ChangeValue");

	UButton1_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.PreConstruct");

	UButton1_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UButton1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UButton1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UButton1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UButton1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UButton1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UButton1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UButton1_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UButton1_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UButton1_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.HoverSelect");

	UButton1_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UButton1_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.HoverDeselect");

	UButton1_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.SetIsSelected");

	UButton1_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UButton1_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.OnClick");

	UButton1_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UButton1_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.SetEventHandler");

	UButton1_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.SetIndex");

	UButton1_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UButton1_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.SetFocus");

	UButton1_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UButton1_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.RemoveFocus");

	UButton1_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.ButtonText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UButton1_C::ButtonText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.ButtonText");

	UButton1_C_ButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.ExecuteUbergraph_Button1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UButton1_C::ExecuteUbergraph_Button1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.ExecuteUbergraph_Button1");

	UButton1_C_ExecuteUbergraph_Button1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButton1_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.OnUnhover__DelegateSignature");

	UButton1_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButton1_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.OnHover__DelegateSignature");

	UButton1_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Button1.Button1_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UButton1_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Button1.Button1_C.OnClicked__DelegateSignature");

	UButton1_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

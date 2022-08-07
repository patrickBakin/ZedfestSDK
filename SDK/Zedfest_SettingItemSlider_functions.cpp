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

// Function SettingItemSlider.SettingItemSlider_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void USettingItemSlider_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.GetNavigationAction");

	USettingItemSlider_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function SettingItemSlider.SettingItemSlider_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.GetIndex");

	USettingItemSlider_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function SettingItemSlider.SettingItemSlider_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.GetEventHandler");

	USettingItemSlider_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function SettingItemSlider.SettingItemSlider_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.GetIsSelected");

	USettingItemSlider_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function SettingItemSlider.SettingItemSlider_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.OnClick");

	USettingItemSlider_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.PreConstruct");

	USettingItemSlider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::UpdateLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.UpdateLayout");

	USettingItemSlider_C_UpdateLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature");

	USettingItemSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingItemSlider_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	USettingItemSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingItemSlider_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	USettingItemSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.SetIsSelected");

	USettingItemSlider_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.HoverSelect");

	USettingItemSlider_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.HoverDeselect");

	USettingItemSlider_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.ChangeValue");

	USettingItemSlider_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USettingItemSlider_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.SetEventHandler");

	USettingItemSlider_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.SetFocus");

	USettingItemSlider_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingItemSlider_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.RemoveFocus");

	USettingItemSlider_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.SetIndex");

	USettingItemSlider_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.ExecuteUbergraph_SettingItemSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::ExecuteUbergraph_SettingItemSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.ExecuteUbergraph_SettingItemSlider");

	USettingItemSlider_C_ExecuteUbergraph_SettingItemSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingItemSlider.SettingItemSlider_C.OnValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingItemSlider_C::OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingItemSlider.SettingItemSlider_C.OnValueChange__DelegateSignature");

	USettingItemSlider_C_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

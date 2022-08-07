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

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void USettingMultiKeyboardInput_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetNavigationAction");

	USettingMultiKeyboardInput_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIndex");

	USettingMultiKeyboardInput_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetEventHandler");

	USettingMultiKeyboardInput_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIsSelected");

	USettingMultiKeyboardInput_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetMaxWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SetMaxWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetMaxWidth");

	USettingMultiKeyboardInput_C_SetMaxWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyUnhover
// (Public, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::OnInputKeyUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyUnhover");

	USettingMultiKeyboardInput_C_OnInputKeyUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetTargetSelectedIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SetTargetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetTargetSelectedIndex");

	USettingMultiKeyboardInput_C_SetTargetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectFirstKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TryToSelectTargetIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SelectFirstKey(bool* TryToSelectTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectFirstKey");

	USettingMultiKeyboardInput_C_SelectFirstKey_Params params;
	params.TryToSelectTargetIndex = TryToSelectTargetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ResetKeySelection
// (Public, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::ResetKeySelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ResetKeySelection");

	USettingMultiKeyboardInput_C_ResetKeySelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           newIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::OnInputKeyHover(int* newIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyHover");

	USettingMultiKeyboardInput_C_OnInputKeyHover_Params params;
	params.newIndex = newIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.DeselectInputKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::DeselectInputKey(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.DeselectInputKey");

	USettingMultiKeyboardInput_C_DeselectInputKey_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PopulateKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::PopulateKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PopulateKeys");

	USettingMultiKeyboardInput_C_PopulateKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectInputKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SelectInputKey(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectInputKey");

	USettingMultiKeyboardInput_C_SelectInputKey_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputButtonClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputKeyData*          Input_Data                     (BlueprintVisible, BlueprintReadOnly, Parm)

void USettingMultiKeyboardInput_C::OnInputButtonClick(struct FInputKeyData* Input_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputButtonClick");

	USettingMultiKeyboardInput_C_OnInputButtonClick_Params params;
	params.Input_Data = Input_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RestoreDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::RestoreDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RestoreDefault");

	USettingMultiKeyboardInput_C_RestoreDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetAxisActionKeyName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputKeyData*          KeyData                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USettingMultiKeyboardInput_C::GetAxisActionKeyName(struct FInputKeyData* KeyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetAxisActionKeyName");

	USettingMultiKeyboardInput_C_GetAxisActionKeyName_Params params;
	params.KeyData = KeyData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PreConstruct");

	USettingMultiKeyboardInput_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::UpdateLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.UpdateLayout");

	USettingMultiKeyboardInput_C_UpdateLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingMultiKeyboardInput_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	USettingMultiKeyboardInput_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingMultiKeyboardInput_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	USettingMultiKeyboardInput_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIsSelected");

	USettingMultiKeyboardInput_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClick");

	USettingMultiKeyboardInput_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverSelect");

	USettingMultiKeyboardInput_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverDeselect");

	USettingMultiKeyboardInput_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USettingMultiKeyboardInput_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetEventHandler");

	USettingMultiKeyboardInput_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIndex");

	USettingMultiKeyboardInput_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetFocus");

	USettingMultiKeyboardInput_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingMultiKeyboardInput_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RemoveFocus");

	USettingMultiKeyboardInput_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ChangeValue");

	USettingMultiKeyboardInput_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ExecuteUbergraph_SettingMultiKeyboardInput
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::ExecuteUbergraph_SettingMultiKeyboardInput(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ExecuteUbergraph_SettingMultiKeyboardInput");

	USettingMultiKeyboardInput_C_ExecuteUbergraph_SettingMultiKeyboardInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnSelectionUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedKeyIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::OnSelectionUpdate__DelegateSignature(int* SelectedKeyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnSelectionUpdate__DelegateSignature");

	USettingMultiKeyboardInput_C_OnSelectionUpdate__DelegateSignature_Params params;
	params.SelectedKeyIndex = SelectedKeyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAxis                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AxisVal                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingMultiKeyboardInput_C::OnClicked__DelegateSignature(struct FName* KeyName, bool* IsAxis, float* AxisVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClicked__DelegateSignature");

	USettingMultiKeyboardInput_C_OnClicked__DelegateSignature_Params params;
	params.KeyName = KeyName;
	params.IsAxis = IsAxis;
	params.AxisVal = AxisVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

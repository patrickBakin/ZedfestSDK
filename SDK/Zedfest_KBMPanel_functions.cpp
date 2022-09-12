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

// Function KBMPanel.KBMPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.OnEscapeInput");

	UKBMPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function KBMPanel.KBMPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.GetEventHandler");

	UKBMPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function KBMPanel.KBMPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.GetStepIndex");

	UKBMPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function KBMPanel.KBMPanel_C.OnKeyRemapItemSelectionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::OnKeyRemapItemSelectionChange(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.OnKeyRemapItemSelectionChange");

	UKBMPanel_C_OnKeyRemapItemSelectionChange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.GetSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveObj                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::GetSettings(class USaveGame** SaveObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.GetSettings");

	UKBMPanel_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveObj != nullptr)
		*SaveObj = params.SaveObj;
}


// Function KBMPanel.KBMPanel_C.LoadDefaultSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::LoadDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.LoadDefaultSettings");

	UKBMPanel_C_LoadDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKBMSaveGame_C**         SaveObj                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::LoadSettings(class UKBMSaveGame_C** SaveObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.LoadSettings");

	UKBMPanel_C_LoadSettings_Params params;
	params.SaveObj = SaveObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.RebindKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAxis_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AxisVal                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::RebindKey(struct FName* KeyName, bool* IsAxis_, float* AxisVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.RebindKey");

	UKBMPanel_C_RebindKey_Params params;
	params.KeyName = KeyName;
	params.IsAxis_ = IsAxis_;
	params.AxisVal = AxisVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.ReloadKeyUI
// (Public, BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::ReloadKeyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.ReloadKeyUI");

	UKBMPanel_C_ReloadKeyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKBMPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.Construct");

	UKBMPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.GetEscapeBehaviour");

	UKBMPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UKBMPanel_C::BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UKBMPanel_C_BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UKBMPanel_C::BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature");

	UKBMPanel_C_BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature");

	UKBMPanel_C_BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.Save&Apply
// (BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::Save_Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.Save&Apply");

	UKBMPanel_C_Save_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.RebindKeyCancel
// (BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::RebindKeyCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.RebindKeyCancel");

	UKBMPanel_C_RebindKeyCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKBMPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.Destruct");

	UKBMPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UKBMPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.SetNavManager");

	UKBMPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.SetStepIndex");

	UKBMPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UKBMPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UKBMPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
=======
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.SetOnEscapeBehaviour");

	UKBMPanel_C_SetOnEscapeBehaviour_Params params;
<<<<<<< HEAD
	params.EscapeBehaviour = EscapeBehaviour;
=======
	params.escapeBehaviour = escapeBehaviour;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.OnNavigationScroll
// (BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::OnNavigationScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.OnNavigationScroll");

	UKBMPanel_C_OnNavigationScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.ExecuteUbergraph_KBMPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::ExecuteUbergraph_KBMPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.ExecuteUbergraph_KBMPanel");

	UKBMPanel_C_ExecuteUbergraph_KBMPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.OnRebindCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKBMPanel_C::OnRebindCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.OnRebindCancel__DelegateSignature");

	UKBMPanel_C_OnRebindCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KBMPanel.KBMPanel_C.RebindKeyState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsWaitingForInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKBMPanel_C::RebindKeyState__DelegateSignature(bool* IsWaitingForInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function KBMPanel.KBMPanel_C.RebindKeyState__DelegateSignature");

	UKBMPanel_C_RebindKeyState__DelegateSignature_Params params;
	params.IsWaitingForInput = IsWaitingForInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

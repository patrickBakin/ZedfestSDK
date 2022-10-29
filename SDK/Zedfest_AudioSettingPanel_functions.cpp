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

// Function AudioSettingPanel.AudioSettingPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.OnEscapeInput");

	UAudioSettingPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function AudioSettingPanel.AudioSettingPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.GetEventHandler");

	UAudioSettingPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function AudioSettingPanel.AudioSettingPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.GetStepIndex");

	UAudioSettingPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function AudioSettingPanel.AudioSettingPanel_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioSaveGame_C**       SettingObj                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::LoadSettings(class UAudioSaveGame_C** SettingObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.LoadSettings");

	UAudioSettingPanel_C_LoadSettings_Params params;
	params.SettingObj = SettingObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.LoadDefaultSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioSettingPanel_C::LoadDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.LoadDefaultSettings");

	UAudioSettingPanel_C_LoadDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.GetSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioSaveGame_C*        Save                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::GetSettings(class UAudioSaveGame_C** Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.GetSettings");

	UAudioSettingPanel_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Save != nullptr)
		*Save = params.Save;
}


// Function AudioSettingPanel.AudioSettingPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UAudioSettingPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.GetEscapeBehaviour");

	UAudioSettingPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAudioSettingPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.Construct");

	UAudioSettingPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UAudioSettingPanel_C::BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.Save&Apply
// (BlueprintCallable, BlueprintEvent)

void UAudioSettingPanel_C::Save_Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.Save&Apply");

	UAudioSettingPanel_C_Save_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAudioSettingPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.SetNavManager");

	UAudioSettingPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.SetStepIndex");

	UAudioSettingPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UAudioSettingPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UAudioSettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAudioSettingPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.Destruct");

	UAudioSettingPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.SetOnEscapeBehaviour");

	UAudioSettingPanel_C_SetOnEscapeBehaviour_Params params;
	params.EscapeBehaviour = EscapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioSettingPanel.AudioSettingPanel_C.ExecuteUbergraph_AudioSettingPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAudioSettingPanel_C::ExecuteUbergraph_AudioSettingPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingPanel.AudioSettingPanel_C.ExecuteUbergraph_AudioSettingPanel");

	UAudioSettingPanel_C_ExecuteUbergraph_AudioSettingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

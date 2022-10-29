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

// Function VideoSettingPanel.VideoSettingPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.OnEscapeInput");

	UVideoSettingPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function VideoSettingPanel.VideoSettingPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.GetEventHandler");

	UVideoSettingPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function VideoSettingPanel.VideoSettingPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.GetStepIndex");

	UVideoSettingPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function VideoSettingPanel.VideoSettingPanel_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVideoSaveGame_C**       Save                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::LoadSettings(class UVideoSaveGame_C** Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.LoadSettings");

	UVideoSettingPanel_C_LoadSettings_Params params;
	params.Save = Save;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.PopulateResolutions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::PopulateResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.PopulateResolutions");

	UVideoSettingPanel_C_PopulateResolutions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.OnSettingsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::OnSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.OnSettingsChanged");

	UVideoSettingPanel_C_OnSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.RestoreVideo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::RestoreVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.RestoreVideo");

	UVideoSettingPanel_C_RestoreVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.RestoreFromTempSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::RestoreFromTempSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.RestoreFromTempSetting");

	UVideoSettingPanel_C_RestoreFromTempSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.StoreTempSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::StoreTempSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.StoreTempSetting");

	UVideoSettingPanel_C_StoreTempSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.ApplySetting
// (Public, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::ApplySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.ApplySetting");

	UVideoSettingPanel_C_ApplySetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_1");

	UVideoSettingPanel_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_2");

	UVideoSettingPanel_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.DisableResolutionOnBorderlessMode
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::DisableResolutionOnBorderlessMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.DisableResolutionOnBorderlessMode");

	UVideoSettingPanel_C_DisableResolutionOnBorderlessMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVideoSettingPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.Construct");

	UVideoSettingPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.HideSaveBtn
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::HideSaveBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.HideSaveBtn");

	UVideoSettingPanel_C_HideSaveBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.GetEscapeBehaviour");

	UVideoSettingPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.Save
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.Save");

	UVideoSettingPanel_C_Save_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVideoSettingPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.Destruct");

	UVideoSettingPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UVideoSettingPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.SetNavManager");

	UVideoSettingPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.SetStepIndex");

	UVideoSettingPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UVideoSettingPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UVideoSettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.OnNavigationScroll
// (BlueprintCallable, BlueprintEvent)

void UVideoSettingPanel_C::OnNavigationScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.OnNavigationScroll");

	UVideoSettingPanel_C_OnNavigationScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.SetOnEscapeBehaviour");

	UVideoSettingPanel_C_SetOnEscapeBehaviour_Params params;
	params.EscapeBehaviour = EscapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VideoSettingPanel.VideoSettingPanel_C.ExecuteUbergraph_VideoSettingPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVideoSettingPanel_C::ExecuteUbergraph_VideoSettingPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VideoSettingPanel.VideoSettingPanel_C.ExecuteUbergraph_VideoSettingPanel");

	UVideoSettingPanel_C_ExecuteUbergraph_VideoSettingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

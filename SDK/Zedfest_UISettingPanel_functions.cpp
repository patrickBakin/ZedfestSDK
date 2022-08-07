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

// Function UISettingPanel.UISettingPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.OnEscapeInput");

	UUISettingPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function UISettingPanel.UISettingPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.GetEventHandler");

	UUISettingPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function UISettingPanel.UISettingPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.GetStepIndex");

	UUISettingPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function UISettingPanel.UISettingPanel_C.GetSettings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUISaveGame_C*           Save                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::GetSettings(class UUISaveGame_C** Save)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.GetSettings");

	UUISettingPanel_C_GetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Save != nullptr)
		*Save = params.Save;
}


// Function UISettingPanel.UISettingPanel_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUISaveGame_C**          SettingObj                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::LoadSettings(class UUISaveGame_C** SettingObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.LoadSettings");

	UUISettingPanel_C_LoadSettings_Params params;
	params.SettingObj = SettingObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.LoadDefaultSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UUISettingPanel_C::LoadDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.LoadDefaultSettings");

	UUISettingPanel_C_LoadDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UUISettingPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.GetEscapeBehaviour");

	UUISettingPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUISettingPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.Construct");

	UUISettingPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.Save&Apply
// (BlueprintCallable, BlueprintEvent)

void UUISettingPanel_C::Save_Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.Save&Apply");

	UUISettingPanel_C_Save_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUISettingPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.Destruct");

	UUISettingPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUISettingPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.SetNavManager");

	UUISettingPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.SetStepIndex");

	UUISettingPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUISettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.SetOnEscapeBehaviour");

	UUISettingPanel_C_SetOnEscapeBehaviour_Params params;
	params.escapeBehaviour = escapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.BndEvt__FadeAlwaysshowInventory?_K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature
// (BlueprintEvent)

void UUISettingPanel_C::BndEvt__FadeAlwaysshowInventory__K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.BndEvt__FadeAlwaysshowInventory?_K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature");

	UUISettingPanel_C_BndEvt__FadeAlwaysshowInventory__K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UISettingPanel.UISettingPanel_C.ExecuteUbergraph_UISettingPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUISettingPanel_C::ExecuteUbergraph_UISettingPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UISettingPanel.UISettingPanel_C.ExecuteUbergraph_UISettingPanel");

	UUISettingPanel_C_ExecuteUbergraph_UISettingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeInput");

	UCardViewSettingsPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEventHandler");

	UCardViewSettingsPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetStepIndex");

	UCardViewSettingsPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetCanFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::GetCanFocus(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetCanFocus");

	UCardViewSettingsPanel_C_GetCanFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanFocus != nullptr)
		*CanFocus = params.CanFocus;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BacktoSettingMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UCardViewSettingsPanel_C::BacktoSettingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.BacktoSettingMenu");

	UCardViewSettingsPanel_C_BacktoSettingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeCalled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* Behaviour                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::OnEscapeCalled(TEnumAsByte<EEscapeBehaviour>* Behaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeCalled");

	UCardViewSettingsPanel_C_OnEscapeCalled_Params params;
	params.Behaviour = Behaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.LoadPanel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::LoadPanel(class UClass** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.LoadPanel");

	UCardViewSettingsPanel_C_LoadPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UCardViewSettingsPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEscapeBehaviour");

	UCardViewSettingsPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewSettingsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.Construct");

	UCardViewSettingsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCardViewSettingsPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetNavManager");

	UCardViewSettingsPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetStepIndex");

	UCardViewSettingsPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewSettingsPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.Destruct");

	UCardViewSettingsPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
=======
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetOnEscapeBehaviour");

	UCardViewSettingsPanel_C_SetOnEscapeBehaviour_Params params;
<<<<<<< HEAD
	params.EscapeBehaviour = EscapeBehaviour;
=======
	params.escapeBehaviour = escapeBehaviour;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewSettingsPanel_C::BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UCardViewSettingsPanel_C_BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewSettingsPanel_C::BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UCardViewSettingsPanel_C_BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewSettingsPanel_C::BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UCardViewSettingsPanel_C_BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewSettingsPanel_C::BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UCardViewSettingsPanel_C_BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsWaitingForInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::CustomEvent_1(bool* IsWaitingForInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_1");

	UCardViewSettingsPanel_C_CustomEvent_1_Params params;
	params.IsWaitingForInput = IsWaitingForInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UCardViewSettingsPanel_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_2");

	UCardViewSettingsPanel_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.ExecuteUbergraph_CardViewSettingsPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::ExecuteUbergraph_CardViewSettingsPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.ExecuteUbergraph_CardViewSettingsPanel");

	UCardViewSettingsPanel_C_ExecuteUbergraph_CardViewSettingsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnKeybindingState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewSettingsPanel_C::OnKeybindingState__DelegateSignature(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnKeybindingState__DelegateSignature");

	UCardViewSettingsPanel_C_OnKeybindingState__DelegateSignature_Params params;
	params.CanFocus = CanFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

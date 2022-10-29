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

// Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeInput");

	UCardViewPlayPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.GetEventHandler");

	UCardViewPlayPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.GetStepIndex");

	UCardViewPlayPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.GetCanFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanFocus                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::GetCanFocus(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.GetCanFocus");

	UCardViewPlayPanel_C_GetCanFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanFocus != nullptr)
		*CanFocus = params.CanFocus;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.BacktoSettingMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UCardViewPlayPanel_C::BacktoSettingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.BacktoSettingMenu");

	UCardViewPlayPanel_C_BacktoSettingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeCalled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* Behaviour                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::OnEscapeCalled(TEnumAsByte<EEscapeBehaviour>* Behaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeCalled");

	UCardViewPlayPanel_C_OnEscapeCalled_Params params;
	params.Behaviour = Behaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.LoadPanel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::LoadPanel(class UClass** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.LoadPanel");

	UCardViewPlayPanel_C_LoadPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UCardViewPlayPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.GetEscapeBehaviour");

	UCardViewPlayPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewPlayPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.Construct");

	UCardViewPlayPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCardViewPlayPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.SetNavManager");

	UCardViewPlayPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.SetStepIndex");

	UCardViewPlayPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewPlayPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.Destruct");

	UCardViewPlayPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.SetOnEscapeBehaviour");

	UCardViewPlayPanel_C_SetOnEscapeBehaviour_Params params;
	params.EscapeBehaviour = EscapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewPlayPanel_C::BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UCardViewPlayPanel_C_BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewPlayPanel_C::BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UCardViewPlayPanel_C_BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewPlayPanel_C::BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UCardViewPlayPanel_C_BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewPlayPanel_C::BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UCardViewPlayPanel_C_BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.ExecuteUbergraph_CardViewPlayPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::ExecuteUbergraph_CardViewPlayPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.ExecuteUbergraph_CardViewPlayPanel");

	UCardViewPlayPanel_C_ExecuteUbergraph_CardViewPlayPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPlayPanel.CardViewPlayPanel_C.OnKeybindingState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPlayPanel_C::OnKeybindingState__DelegateSignature(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPlayPanel.CardViewPlayPanel_C.OnKeybindingState__DelegateSignature");

	UCardViewPlayPanel_C_OnKeybindingState__DelegateSignature_Params params;
	params.CanFocus = CanFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

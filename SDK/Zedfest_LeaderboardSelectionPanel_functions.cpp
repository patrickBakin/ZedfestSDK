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

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.OnEscapeInput");

	ULeaderboardSelectionPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEventHandler");

	ULeaderboardSelectionPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetStepIndex");

	ULeaderboardSelectionPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderboardSelectionPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEscapeBehaviour");

	ULeaderboardSelectionPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaderboardSelectionPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Construct");

	ULeaderboardSelectionPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaderboardSelectionPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Destruct");

	ULeaderboardSelectionPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULeaderboardSelectionPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetNavManager");

	ULeaderboardSelectionPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetStepIndex");

	ULeaderboardSelectionPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULeaderboardSelectionPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULeaderboardSelectionPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetOnEscapeBehaviour");

	ULeaderboardSelectionPanel_C_SetOnEscapeBehaviour_Params params;
	params.escapeBehaviour = escapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULeaderboardSelectionPanel_C::BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULeaderboardSelectionPanel_C_BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULeaderboardSelectionPanel_C::BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	ULeaderboardSelectionPanel_C_BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULeaderboardSelectionPanel_C::BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	ULeaderboardSelectionPanel_C_BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void ULeaderboardSelectionPanel_C::BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	ULeaderboardSelectionPanel_C_BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ShowHordeModeButtonsEvent
// (BlueprintCallable, BlueprintEvent)

void ULeaderboardSelectionPanel_C::ShowHordeModeButtonsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ShowHordeModeButtonsEvent");

	ULeaderboardSelectionPanel_C_ShowHordeModeButtonsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ExecuteUbergraph_LeaderboardSelectionPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardSelectionPanel_C::ExecuteUbergraph_LeaderboardSelectionPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ExecuteUbergraph_LeaderboardSelectionPanel");

	ULeaderboardSelectionPanel_C_ExecuteUbergraph_LeaderboardSelectionPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

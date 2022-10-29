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

// Function CardViewPanel.CardViewPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.OnEscapeInput");

	UCardViewPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function CardViewPanel.CardViewPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.GetEventHandler");

	UCardViewPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function CardViewPanel.CardViewPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.GetStepIndex");

	UCardViewPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function CardViewPanel.CardViewPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UCardViewPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.GetEscapeBehaviour");

	UCardViewPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.Construct");

	UCardViewPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCardViewPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.SetNavManager");

	UCardViewPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.SetStepIndex");

	UCardViewPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCardViewPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.Destruct");

	UCardViewPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.SetOnEscapeBehaviour");

	UCardViewPanel_C_SetOnEscapeBehaviour_Params params;
	params.EscapeBehaviour = EscapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.OnEscapeInput_1_2
// (BlueprintCallable, BlueprintEvent)

void UCardViewPanel_C::OnEscapeInput_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.OnEscapeInput_1_2");

	UCardViewPanel_C_OnEscapeInput_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCardViewPanel_C::BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UCardViewPanel_C_BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.NewGame
// (BlueprintCallable, BlueprintEvent)

void UCardViewPanel_C::NewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.NewGame");

	UCardViewPanel_C_NewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.ExecuteUbergraph_CardViewPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCardViewPanel_C::ExecuteUbergraph_CardViewPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.ExecuteUbergraph_CardViewPanel");

	UCardViewPanel_C_ExecuteUbergraph_CardViewPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CardViewPanel.CardViewPanel_C.OnRemoveWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCardViewPanel_C::OnRemoveWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CardViewPanel.CardViewPanel_C.OnRemoveWidget__DelegateSignature");

	UCardViewPanel_C_OnRemoveWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

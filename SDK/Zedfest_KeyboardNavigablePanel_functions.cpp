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

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyboardNavigablePanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEscapeBehaviour");

	UKeyboardNavigablePanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKeyboardNavigablePanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEventHandler");

	UKeyboardNavigablePanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeyboardNavigablePanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetOnEscapeBehaviour");

	UKeyboardNavigablePanel_C_SetOnEscapeBehaviour_Params params;
	params.escapeBehaviour = escapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKeyboardNavigablePanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.OnEscapeInput");

	UKeyboardNavigablePanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UKeyboardNavigablePanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetNavManager");

	UKeyboardNavigablePanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKeyboardNavigablePanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetStepIndex");

	UKeyboardNavigablePanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKeyboardNavigablePanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetStepIndex");

	UKeyboardNavigablePanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

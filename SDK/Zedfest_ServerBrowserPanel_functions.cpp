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

// Function ServerBrowserPanel.ServerBrowserPanel_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.OnEscapeInput");

	UServerBrowserPanel_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.GetEventHandler");

	UServerBrowserPanel_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.GetStepIndex");

	UServerBrowserPanel_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.GetFoundServers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UServerBrowserPanel_C::GetFoundServers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.GetFoundServers");

	UServerBrowserPanel_C_GetFoundServers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UServerBrowserPanel_C::GetStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.GetStatus");

	UServerBrowserPanel_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.OnFailure_D6711AF64C98DDCA346BA098DF70A3F8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>* Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UServerBrowserPanel_C::OnFailure_D6711AF64C98DDCA346BA098DF70A3F8(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.OnFailure_D6711AF64C98DDCA346BA098DF70A3F8");

	UServerBrowserPanel_C_OnFailure_D6711AF64C98DDCA346BA098DF70A3F8_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>* Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UServerBrowserPanel_C::OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8(TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8");

	UServerBrowserPanel_C_OnSuccess_D6711AF64C98DDCA346BA098DF70A3F8_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UServerBrowserPanel_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.GetEscapeBehaviour");

	UServerBrowserPanel_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerBrowserPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.Construct");

	UServerBrowserPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerBrowserPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.Destruct");

	UServerBrowserPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UServerBrowserPanel_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.SetNavManager");

	UServerBrowserPanel_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.SetStepIndex");

	UServerBrowserPanel_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.OnNavigationScroll
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserPanel_C::OnNavigationScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.OnNavigationScroll");

	UServerBrowserPanel_C_OnNavigationScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.SetOnEscapeBehaviour");

	UServerBrowserPanel_C_SetOnEscapeBehaviour_Params params;
	params.escapeBehaviour = escapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__Button_125_K2Node_ComponentBoundEvent_192_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__JoinGameButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserPanel_C::BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__RefreshServerlist_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserPanel_C::BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UServerBrowserPanel_C_BndEvt__ServerIDTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserPanel.ServerBrowserPanel_C.ExecuteUbergraph_ServerBrowserPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserPanel_C::ExecuteUbergraph_ServerBrowserPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserPanel.ServerBrowserPanel_C.ExecuteUbergraph_ServerBrowserPanel");

	UServerBrowserPanel_C_ExecuteUbergraph_ServerBrowserPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

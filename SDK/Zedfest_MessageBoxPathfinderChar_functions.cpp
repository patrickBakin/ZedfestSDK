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

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput");

	UMessageBoxPathfinderChar_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEventHandler");

	UMessageBoxPathfinderChar_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetStepIndex");

	UMessageBoxPathfinderChar_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMessageBoxPathfinderChar_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnPreviewKeyDown");

	UMessageBoxPathfinderChar_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBoxPathfinderChar_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Destruct");

	UMessageBoxPathfinderChar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput_1_2
// (BlueprintCallable, BlueprintEvent)

void UMessageBoxPathfinderChar_C::OnEscapeInput_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput_1_2");

	UMessageBoxPathfinderChar_C_OnEscapeInput_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMessageBoxPathfinderChar_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetNavManager");

	UMessageBoxPathfinderChar_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetStepIndex");

	UMessageBoxPathfinderChar_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
=======
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetOnEscapeBehaviour");

	UMessageBoxPathfinderChar_C_SetOnEscapeBehaviour_Params params;
<<<<<<< HEAD
	params.EscapeBehaviour = EscapeBehaviour;
=======
	params.escapeBehaviour = escapeBehaviour;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxPathfinderChar_C::BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxPathfinderChar_C::BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBoxPathfinderChar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Construct");

	UMessageBoxPathfinderChar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.PreConstruct");

	UMessageBoxPathfinderChar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageBoxPathfinderChar_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEscapeBehaviour");

	UMessageBoxPathfinderChar_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxPathfinderChar_C::BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxPathfinderChar_C::BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.ExecuteUbergraph_MessageBoxPathfinderChar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxPathfinderChar_C::ExecuteUbergraph_MessageBoxPathfinderChar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.ExecuteUbergraph_MessageBoxPathfinderChar");

	UMessageBoxPathfinderChar_C_ExecuteUbergraph_MessageBoxPathfinderChar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBoxPathfinderChar_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnClose__DelegateSignature");

	UMessageBoxPathfinderChar_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.NoClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBoxPathfinderChar_C::NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.NoClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.YesClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBoxPathfinderChar_C::YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.YesClicked__DelegateSignature");

	UMessageBoxPathfinderChar_C_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

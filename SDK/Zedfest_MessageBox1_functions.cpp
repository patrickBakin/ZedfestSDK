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

// Function MessageBox1.MessageBox1_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.OnEscapeInput");

	UMessageBox1_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function MessageBox1.MessageBox1_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.GetEventHandler");

	UMessageBox1_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function MessageBox1.MessageBox1_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.GetStepIndex");

	UMessageBox1_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function MessageBox1.MessageBox1_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMessageBox1_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.OnPreviewKeyDown");

	UMessageBox1_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageBox1.MessageBox1_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBox1_C::BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UMessageBox1_C_BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBox1_C::BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");

	UMessageBox1_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.SetStepIndex");

	UMessageBox1_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMessageBox1_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.SetNavManager");

	UMessageBox1_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBox1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.Construct");

	UMessageBox1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.PreConstruct");

	UMessageBox1_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageBox1_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.GetEscapeBehaviour");

	UMessageBox1_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.SetOnEscapeBehaviour");

	UMessageBox1_C_SetOnEscapeBehaviour_Params params;
	params.escapeBehaviour = escapeBehaviour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBox1_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.Destruct");

	UMessageBox1_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.OnEscapeInput_1_2
// (BlueprintCallable, BlueprintEvent)

void UMessageBox1_C::OnEscapeInput_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.OnEscapeInput_1_2");

	UMessageBox1_C_OnEscapeInput_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.ExecuteUbergraph_MessageBox1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBox1_C::ExecuteUbergraph_MessageBox1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.ExecuteUbergraph_MessageBox1");

	UMessageBox1_C_ExecuteUbergraph_MessageBox1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBox1_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.OnClose__DelegateSignature");

	UMessageBox1_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.NoClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBox1_C::NoClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.NoClicked__DelegateSignature");

	UMessageBox1_C_NoClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBox1.MessageBox1_C.YesClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBox1_C::YesClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBox1.MessageBox1_C.YesClicked__DelegateSignature");

	UMessageBox1_C_YesClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

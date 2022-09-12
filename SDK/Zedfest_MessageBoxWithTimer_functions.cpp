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

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput");

	UMessageBoxWithTimer_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEventHandler");

	UMessageBoxWithTimer_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetStepIndex");

	UMessageBoxWithTimer_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            RemainingTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::GetRemainingTime(int* RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetRemainingTime");

	UMessageBoxWithTimer_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RemainingTime != nullptr)
		*RemainingTime = params.RemainingTime;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.CalculateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::CalculateTimer(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.CalculateTimer");

	UMessageBoxWithTimer_C_CalculateTimer_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
=======
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetOnEscapeBehaviour");

	UMessageBoxWithTimer_C_SetOnEscapeBehaviour_Params params;
<<<<<<< HEAD
	params.EscapeBehaviour = EscapeBehaviour;
=======
	params.escapeBehaviour = escapeBehaviour;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageBoxWithTimer_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEscapeBehaviour");

	UMessageBoxWithTimer_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxWithTimer_C::BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");

	UMessageBoxWithTimer_C_BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMessageBoxWithTimer_C::BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");

	UMessageBoxWithTimer_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.Tick");

	UMessageBoxWithTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBoxWithTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.Construct");

	UMessageBoxWithTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetStepIndex");

	UMessageBoxWithTimer_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMessageBoxWithTimer_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetNavManager");

	UMessageBoxWithTimer_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageBoxWithTimer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.Destruct");

	UMessageBoxWithTimer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput_1_2
// (BlueprintCallable, BlueprintEvent)

void UMessageBoxWithTimer_C::OnEscapeInput_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput_1_2");

	UMessageBoxWithTimer_C_OnEscapeInput_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.ExecuteUbergraph_MessageBoxWithTimer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMessageBoxWithTimer_C::ExecuteUbergraph_MessageBoxWithTimer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.ExecuteUbergraph_MessageBoxWithTimer");

	UMessageBoxWithTimer_C_ExecuteUbergraph_MessageBoxWithTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBoxWithTimer_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnCancel__DelegateSignature");

	UMessageBoxWithTimer_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnYes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMessageBoxWithTimer_C::OnYes__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnYes__DelegateSignature");

	UMessageBoxWithTimer_C_OnYes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

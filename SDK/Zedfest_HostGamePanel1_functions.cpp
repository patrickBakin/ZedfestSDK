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

// Function HostGamePanel1.HostGamePanel1_C.OnEscapeInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::OnEscapeInput(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.OnEscapeInput");

	UHostGamePanel1_C_OnEscapeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function HostGamePanel1.HostGamePanel1_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* EventHandler                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::GetEventHandler(class UBP_navset_event_handler_C** EventHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.GetEventHandler");

	UHostGamePanel1_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventHandler != nullptr)
		*EventHandler = params.EventHandler;
}


// Function HostGamePanel1.HostGamePanel1_C.GetStepIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::GetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.GetStepIndex");

	UHostGamePanel1_C_GetStepIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


<<<<<<< HEAD
// Function HostGamePanel1.HostGamePanel1_C.TimeAttackToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UHostGamePanel1_C::TimeAttackToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.TimeAttackToolTip");

	UHostGamePanel1_C_TimeAttackToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function HostGamePanel1.HostGamePanel1_C.HordeModeToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UHostGamePanel1_C::HordeModeToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.HordeModeToolTip");

	UHostGamePanel1_C_HordeModeToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HostGamePanel1.HostGamePanel1_C.ObjectiveModeToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UHostGamePanel1_C::ObjectiveModeToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.ObjectiveModeToolTip");

	UHostGamePanel1_C_ObjectiveModeToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHostGamePanel1_C::BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__PassWordBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__NormalButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__HardButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Randomizer_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function HostGamePanel1.HostGamePanel1_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__3WavesButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__6WavesButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__10WavesButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__EndlessButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function HostGamePanel1.HostGamePanel1_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__HostButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Endless_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Endless_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.SetOnEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* EscapeBehaviour)
=======
// TEnumAsByte<EEscapeBehaviour>* escapeBehaviour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::SetOnEscapeBehaviour(TEnumAsByte<EEscapeBehaviour>* escapeBehaviour)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.SetOnEscapeBehaviour");

	UHostGamePanel1_C_SetOnEscapeBehaviour_Params params;
<<<<<<< HEAD
	params.EscapeBehaviour = EscapeBehaviour;
=======
	params.escapeBehaviour = escapeBehaviour;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__GameModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.SetStepIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::SetStepIndex(int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.SetStepIndex");

	UHostGamePanel1_C_SetStepIndex_Params params;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.SetNavManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navigation_manager_C** NavManagerRef                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UHostGamePanel1_C::SetNavManager(class UBP_navigation_manager_C** NavManagerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.SetNavManager");

	UHostGamePanel1_C_SetNavManager_Params params;
	params.NavManagerRef = NavManagerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHostGamePanel1_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.Destruct");

	UHostGamePanel1_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.MapButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  LevelRawName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             MapImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  LevelDescription               (BlueprintVisible, BlueprintReadOnly, Parm)

void UHostGamePanel1_C::MapButtonClicked(struct FText* LevelName, struct FName* LevelRawName, class UTexture2D** MapImage, struct FText* LevelDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.MapButtonClicked");

	UHostGamePanel1_C_MapButtonClicked_Params params;
	params.LevelName = LevelName;
	params.LevelRawName = LevelRawName;
	params.MapImage = MapImage;
	params.LevelDescription = LevelDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHostGamePanel1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.Construct");

	UHostGamePanel1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.GetEscapeBehaviour
// (Public, BlueprintCallable, BlueprintEvent)

void UHostGamePanel1_C::GetEscapeBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.GetEscapeBehaviour");

	UHostGamePanel1_C_GetEscapeBehaviour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.HostgameButtonEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Solo_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::HostgameButtonEvent(bool* Solo_)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.HostgameButtonEvent");

	UHostGamePanel1_C_HostgameButtonEvent_Params params;
	params.Solo_ = Solo_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHostGamePanel1_C::BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UHostGamePanel1_C_BndEvt__ServerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.BndEvt__Kamikaze+Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
// (BlueprintEvent)

void UHostGamePanel1_C::BndEvt__Kamikaze_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.BndEvt__Kamikaze+Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature");

	UHostGamePanel1_C_BndEvt__Kamikaze_Button_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UHostGamePanel1_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.CustomEvent_4");

	UHostGamePanel1_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HostGamePanel1.HostGamePanel1_C.ExecuteUbergraph_HostGamePanel1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHostGamePanel1_C::ExecuteUbergraph_HostGamePanel1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HostGamePanel1.HostGamePanel1_C.ExecuteUbergraph_HostGamePanel1");

	UHostGamePanel1_C_ExecuteUbergraph_HostGamePanel1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

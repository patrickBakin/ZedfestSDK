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

// Function SettingCards.SettingCards_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.GetIsSelected");

	USettingCards_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function SettingCards.SettingCards_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.GetEventHandler");

	USettingCards_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function SettingCards.SettingCards_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.GetIndex");

	USettingCards_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function SettingCards.SettingCards_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void USettingCards_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.GetNavigationAction");

	USettingCards_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function SettingCards.SettingCards_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.ChangeValue");

	USettingCards_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.PreConstruct");

	USettingCards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USettingCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USettingCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.SetIndex");

	USettingCards_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USettingCards_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.SetEventHandler");

	USettingCards_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.SetIsSelected");

	USettingCards_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void USettingCards_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.HoverSelect");

	USettingCards_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void USettingCards_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.HoverDeselect");

	USettingCards_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingCards_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.SetFocus");

	USettingCards_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USettingCards_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.RemoveFocus");

	USettingCards_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USettingCards_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.OnClick");

	USettingCards_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.ExecuteUbergraph_SettingCards
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingCards_C::ExecuteUbergraph_SettingCards(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.ExecuteUbergraph_SettingCards");

	USettingCards_C_ExecuteUbergraph_SettingCards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USettingCards_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.OnUnhover__DelegateSignature");

	USettingCards_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USettingCards_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.OnHover__DelegateSignature");

	USettingCards_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingCards.SettingCards_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USettingCards_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingCards.SettingCards_C.OnClicked__DelegateSignature");

	USettingCards_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function EmoteCards.EmoteCards_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.GetIsSelected");

	UEmoteCards_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function EmoteCards.EmoteCards_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.GetEventHandler");

	UEmoteCards_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function EmoteCards.EmoteCards_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.GetIndex");

	UEmoteCards_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function EmoteCards.EmoteCards_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UEmoteCards_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.GetNavigationAction");

	UEmoteCards_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function EmoteCards.EmoteCards_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.ChangeValue");

	UEmoteCards_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.PreConstruct");

	UEmoteCards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEmoteCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UEmoteCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UEmoteCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.SetIndex");

	UEmoteCards_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UEmoteCards_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.SetEventHandler");

	UEmoteCards_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.SetIsSelected");

	UEmoteCards_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.HoverSelect");

	UEmoteCards_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.HoverDeselect");

	UEmoteCards_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.SetFocus");

	UEmoteCards_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.RemoveFocus");

	UEmoteCards_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.OnClick");

	UEmoteCards_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmoteCards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.Construct");

	UEmoteCards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UEmoteCards_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.NotEvent");

	UEmoteCards_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.CustomEvent_4");

	UEmoteCards_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.RefreshEmoteCards
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::RefreshEmoteCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.RefreshEmoteCards");

	UEmoteCards_C_RefreshEmoteCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.CustomEvent_3");

	UEmoteCards_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.CustomEvent_2");

	UEmoteCards_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.ExecuteUbergraph_EmoteCards
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEmoteCards_C::ExecuteUbergraph_EmoteCards(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.ExecuteUbergraph_EmoteCards");

	UEmoteCards_C_ExecuteUbergraph_EmoteCards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.OnUnhover__DelegateSignature");

	UEmoteCards_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.OnHover__DelegateSignature");

	UEmoteCards_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmoteCards.EmoteCards_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEmoteCards_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EmoteCards.EmoteCards_C.OnClicked__DelegateSignature");

	UEmoteCards_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function LeaderBoardCards.LeaderBoardCards_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.GetIsSelected");

	ULeaderBoardCards_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function LeaderBoardCards.LeaderBoardCards_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.GetEventHandler");

	ULeaderBoardCards_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function LeaderBoardCards.LeaderBoardCards_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.GetIndex");

	ULeaderBoardCards_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function LeaderBoardCards.LeaderBoardCards_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void ULeaderBoardCards_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.GetNavigationAction");

	ULeaderBoardCards_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function LeaderBoardCards.LeaderBoardCards_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.HoverSelect");

	ULeaderBoardCards_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.HoverDeselect");

	ULeaderBoardCards_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.SetIsSelected");

	ULeaderBoardCards_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.ChangeValue");

	ULeaderBoardCards_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.SetFocus");

	ULeaderBoardCards_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.RemoveFocus");

	ULeaderBoardCards_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.OnClick");

	ULeaderBoardCards_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaderBoardCards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.Construct");

	ULeaderBoardCards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaderBoardCards_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.NotEvent");

	ULeaderBoardCards_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULeaderBoardCards_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.SetEventHandler");

	ULeaderBoardCards_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.SetIndex");

	ULeaderBoardCards_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULeaderBoardCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULeaderBoardCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULeaderBoardCards_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.PreConstruct");

	ULeaderBoardCards_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.ExecuteUbergraph_LeaderBoardCards
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaderBoardCards_C::ExecuteUbergraph_LeaderBoardCards(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.ExecuteUbergraph_LeaderBoardCards");

	ULeaderBoardCards_C_ExecuteUbergraph_LeaderBoardCards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.OnUnhover__DelegateSignature");

	ULeaderBoardCards_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.OnHover__DelegateSignature");

	ULeaderBoardCards_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaderBoardCards.LeaderBoardCards_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaderBoardCards_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderBoardCards.LeaderBoardCards_C.OnClicked__DelegateSignature");

	ULeaderBoardCards_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

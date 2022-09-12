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

// Function MenuStatsCard.MenuStatsCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.GetIsSelected");

	UMenuStatsCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function MenuStatsCard.MenuStatsCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.GetEventHandler");

	UMenuStatsCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function MenuStatsCard.MenuStatsCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.GetIndex");

	UMenuStatsCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function MenuStatsCard.MenuStatsCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UMenuStatsCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.GetNavigationAction");

	UMenuStatsCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuStatsCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.SetIndex");

	UMenuStatsCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMenuStatsCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.SetEventHandler");

	UMenuStatsCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.SetIsSelected");

	UMenuStatsCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.HoverSelect");

	UMenuStatsCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.HoverDeselect");

	UMenuStatsCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenuStatsCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.PreConstruct");

	UMenuStatsCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.SetFocus");

	UMenuStatsCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.RemoveFocus");

	UMenuStatsCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.OnClick");

	UMenuStatsCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.ChangeValue");

	UMenuStatsCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuStatsCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.Construct");

	UMenuStatsCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenuStatsCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.NotEvent");

	UMenuStatsCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMenuStatsCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.ExecuteUbergraph_MenuStatsCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuStatsCard_C::ExecuteUbergraph_MenuStatsCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.ExecuteUbergraph_MenuStatsCard");

	UMenuStatsCard_C_ExecuteUbergraph_MenuStatsCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.OnUnhover__DelegateSignature");

	UMenuStatsCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.OnHover__DelegateSignature");

	UMenuStatsCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuStatsCard.MenuStatsCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenuStatsCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuStatsCard.MenuStatsCard_C.OnClicked__DelegateSignature");

	UMenuStatsCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

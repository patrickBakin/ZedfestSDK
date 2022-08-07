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

// Function SecWeaponCard.SecWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.GetIsSelected");

	USecWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function SecWeaponCard.SecWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.GetEventHandler");

	USecWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function SecWeaponCard.SecWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.GetIndex");

	USecWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function SecWeaponCard.SecWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void USecWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.GetNavigationAction");

	USecWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function SecWeaponCard.SecWeaponCard_C.Get_PrestigeLvlText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USecWeaponCard_C::Get_PrestigeLvlText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.Get_PrestigeLvlText_Text_1");

	USecWeaponCard_C_Get_PrestigeLvlText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecWeaponCard.SecWeaponCard_C.Get_XP_ProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USecWeaponCard_C::Get_XP_ProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.Get_XP_ProgressBar_Percent_1");

	USecWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecWeaponCard.SecWeaponCard_C.Get_NeededXp_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USecWeaponCard_C::Get_NeededXp_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.Get_NeededXp_Text_1");

	USecWeaponCard_C_Get_NeededXp_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecWeaponCard.SecWeaponCard_C.Get_CurrentXP_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USecWeaponCard_C::Get_CurrentXP_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.Get_CurrentXP_Text_1");

	USecWeaponCard_C_Get_CurrentXP_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SecWeaponCard.SecWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.ChangeValue");

	USecWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.SetIndex");

	USecWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USecWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.SetEventHandler");

	USecWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.SetIsSelected");

	USecWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.HoverSelect");

	USecWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.HoverDeselect");

	USecWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.SetFocus");

	USecWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.RemoveFocus");

	USecWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.OnClick");

	USecWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USecWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.Construct");

	USecWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void USecWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.NotEvent");

	USecWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.RefreshSecWeaponCard
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::RefreshSecWeaponCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.RefreshSecWeaponCard");

	USecWeaponCard_C_RefreshSecWeaponCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.EventWeaponLvl
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::EventWeaponLvl()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.EventWeaponLvl");

	USecWeaponCard_C_EventWeaponLvl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USecWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.UpgradeNoCLickedEvent
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::UpgradeNoCLickedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.UpgradeNoCLickedEvent");

	USecWeaponCard_C_UpgradeNoCLickedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.UpdradeYesClickedEvent
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::UpdradeYesClickedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.UpdradeYesClickedEvent");

	USecWeaponCard_C_UpdradeYesClickedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.CustomEvent_5");

	USecWeaponCard_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.CustomEvent");

	USecWeaponCard_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_34
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::CustomEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.CustomEvent_34");

	USecWeaponCard_C_CustomEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.CustomEvent_3");

	USecWeaponCard_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.CustomEvent_2");

	USecWeaponCard_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.ExecuteUbergraph_SecWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USecWeaponCard_C::ExecuteUbergraph_SecWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.ExecuteUbergraph_SecWeaponCard");

	USecWeaponCard_C_ExecuteUbergraph_SecWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.OnUnhover__DelegateSignature");

	USecWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.OnHover__DelegateSignature");

	USecWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SecWeaponCard.SecWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USecWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SecWeaponCard.SecWeaponCard_C.OnClicked__DelegateSignature");

	USecWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

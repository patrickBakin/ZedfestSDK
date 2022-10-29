// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeWeaponCard.MeleeWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.GetIsSelected");

	UMeleeWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.GetEventHandler");

	UMeleeWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.GetIndex");

	UMeleeWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UMeleeWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.GetNavigationAction");

	UMeleeWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_PrestigeLvlText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMeleeWeaponCard_C::Get_PrestigeLvlText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.Get_PrestigeLvlText_Text_1");

	UMeleeWeaponCard_C_Get_PrestigeLvlText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_NeededXp_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMeleeWeaponCard_C::Get_NeededXp_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.Get_NeededXp_Text_1");

	UMeleeWeaponCard_C_Get_NeededXp_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_CurrentXP_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMeleeWeaponCard_C::Get_CurrentXP_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.Get_CurrentXP_Text_1");

	UMeleeWeaponCard_C_Get_CurrentXP_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMeleeWeaponCard_C::Get_XP_ProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1");

	UMeleeWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.ChangeValue");

	UMeleeWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.SetIndex");

	UMeleeWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeleeWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.SetEventHandler");

	UMeleeWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.SetIsSelected");

	UMeleeWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.HoverSelect");

	UMeleeWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.HoverDeselect");

	UMeleeWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.SetFocus");

	UMeleeWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.RemoveFocus");

	UMeleeWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.OnClick");

	UMeleeWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMeleeWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.Construct");

	UMeleeWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMeleeWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.NotEvent");

	UMeleeWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.RefreshMeleeWeaponCard
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::RefreshMeleeWeaponCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.RefreshMeleeWeaponCard");

	UMeleeWeaponCard_C_RefreshMeleeWeaponCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.EventWeaponLvl
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::EventWeaponLvl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.EventWeaponLvl");

	UMeleeWeaponCard_C_EventWeaponLvl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.UpgradeNoCLickedEvent
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::UpgradeNoCLickedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.UpgradeNoCLickedEvent");

	UMeleeWeaponCard_C_UpgradeNoCLickedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.UpdradeYesClickedEvent
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::UpdradeYesClickedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.UpdradeYesClickedEvent");

	UMeleeWeaponCard_C_UpdradeYesClickedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_5");

	UMeleeWeaponCard_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent");

	UMeleeWeaponCard_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_34
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::CustomEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_34");

	UMeleeWeaponCard_C_CustomEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_3");

	UMeleeWeaponCard_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_2");

	UMeleeWeaponCard_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.ExecuteUbergraph_MeleeWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMeleeWeaponCard_C::ExecuteUbergraph_MeleeWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.ExecuteUbergraph_MeleeWeaponCard");

	UMeleeWeaponCard_C_ExecuteUbergraph_MeleeWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.OnUnhover__DelegateSignature");

	UMeleeWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.OnHover__DelegateSignature");

	UMeleeWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponCard.MeleeWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMeleeWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponCard.MeleeWeaponCard_C.OnClicked__DelegateSignature");

	UMeleeWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

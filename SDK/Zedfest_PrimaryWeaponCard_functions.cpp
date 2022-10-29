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

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIsSelected");

	UPrimaryWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetEventHandler");

	UPrimaryWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIndex");

	UPrimaryWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UPrimaryWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetNavigationAction");

	UPrimaryWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPrimaryWeaponCard_C::Get_PrestigeLvlText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1");

	UPrimaryWeaponCard_C_Get_PrestigeLvlText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_NeededXp_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPrimaryWeaponCard_C::Get_NeededXp_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_NeededXp_Text_1");

	UPrimaryWeaponCard_C_Get_NeededXp_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_CurrentXP_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPrimaryWeaponCard_C::Get_CurrentXP_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_CurrentXP_Text_1");

	UPrimaryWeaponCard_C_Get_CurrentXP_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPrimaryWeaponCard_C::Get_XP_ProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1");

	UPrimaryWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.ChangeValue");

	UPrimaryWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIndex");

	UPrimaryWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPrimaryWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetEventHandler");

	UPrimaryWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIsSelected");

	UPrimaryWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverSelect");

	UPrimaryWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverDeselect");

	UPrimaryWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetFocus");

	UPrimaryWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.RemoveFocus");

	UPrimaryWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClick");

	UPrimaryWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPrimaryWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.Construct");

	UPrimaryWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPrimaryWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.NotEvent");

	UPrimaryWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.RefreshPrimaryWeaponCard
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::RefreshPrimaryWeaponCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.RefreshPrimaryWeaponCard");

	UPrimaryWeaponCard_C_RefreshPrimaryWeaponCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.EventWeaponLvl
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::EventWeaponLvl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.EventWeaponLvl");

	UPrimaryWeaponCard_C_EventWeaponLvl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_4");

	UPrimaryWeaponCard_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_6");

	UPrimaryWeaponCard_C_CustomEvent_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_23()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_23");

	UPrimaryWeaponCard_C_CustomEvent_23_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_12
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_12()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_12");

	UPrimaryWeaponCard_C_CustomEvent_12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_5");

	UPrimaryWeaponCard_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent");

	UPrimaryWeaponCard_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_34
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_34");

	UPrimaryWeaponCard_C_CustomEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_3");

	UPrimaryWeaponCard_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_2");

	UPrimaryWeaponCard_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.ExecuteUbergraph_PrimaryWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPrimaryWeaponCard_C::ExecuteUbergraph_PrimaryWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.ExecuteUbergraph_PrimaryWeaponCard");

	UPrimaryWeaponCard_C_ExecuteUbergraph_PrimaryWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnUnhover__DelegateSignature");

	UPrimaryWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnHover__DelegateSignature");

	UPrimaryWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPrimaryWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClicked__DelegateSignature");

	UPrimaryWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

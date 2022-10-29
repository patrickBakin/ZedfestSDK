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

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIsSelected");

	UStorePrimaryWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetEventHandler");

	UStorePrimaryWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIndex");

	UStorePrimaryWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStorePrimaryWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetNavigationAction");

	UStorePrimaryWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryWeaponCard_C::Get_PrestigeLvlText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1");

	UStorePrimaryWeaponCard_C_Get_PrestigeLvlText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_NeededXp_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryWeaponCard_C::Get_NeededXp_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_NeededXp_Text_1");

	UStorePrimaryWeaponCard_C_Get_NeededXp_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_CurrentXP_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryWeaponCard_C::Get_CurrentXP_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_CurrentXP_Text_1");

	UStorePrimaryWeaponCard_C_Get_CurrentXP_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStorePrimaryWeaponCard_C::Get_XP_ProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1");

	UStorePrimaryWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStorePrimaryWeaponCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetBrushColor_1");

	UStorePrimaryWeaponCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStorePrimaryWeaponCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_WeaponCost_Text_1");

	UStorePrimaryWeaponCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverSelect");

	UStorePrimaryWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverDeselect");

	UStorePrimaryWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetFocus");

	UStorePrimaryWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.RemoveFocus");

	UStorePrimaryWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClick");

	UStorePrimaryWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStorePrimaryWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Construct");

	UStorePrimaryWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStorePrimaryWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.NotEvent");

	UStorePrimaryWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.PreConstruct");

	UStorePrimaryWeaponCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ChangeValue");

	UStorePrimaryWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIsSelected");

	UStorePrimaryWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_5");

	UStorePrimaryWeaponCard_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent");

	UStorePrimaryWeaponCard_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStorePrimaryWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetEventHandler");

	UStorePrimaryWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIndex");

	UStorePrimaryWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStorePrimaryWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_34
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::CustomEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_34");

	UStorePrimaryWeaponCard_C_CustomEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_3");

	UStorePrimaryWeaponCard_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_2");

	UStorePrimaryWeaponCard_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ExecuteUbergraph_StorePrimaryWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStorePrimaryWeaponCard_C::ExecuteUbergraph_StorePrimaryWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ExecuteUbergraph_StorePrimaryWeaponCard");

	UStorePrimaryWeaponCard_C_ExecuteUbergraph_StorePrimaryWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnUnhover__DelegateSignature");

	UStorePrimaryWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnHover__DelegateSignature");

	UStorePrimaryWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStorePrimaryWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClicked__DelegateSignature");

	UStorePrimaryWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

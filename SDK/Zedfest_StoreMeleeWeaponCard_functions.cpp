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

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIsSelected");

	UStoreMeleeWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetEventHandler");

	UStoreMeleeWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIndex");

	UStoreMeleeWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreMeleeWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetNavigationAction");

	UStoreMeleeWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_PrestigeLvlText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeWeaponCard_C::Get_PrestigeLvlText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_PrestigeLvlText_Text_1");

	UStoreMeleeWeaponCard_C_Get_PrestigeLvlText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_NeededXp_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeWeaponCard_C::Get_NeededXp_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_NeededXp_Text_1");

	UStoreMeleeWeaponCard_C_Get_NeededXp_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_CurrentXP_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeWeaponCard_C::Get_CurrentXP_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_CurrentXP_Text_1");

	UStoreMeleeWeaponCard_C_Get_CurrentXP_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStoreMeleeWeaponCard_C::Get_XP_ProgressBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1");

	UStoreMeleeWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetBrushColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreMeleeWeaponCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetBrushColor_1");

	UStoreMeleeWeaponCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeWeaponCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_WeaponCost_Text_1");

	UStoreMeleeWeaponCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetFocus");

	UStoreMeleeWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.RemoveFocus");

	UStoreMeleeWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClick");

	UStoreMeleeWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMeleeWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Construct");

	UStoreMeleeWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreMeleeWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.NotEvent");

	UStoreMeleeWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverDeselect");

	UStoreMeleeWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverSelect");

	UStoreMeleeWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIsSelected");

	UStoreMeleeWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreMeleeWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetEventHandler");

	UStoreMeleeWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIndex");

	UStoreMeleeWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.PreConstruct");

	UStoreMeleeWeaponCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ChangeValue");

	UStoreMeleeWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_5");

	UStoreMeleeWeaponCard_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent");

	UStoreMeleeWeaponCard_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_34
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::CustomEvent_34()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_34");

	UStoreMeleeWeaponCard_C_CustomEvent_34_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_3");

	UStoreMeleeWeaponCard_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_2");

	UStoreMeleeWeaponCard_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ExecuteUbergraph_StoreMeleeWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeWeaponCard_C::ExecuteUbergraph_StoreMeleeWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ExecuteUbergraph_StoreMeleeWeaponCard");

	UStoreMeleeWeaponCard_C_ExecuteUbergraph_StoreMeleeWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnUnhover__DelegateSignature");

	UStoreMeleeWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnHover__DelegateSignature");

	UStoreMeleeWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClicked__DelegateSignature");

	UStoreMeleeWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

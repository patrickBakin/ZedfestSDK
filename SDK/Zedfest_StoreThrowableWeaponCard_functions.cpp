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

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIsSelected");

	UStoreThrowableWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetEventHandler");

	UStoreThrowableWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIndex");

	UStoreThrowableWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreThrowableWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetNavigationAction");

	UStoreThrowableWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreThrowableWeaponCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetBrushColor_1");

	UStoreThrowableWeaponCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreThrowableWeaponCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Get_WeaponCost_Text_1");

	UStoreThrowableWeaponCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverDeselect");

	UStoreThrowableWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverSelect");

	UStoreThrowableWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.PreConstruct");

	UStoreThrowableWeaponCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetFocus");

	UStoreThrowableWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.RemoveFocus");

	UStoreThrowableWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClick");

	UStoreThrowableWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreThrowableWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Construct");

	UStoreThrowableWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreThrowableWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.NotEvent");

	UStoreThrowableWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ChangeValue");

	UStoreThrowableWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIsSelected");

	UStoreThrowableWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreThrowableWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetEventHandler");

	UStoreThrowableWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIndex");

	UStoreThrowableWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreThrowableWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ExecuteUbergraph_StoreThrowableWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreThrowableWeaponCard_C::ExecuteUbergraph_StoreThrowableWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ExecuteUbergraph_StoreThrowableWeaponCard");

	UStoreThrowableWeaponCard_C_ExecuteUbergraph_StoreThrowableWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnUnhover__DelegateSignature");

	UStoreThrowableWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnHover__DelegateSignature");

	UStoreThrowableWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreThrowableWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClicked__DelegateSignature");

	UStoreThrowableWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIsSelected");

	UStoreMeleeInventoryCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetEventHandler");

	UStoreMeleeInventoryCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIndex");

	UStoreMeleeInventoryCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreMeleeInventoryCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetNavigationAction");

	UStoreMeleeInventoryCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStoreMeleeInventoryCard_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetVisibility_1");

	UStoreMeleeInventoryCard_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SellText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeInventoryCard_C::SellText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SellText");

	UStoreMeleeInventoryCard_C_SellText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_WeaponName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeInventoryCard_C::Get_WeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_WeaponName");

	UStoreMeleeInventoryCard_C_Get_WeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_AmmoText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreMeleeInventoryCard_C::Get_AmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_AmmoText");

	UStoreMeleeInventoryCard_C_Get_AmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreMeleeInventoryCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetBrush_1");

	UStoreMeleeInventoryCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverSelect");

	UStoreMeleeInventoryCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetFocus");

	UStoreMeleeInventoryCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.RemoveFocus");

	UStoreMeleeInventoryCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClick");

	UStoreMeleeInventoryCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMeleeInventoryCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Construct");

	UStoreMeleeInventoryCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreMeleeInventoryCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.NotEvent");

	UStoreMeleeInventoryCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverDeselect");

	UStoreMeleeInventoryCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIsSelected");

	UStoreMeleeInventoryCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreMeleeInventoryCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetEventHandler");

	UStoreMeleeInventoryCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIndex");

	UStoreMeleeInventoryCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreMeleeInventoryCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ChangeValue");

	UStoreMeleeInventoryCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.PreConstruct");

	UStoreMeleeInventoryCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreMeleeInventoryCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.StoreRef");

	UStoreMeleeInventoryCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ExecuteUbergraph_StoreMeleeInventoryCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMeleeInventoryCard_C::ExecuteUbergraph_StoreMeleeInventoryCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ExecuteUbergraph_StoreMeleeInventoryCard");

	UStoreMeleeInventoryCard_C_ExecuteUbergraph_StoreMeleeInventoryCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnUnhover__DelegateSignature");

	UStoreMeleeInventoryCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnHover__DelegateSignature");

	UStoreMeleeInventoryCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreMeleeInventoryCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClicked__DelegateSignature");

	UStoreMeleeInventoryCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

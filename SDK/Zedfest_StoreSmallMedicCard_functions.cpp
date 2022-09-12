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

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIsSelected");

	UStoreSmallMedicCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetEventHandler");

	UStoreSmallMedicCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIndex");

	UStoreSmallMedicCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreSmallMedicCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetNavigationAction");

	UStoreSmallMedicCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreSmallMedicCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrush_1");

	UStoreSmallMedicCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreSmallMedicCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrushColor_1");

	UStoreSmallMedicCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetConsumableAmountSlot5
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSmallMedicCard_C::GetConsumableAmountSlot5()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetConsumableAmountSlot5");

	UStoreSmallMedicCard_C_GetConsumableAmountSlot5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSmallMedicCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.Get_WeaponCost_Text_1");

	UStoreSmallMedicCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.PreConstruct");

	UStoreSmallMedicCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSmallMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSmallMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSmallMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIndex");

	UStoreSmallMedicCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreSmallMedicCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetEventHandler");

	UStoreSmallMedicCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIsSelected");

	UStoreSmallMedicCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverSelect");

	UStoreSmallMedicCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverDeselect");

	UStoreSmallMedicCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetFocus");

	UStoreSmallMedicCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.RemoveFocus");

	UStoreSmallMedicCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClick");

	UStoreSmallMedicCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreSmallMedicCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.Construct");

	UStoreSmallMedicCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreSmallMedicCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.NotEvent");

	UStoreSmallMedicCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.ChangeValue");

	UStoreSmallMedicCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreSmallMedicCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.StoreRef");

	UStoreSmallMedicCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.UpdateStoreSmallMedicCard
// (BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::UpdateStoreSmallMedicCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.UpdateStoreSmallMedicCard");

	UStoreSmallMedicCard_C_UpdateStoreSmallMedicCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.ExecuteUbergraph_StoreSmallMedicCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSmallMedicCard_C::ExecuteUbergraph_StoreSmallMedicCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.ExecuteUbergraph_StoreSmallMedicCard");

	UStoreSmallMedicCard_C_ExecuteUbergraph_StoreSmallMedicCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnUnhover__DelegateSignature");

	UStoreSmallMedicCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnHover__DelegateSignature");

	UStoreSmallMedicCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSmallMedicCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClicked__DelegateSignature");

	UStoreSmallMedicCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIsSelected");

	UStoreRubberArmorCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetEventHandler");

	UStoreRubberArmorCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIndex");

	UStoreRubberArmorCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreRubberArmorCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetNavigationAction");

	UStoreRubberArmorCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreRubberArmorCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetBrushColor_1");

	UStoreRubberArmorCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetArmorAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreRubberArmorCard_C::GetArmorAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetArmorAmount");

	UStoreRubberArmorCard_C_GetArmorAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreRubberArmorCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.Get_WeaponCost_Text_1");

	UStoreRubberArmorCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.ChangeValue");

	UStoreRubberArmorCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.PreConstruct");

	UStoreRubberArmorCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreRubberArmorCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreRubberArmorCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreRubberArmorCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIndex");

	UStoreRubberArmorCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreRubberArmorCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetEventHandler");

	UStoreRubberArmorCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIsSelected");

	UStoreRubberArmorCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverSelect");

	UStoreRubberArmorCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverDeselect");

	UStoreRubberArmorCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetFocus");

	UStoreRubberArmorCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.RemoveFocus");

	UStoreRubberArmorCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClick");

	UStoreRubberArmorCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreRubberArmorCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.Construct");

	UStoreRubberArmorCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreRubberArmorCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.StoreRef");

	UStoreRubberArmorCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.ExecuteUbergraph_StoreRubberArmorCard
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreRubberArmorCard_C::ExecuteUbergraph_StoreRubberArmorCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.ExecuteUbergraph_StoreRubberArmorCard");

	UStoreRubberArmorCard_C_ExecuteUbergraph_StoreRubberArmorCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnUnhover__DelegateSignature");

	UStoreRubberArmorCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnHover__DelegateSignature");

	UStoreRubberArmorCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreRubberArmorCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClicked__DelegateSignature");

	UStoreRubberArmorCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

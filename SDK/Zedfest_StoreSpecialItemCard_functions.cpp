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

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIsSelected");

	UStoreSpecialItemCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetEventHandler");

	UStoreSpecialItemCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIndex");

	UStoreSpecialItemCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreSpecialItemCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetNavigationAction");

	UStoreSpecialItemCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreSpecialItemCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrush_1");

	UStoreSpecialItemCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreSpecialItemCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrushColor_1");

	UStoreSpecialItemCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetSpecialItemAmountSlot7
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSpecialItemCard_C::GetSpecialItemAmountSlot7()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetSpecialItemAmountSlot7");

	UStoreSpecialItemCard_C_GetSpecialItemAmountSlot7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreSpecialItemCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.Get_WeaponCost_Text_1");

	UStoreSpecialItemCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


<<<<<<< HEAD
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIndex");

	UStoreSpecialItemCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreSpecialItemCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetEventHandler");

	UStoreSpecialItemCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIsSelected");

	UStoreSpecialItemCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverSelect");

	UStoreSpecialItemCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverDeselect");

	UStoreSpecialItemCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct");

	UStoreSpecialItemCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetFocus");

	UStoreSpecialItemCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.RemoveFocus");

	UStoreSpecialItemCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClick");

	UStoreSpecialItemCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreSpecialItemCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.Construct");

	UStoreSpecialItemCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreSpecialItemCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.NotEvent");

	UStoreSpecialItemCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct");

	UStoreSpecialItemCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue");

	UStoreSpecialItemCard_C_ChangeValue_Params params;
	params.Right = Right;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreSpecialItemCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreSpecialItemCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.StoreRef");

	UStoreSpecialItemCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue");

	UStoreSpecialItemCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.UpdateStoreSpecialItemCard
// (BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::UpdateStoreSpecialItemCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.UpdateStoreSpecialItemCard");

	UStoreSpecialItemCard_C_UpdateStoreSpecialItemCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ExecuteUbergraph_StoreSpecialItemCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreSpecialItemCard_C::ExecuteUbergraph_StoreSpecialItemCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.ExecuteUbergraph_StoreSpecialItemCard");

	UStoreSpecialItemCard_C_ExecuteUbergraph_StoreSpecialItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnUnhover__DelegateSignature");

	UStoreSpecialItemCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnHover__DelegateSignature");

	UStoreSpecialItemCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreSpecialItemCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClicked__DelegateSignature");

	UStoreSpecialItemCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

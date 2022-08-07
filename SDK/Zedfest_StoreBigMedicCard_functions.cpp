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

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetIsSelected");

	UStoreBigMedicCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetEventHandler");

	UStoreBigMedicCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetIndex");

	UStoreBigMedicCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UStoreBigMedicCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetNavigationAction");

	UStoreBigMedicCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UStoreBigMedicCard_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrush_1");

	UStoreBigMedicCard_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UStoreBigMedicCard_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrushColor_1");

	UStoreBigMedicCard_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.GetConsumableAmountSlot6
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreBigMedicCard_C::GetConsumableAmountSlot6()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.GetConsumableAmountSlot6");

	UStoreBigMedicCard_C_GetConsumableAmountSlot6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.Get_WeaponCost_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStoreBigMedicCard_C::Get_WeaponCost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.Get_WeaponCost_Text_1");

	UStoreBigMedicCard_C_Get_WeaponCost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_F5C679D44C5B5D4AC89F3D81F028C906
// (BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnFailure_F5C679D44C5B5D4AC89F3D81F028C906()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_F5C679D44C5B5D4AC89F3D81F028C906");

	UStoreBigMedicCard_C_OnFailure_F5C679D44C5B5D4AC89F3D81F028C906_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906
// (BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906");

	UStoreBigMedicCard_C_OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_882149E04EA7E5DA83397798862602BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::OnFailure_882149E04EA7E5DA83397798862602BB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_882149E04EA7E5DA83397798862602BB");

	UStoreBigMedicCard_C_OnFailure_882149E04EA7E5DA83397798862602BB_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_882149E04EA7E5DA83397798862602BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::OnSuccess_882149E04EA7E5DA83397798862602BB(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_882149E04EA7E5DA83397798862602BB");

	UStoreBigMedicCard_C_OnSuccess_882149E04EA7E5DA83397798862602BB_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStoreBigMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreBigMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStoreBigMedicCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.SetIndex");

	UStoreBigMedicCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UStoreBigMedicCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.SetEventHandler");

	UStoreBigMedicCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.SetIsSelected");

	UStoreBigMedicCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.HoverSelect");

	UStoreBigMedicCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.HoverDeselect");

	UStoreBigMedicCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.ChangeValue");

	UStoreBigMedicCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.SetFocus");

	UStoreBigMedicCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.RemoveFocus");

	UStoreBigMedicCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnClick");

	UStoreBigMedicCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreBigMedicCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.Construct");

	UStoreBigMedicCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreBigMedicCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.NotEvent");

	UStoreBigMedicCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.PreConstruct");

	UStoreBigMedicCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.StoreRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Store_C**             Store                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStoreBigMedicCard_C::StoreRef(class UW_Store_C** Store)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.StoreRef");

	UStoreBigMedicCard_C_StoreRef_Params params;
	params.Store = Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.UpdateStoreBigMedicCard
// (BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::UpdateStoreBigMedicCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.UpdateStoreBigMedicCard");

	UStoreBigMedicCard_C_UpdateStoreBigMedicCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.ExecuteUbergraph_StoreBigMedicCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreBigMedicCard_C::ExecuteUbergraph_StoreBigMedicCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.ExecuteUbergraph_StoreBigMedicCard");

	UStoreBigMedicCard_C_ExecuteUbergraph_StoreBigMedicCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnUnhover__DelegateSignature");

	UStoreBigMedicCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnHover__DelegateSignature");

	UStoreBigMedicCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreBigMedicCard.StoreBigMedicCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStoreBigMedicCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreBigMedicCard.StoreBigMedicCard_C.OnClicked__DelegateSignature");

	UStoreBigMedicCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

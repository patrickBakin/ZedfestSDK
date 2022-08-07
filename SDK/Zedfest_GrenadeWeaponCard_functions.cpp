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

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIsSelected");

	UGrenadeWeaponCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetEventHandler");

	UGrenadeWeaponCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIndex");

	UGrenadeWeaponCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void UGrenadeWeaponCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetNavigationAction");

	UGrenadeWeaponCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_69BAE37F476875AA8ACFE9961848A288
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::OnFailure_69BAE37F476875AA8ACFE9961848A288(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_69BAE37F476875AA8ACFE9961848A288");

	UGrenadeWeaponCard_C_OnFailure_69BAE37F476875AA8ACFE9961848A288_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_69BAE37F476875AA8ACFE9961848A288
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::OnSuccess_69BAE37F476875AA8ACFE9961848A288(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_69BAE37F476875AA8ACFE9961848A288");

	UGrenadeWeaponCard_C_OnSuccess_69BAE37F476875AA8ACFE9961848A288_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_F9573BBC4579C8BE884954A8378ECF58
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnFailure_F9573BBC4579C8BE884954A8378ECF58()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_F9573BBC4579C8BE884954A8378ECF58");

	UGrenadeWeaponCard_C_OnFailure_F9573BBC4579C8BE884954A8378ECF58_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_F9573BBC4579C8BE884954A8378ECF58
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnSuccess_F9573BBC4579C8BE884954A8378ECF58()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_F9573BBC4579C8BE884954A8378ECF58");

	UGrenadeWeaponCard_C_OnSuccess_F9573BBC4579C8BE884954A8378ECF58_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.ChangeValue");

	UGrenadeWeaponCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.PreConstruct");

	UGrenadeWeaponCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGrenadeWeaponCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIndex");

	UGrenadeWeaponCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGrenadeWeaponCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetEventHandler");

	UGrenadeWeaponCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIsSelected");

	UGrenadeWeaponCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverSelect");

	UGrenadeWeaponCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverDeselect");

	UGrenadeWeaponCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetFocus");

	UGrenadeWeaponCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.RemoveFocus");

	UGrenadeWeaponCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClick");

	UGrenadeWeaponCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGrenadeWeaponCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.Construct");

	UGrenadeWeaponCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.NotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGrenadeWeaponCard_C::NotEvent(struct FText* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.NotEvent");

	UGrenadeWeaponCard_C_NotEvent_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.RefreshGrenadeWeaponCard
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::RefreshGrenadeWeaponCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.RefreshGrenadeWeaponCard");

	UGrenadeWeaponCard_C_RefreshGrenadeWeaponCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_4");

	UGrenadeWeaponCard_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_23
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::CustomEvent_23()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_23");

	UGrenadeWeaponCard_C_CustomEvent_23_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_12
// (BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::CustomEvent_12()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_12");

	UGrenadeWeaponCard_C_CustomEvent_12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.ExecuteUbergraph_GrenadeWeaponCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeWeaponCard_C::ExecuteUbergraph_GrenadeWeaponCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.ExecuteUbergraph_GrenadeWeaponCard");

	UGrenadeWeaponCard_C_ExecuteUbergraph_GrenadeWeaponCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnUnhover__DelegateSignature");

	UGrenadeWeaponCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnHover__DelegateSignature");

	UGrenadeWeaponCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeWeaponCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClicked__DelegateSignature");

	UGrenadeWeaponCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

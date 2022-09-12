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

// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::GetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIsSelected");

	ULoadOutPreviewCard_C_GetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C* Event_Handler                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::GetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetEventHandler");

	ULoadOutPreviewCard_C_GetEventHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Handler != nullptr)
		*Event_Handler = params.Event_Handler;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::GetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetIndex");

	ULoadOutPreviewCard_C_GetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
	if (StepIndex != nullptr)
		*StepIndex = params.StepIndex;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetNavigationAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemActionStruct    Action                         (Parm, OutParm, ZeroConstructor)

void ULoadOutPreviewCard_C::GetNavigationAction(struct FNavItemActionStruct* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.GetNavigationAction");

	ULoadOutPreviewCard_C_GetNavigationAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverSelect
// (BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::HoverSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverSelect");

	ULoadOutPreviewCard_C_HoverSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverDeselect
// (BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::HoverDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.HoverDeselect");

	ULoadOutPreviewCard_C_HoverDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.ChangeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Right                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::ChangeValue(bool* Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.ChangeValue");

	ULoadOutPreviewCard_C_ChangeValue_Params params;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetFocus");

	ULoadOutPreviewCard_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.RemoveFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::RemoveFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.RemoveFocus");

	ULoadOutPreviewCard_C_RemoveFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::SetIsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIsSelected");

	ULoadOutPreviewCard_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClick
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClick");

	ULoadOutPreviewCard_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetEventHandler
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_navset_event_handler_C** Event_Handler                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ULoadOutPreviewCard_C::SetEventHandler(class UBP_navset_event_handler_C** Event_Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetEventHandler");

	ULoadOutPreviewCard_C_SetEventHandler_Params params;
	params.Event_Handler = Event_Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadOutPreviewCard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.Construct");

	ULoadOutPreviewCard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.LoadOutInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           WeaponInt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarities>*    Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InventoryBarSlot               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::LoadOutInfo(struct FText* WeaponName, class UTexture2D** Texture, struct FSlateColor* Color, int* WeaponInt, TEnumAsByte<EItemRarities>* Rarity, int* InventoryBarSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.LoadOutInfo");

	ULoadOutPreviewCard_C_LoadOutInfo_Params params;
	params.WeaponName = WeaponName;
	params.Texture = Texture;
	params.Color = Color;
	params.WeaponInt = WeaponInt;
	params.Rarity = Rarity;
	params.InventoryBarSlot = InventoryBarSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.PreConstruct");

	ULoadOutPreviewCard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::SetIndex(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.SetIndex");

	ULoadOutPreviewCard_C_SetIndex_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULoadOutPreviewCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULoadOutPreviewCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULoadOutPreviewCard_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULoadOutPreviewCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.ExecuteUbergraph_LoadOutPreviewCard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoadOutPreviewCard_C::ExecuteUbergraph_LoadOutPreviewCard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.ExecuteUbergraph_LoadOutPreviewCard");

	ULoadOutPreviewCard_C_ExecuteUbergraph_LoadOutPreviewCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::OnUnhover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnUnhover__DelegateSignature");

	ULoadOutPreviewCard_C_OnUnhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::OnHover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnHover__DelegateSignature");

	ULoadOutPreviewCard_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULoadOutPreviewCard_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoadOutPreviewCard.LoadOutPreviewCard_C.OnClicked__DelegateSignature");

	ULoadOutPreviewCard_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

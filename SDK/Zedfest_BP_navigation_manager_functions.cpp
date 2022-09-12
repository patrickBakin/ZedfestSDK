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

// Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentStep                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::GetCurrentStep(int* CurrentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep");

	UBP_navigation_manager_C_GetCurrentStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentStep != nullptr)
		*CurrentStep = params.CurrentStep;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::NavigateTo(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo");

	UBP_navigation_manager_C_NavigateTo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                CustomAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_navigation_manager_C::CustomNavigation(struct FString* CustomAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation");

	UBP_navigation_manager_C_CustomNavigation_Params params;
	params.CustomAction = CustomAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FNavItemStruct>  NavigableItemArray             (Parm, OutParm, ZeroConstructor)

void UBP_navigation_manager_C::GetNavigableItemList(TArray<struct FNavItemStruct>* NavigableItemArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList");

	UBP_navigation_manager_C_GetNavigableItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavigableItemArray != nullptr)
		*NavigableItemArray = params.NavigableItemArray;
}


// Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EscKeyPress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::RemoveUnfocusedSteps(bool* EscKeyPress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps");

	UBP_navigation_manager_C_RemoveUnfocusedSteps_Params params;
	params.EscKeyPress = EscKeyPress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OverrideEscape                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::SetOverrideEscape(bool* OverrideEscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape");

	UBP_navigation_manager_C_SetOverrideEscape_Params params;
	params.OverrideEscape = OverrideEscape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          RemoveFromArrayOnly            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::Remove(int* StepIndex, bool* RemoveFromArrayOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.Remove");

	UBP_navigation_manager_C_Remove_Params params;
	params.StepIndex = StepIndex;
	params.RemoveFromArrayOnly = RemoveFromArrayOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::SimulateClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick");

	UBP_navigation_manager_C_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Decrease                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::UpdateValue(bool* Decrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue");

	UBP_navigation_manager_C_UpdateValue_Params params;
	params.Decrease = Decrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::CycleFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst");

	UBP_navigation_manager_C_CycleFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.CycleLast
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::CycleLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.CycleLast");

	UBP_navigation_manager_C_CycleLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.Navigate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   PressedKey                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FKey>            ExpectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ENavActionTypes>*  ActionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                CustomAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_navigation_manager_C::Navigate(struct FKey* PressedKey, TEnumAsByte<ENavActionTypes>* ActionType, struct FString* CustomAction, TArray<struct FKey>* ExpectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.Navigate");

	UBP_navigation_manager_C_Navigate_Params params;
	params.PressedKey = PressedKey;
	params.ActionType = ActionType;
	params.CustomAction = CustomAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpectedKey != nullptr)
		*ExpectedKey = params.ExpectedKey;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::NavigateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight");

	UBP_navigation_manager_C_NavigateRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::NavigateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft");

	UBP_navigation_manager_C_NavigateLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::NavigateDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown");

	UBP_navigation_manager_C_NavigateDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::NavigateUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp");

	UBP_navigation_manager_C_NavigateUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::NavItemMouseUnhover(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover");

	UBP_navigation_manager_C_NavItemMouseUnhover_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::NavItemMouseHover(int* SelectedIndex, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover");

	UBP_navigation_manager_C_NavItemMouseHover_Params params;
	params.SelectedIndex = SelectedIndex;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::SetNavigationFocus(bool* Clear, int* StepIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus");

	UBP_navigation_manager_C_SetNavigationFocus_Params params;
	params.Clear = Clear;
	params.StepIndex = StepIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Box                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool*                          Vertical                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FWidgetFix>      Navigable_Widgets              (Parm, OutParm, ZeroConstructor)

void UBP_navigation_manager_C::GetNavItemsFromContainer(bool* Vertical, class UWidget** Box, TArray<struct FWidgetFix>* Navigable_Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer");

	UBP_navigation_manager_C_GetNavItemsFromContainer_Params params;
	params.Vertical = Vertical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Box != nullptr)
		*Box = params.Box;
	if (Navigable_Widgets != nullptr)
		*Navigable_Widgets = params.Navigable_Widgets;
}


// Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNavItemStruct          Nav_Item                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FWidgetFix>      Final_Array                    (Parm, OutParm, ZeroConstructor)

void UBP_navigation_manager_C::AddToNavigableArray(struct FNavItemStruct* Nav_Item, TArray<struct FWidgetFix>* Final_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray");

	UBP_navigation_manager_C_AddToNavigableArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nav_Item != nullptr)
		*Nav_Item = params.Nav_Item;
	if (Final_Array != nullptr)
		*Final_Array = params.Final_Array;
}


// Function BP_navigation_manager.BP_navigation_manager_C.ModifyNavigableArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StepIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWidgetFix*             ItemToInsert                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_navigation_manager_C::ModifyNavigableArray(int* StepIndex, int* ItemIndex, bool* Remove, struct FWidgetFix* ItemToInsert)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.ModifyNavigableArray");

	UBP_navigation_manager_C_ModifyNavigableArray_Params params;
	params.StepIndex = StepIndex;
	params.ItemIndex = ItemIndex;
	params.Remove = Remove;
	params.ItemToInsert = ItemToInsert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.OnInput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBP_navigation_manager_C::OnInput(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnInput");

	UBP_navigation_manager_C_OnInput_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::OnNavigation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature");

	UBP_navigation_manager_C_OnNavigation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::OnOverrideEscape__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature");

	UBP_navigation_manager_C_OnOverrideEscape__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::OnEscapeWhenOverrideEnabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature");

	UBP_navigation_manager_C_OnEscapeWhenOverrideEnabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_navigation_manager_C::OnEscape__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature");

	UBP_navigation_manager_C_OnEscape__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

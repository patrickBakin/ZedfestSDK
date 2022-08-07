#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep
struct UBP_navigation_manager_C_GetCurrentStep_Params
{
	int                                                CurrentStep;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo
struct UBP_navigation_manager_C_NavigateTo_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation
struct UBP_navigation_manager_C_CustomNavigation_Params
{
	struct FString*                                    CustomAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList
struct UBP_navigation_manager_C_GetNavigableItemList_Params
{
	TArray<struct FNavItemStruct>                      NavigableItemArray;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps
struct UBP_navigation_manager_C_RemoveUnfocusedSteps_Params
{
	bool*                                              EscKeyPress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape
struct UBP_navigation_manager_C_SetOverrideEscape_Params
{
	bool*                                              OverrideEscape;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.Remove
struct UBP_navigation_manager_C_Remove_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              RemoveFromArrayOnly;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick
struct UBP_navigation_manager_C_SimulateClick_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue
struct UBP_navigation_manager_C_UpdateValue_Params
{
	bool*                                              Decrease;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst
struct UBP_navigation_manager_C_CycleFirst_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.CycleLast
struct UBP_navigation_manager_C_CycleLast_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.Navigate
struct UBP_navigation_manager_C_Navigate_Params
{
	struct FKey*                                       PressedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FKey>                                ExpectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ENavActionTypes>*                      ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    CustomAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight
struct UBP_navigation_manager_C_NavigateRight_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft
struct UBP_navigation_manager_C_NavigateLeft_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown
struct UBP_navigation_manager_C_NavigateDown_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp
struct UBP_navigation_manager_C_NavigateUp_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover
struct UBP_navigation_manager_C_NavItemMouseUnhover_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover
struct UBP_navigation_manager_C_NavItemMouseHover_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus
struct UBP_navigation_manager_C_SetNavigationFocus_Params
{
	bool*                                              Clear;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer
struct UBP_navigation_manager_C_GetNavItemsFromContainer_Params
{
	class UWidget*                                     Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool*                                              Vertical;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FWidgetFix>                          Navigable_Widgets;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray
struct UBP_navigation_manager_C_AddToNavigableArray_Params
{
	struct FNavItemStruct                              Nav_Item;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FWidgetFix>                          Final_Array;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_navigation_manager.BP_navigation_manager_C.ModifyNavigableArray
struct UBP_navigation_manager_C_ModifyNavigableArray_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWidgetFix*                                 ItemToInsert;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_navigation_manager.BP_navigation_manager_C.OnInput
struct UBP_navigation_manager_C_OnInput_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature
struct UBP_navigation_manager_C_OnNavigation__DelegateSignature_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature
struct UBP_navigation_manager_C_OnOverrideEscape__DelegateSignature_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature
struct UBP_navigation_manager_C_OnEscapeWhenOverrideEnabled__DelegateSignature_Params
{
};

// Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature
struct UBP_navigation_manager_C_OnEscape__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

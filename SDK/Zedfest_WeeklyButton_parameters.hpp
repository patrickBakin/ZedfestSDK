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

// Function WeeklyButton.WeeklyButton_C.GetNavigationAction
struct UWeeklyButton_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WeeklyButton.WeeklyButton_C.GetIndex
struct UWeeklyButton_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.GetEventHandler
struct UWeeklyButton_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.GetIsSelected
struct UWeeklyButton_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.UpdateButtonStyle
struct UWeeklyButton_C_UpdateButtonStyle_Params
{
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.SetIsActive
struct UWeeklyButton_C_SetIsActive_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.ChangeValue
struct UWeeklyButton_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.PreConstruct
struct UWeeklyButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWeeklyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWeeklyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWeeklyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UWeeklyButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.HoverSelect
struct UWeeklyButton_C_HoverSelect_Params
{
};

// Function WeeklyButton.WeeklyButton_C.HoverDeselect
struct UWeeklyButton_C_HoverDeselect_Params
{
};

// Function WeeklyButton.WeeklyButton_C.SetIsSelected
struct UWeeklyButton_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.OnClick
struct UWeeklyButton_C_OnClick_Params
{
};

// Function WeeklyButton.WeeklyButton_C.SetEventHandler
struct UWeeklyButton_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.SetIndex
struct UWeeklyButton_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.SetFocus
struct UWeeklyButton_C_SetFocus_Params
{
};

// Function WeeklyButton.WeeklyButton_C.RemoveFocus
struct UWeeklyButton_C_RemoveFocus_Params
{
};

// Function WeeklyButton.WeeklyButton_C.Construct
struct UWeeklyButton_C_Construct_Params
{
};

// Function WeeklyButton.WeeklyButton_C.ExecuteUbergraph_WeeklyButton
struct UWeeklyButton_C_ExecuteUbergraph_WeeklyButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeeklyButton.WeeklyButton_C.OnUnhover__DelegateSignature
struct UWeeklyButton_C_OnUnhover__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.OnHover__DelegateSignature
struct UWeeklyButton_C_OnHover__DelegateSignature_Params
{
};

// Function WeeklyButton.WeeklyButton_C.OnClicked__DelegateSignature
struct UWeeklyButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

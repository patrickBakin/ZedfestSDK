#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrestigeButton.PrestigeButton_C.GetNavigationAction
struct UPrestigeButton_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function PrestigeButton.PrestigeButton_C.GetIndex
struct UPrestigeButton_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.GetEventHandler
struct UPrestigeButton_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.GetIsSelected
struct UPrestigeButton_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.Get_PrestigeCost_Text_1
struct UPrestigeButton_C_Get_PrestigeCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrestigeButton.PrestigeButton_C.UpdateButtonStyle
struct UPrestigeButton_C_UpdateButtonStyle_Params
{
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.SetIsActive
struct UPrestigeButton_C_SetIsActive_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.ChangeValue
struct UPrestigeButton_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.PreConstruct
struct UPrestigeButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPrestigeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPrestigeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UPrestigeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UPrestigeButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.HoverSelect
struct UPrestigeButton_C_HoverSelect_Params
{
};

// Function PrestigeButton.PrestigeButton_C.HoverDeselect
struct UPrestigeButton_C_HoverDeselect_Params
{
};

// Function PrestigeButton.PrestigeButton_C.SetIsSelected
struct UPrestigeButton_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.OnClick
struct UPrestigeButton_C_OnClick_Params
{
};

// Function PrestigeButton.PrestigeButton_C.SetEventHandler
struct UPrestigeButton_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.SetIndex
struct UPrestigeButton_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.SetFocus
struct UPrestigeButton_C_SetFocus_Params
{
};

// Function PrestigeButton.PrestigeButton_C.RemoveFocus
struct UPrestigeButton_C_RemoveFocus_Params
{
};

// Function PrestigeButton.PrestigeButton_C.ButtonText
struct UPrestigeButton_C_ButtonText_Params
{
	struct FText*                                      ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PrestigeButton.PrestigeButton_C.Construct
struct UPrestigeButton_C_Construct_Params
{
};

// Function PrestigeButton.PrestigeButton_C.ExecuteUbergraph_PrestigeButton
struct UPrestigeButton_C_ExecuteUbergraph_PrestigeButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrestigeButton.PrestigeButton_C.OnUnhover__DelegateSignature
struct UPrestigeButton_C_OnUnhover__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.OnHover__DelegateSignature
struct UPrestigeButton_C_OnHover__DelegateSignature_Params
{
};

// Function PrestigeButton.PrestigeButton_C.OnClicked__DelegateSignature
struct UPrestigeButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

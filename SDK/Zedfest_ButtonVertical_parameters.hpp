#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function ButtonVertical.ButtonVertical_C.GetNavigationAction
struct UButtonVertical_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ButtonVertical.ButtonVertical_C.GetIndex
struct UButtonVertical_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.GetEventHandler
struct UButtonVertical_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.GetIsSelected
struct UButtonVertical_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.VerticalText
struct UButtonVertical_C_VerticalText_Params
{
	struct FString*                                    Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LocalString1;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function ButtonVertical.ButtonVertical_C.UpdateButtonStyle
struct UButtonVertical_C_UpdateButtonStyle_Params
{
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.SetIsActive
struct UButtonVertical_C_SetIsActive_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.ChangeValue
struct UButtonVertical_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.PreConstruct
struct UButtonVertical_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UButtonVertical_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.HoverSelect
struct UButtonVertical_C_HoverSelect_Params
{
};

// Function ButtonVertical.ButtonVertical_C.HoverDeselect
struct UButtonVertical_C_HoverDeselect_Params
{
};

// Function ButtonVertical.ButtonVertical_C.SetIsSelected
struct UButtonVertical_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.OnClick
struct UButtonVertical_C_OnClick_Params
{
};

// Function ButtonVertical.ButtonVertical_C.SetEventHandler
struct UButtonVertical_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.SetIndex
struct UButtonVertical_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.SetFocus
struct UButtonVertical_C_SetFocus_Params
{
};

// Function ButtonVertical.ButtonVertical_C.RemoveFocus
struct UButtonVertical_C_RemoveFocus_Params
{
};

// Function ButtonVertical.ButtonVertical_C.ExecuteUbergraph_ButtonVertical
struct UButtonVertical_C_ExecuteUbergraph_ButtonVertical_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ButtonVertical.ButtonVertical_C.OnUnhover__DelegateSignature
struct UButtonVertical_C_OnUnhover__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.OnHover__DelegateSignature
struct UButtonVertical_C_OnHover__DelegateSignature_Params
{
};

// Function ButtonVertical.ButtonVertical_C.OnClicked__DelegateSignature
struct UButtonVertical_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

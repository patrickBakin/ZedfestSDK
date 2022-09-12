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

// Function MapButton.MapButton_C.GetNavigationAction
struct UMapButton_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapButton.MapButton_C.GetIndex
struct UMapButton_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.GetEventHandler
struct UMapButton_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.GetIsSelected
struct UMapButton_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.UpdateButtonStyle
struct UMapButton_C_UpdateButtonStyle_Params
{
	struct FLinearColor*                               Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.SetIsActive
struct UMapButton_C_SetIsActive_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.ChangeValue
struct UMapButton_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.PreConstruct
struct UMapButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMapButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMapButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMapButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UMapButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.HoverSelect
struct UMapButton_C_HoverSelect_Params
{
};

// Function MapButton.MapButton_C.HoverDeselect
struct UMapButton_C_HoverDeselect_Params
{
};

// Function MapButton.MapButton_C.SetIsSelected
struct UMapButton_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.OnClick
struct UMapButton_C_OnClick_Params
{
};

// Function MapButton.MapButton_C.SetEventHandler
struct UMapButton_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MapButton.MapButton_C.SetIndex
struct UMapButton_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.SetFocus
struct UMapButton_C_SetFocus_Params
{
};

// Function MapButton.MapButton_C.RemoveFocus
struct UMapButton_C_RemoveFocus_Params
{
};

// Function MapButton.MapButton_C.Construct
struct UMapButton_C_Construct_Params
{
};

// Function MapButton.MapButton_C.ExecuteUbergraph_MapButton
struct UMapButton_C_ExecuteUbergraph_MapButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapButton.MapButton_C.OnUnhover__DelegateSignature
struct UMapButton_C_OnUnhover__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.OnHover__DelegateSignature
struct UMapButton_C_OnHover__DelegateSignature_Params
{
};

// Function MapButton.MapButton_C.OnClicked__DelegateSignature
struct UMapButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

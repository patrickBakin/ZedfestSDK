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

// Function ClassSelectionCard.ClassSelectionCard_C.GetIsSelected
struct UClassSelectionCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.GetEventHandler
struct UClassSelectionCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.GetIndex
struct UClassSelectionCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.GetNavigationAction
struct UClassSelectionCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ClassSelectionCard.ClassSelectionCard_C.ChangeValue
struct UClassSelectionCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.PreConstruct
struct UClassSelectionCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UClassSelectionCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UClassSelectionCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UClassSelectionCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.SetIndex
struct UClassSelectionCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.SetEventHandler
struct UClassSelectionCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.SetIsSelected
struct UClassSelectionCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.HoverSelect
struct UClassSelectionCard_C_HoverSelect_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.HoverDeselect
struct UClassSelectionCard_C_HoverDeselect_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.SetFocus
struct UClassSelectionCard_C_SetFocus_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.RemoveFocus
struct UClassSelectionCard_C_RemoveFocus_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.OnClick
struct UClassSelectionCard_C_OnClick_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.ExecuteUbergraph_ClassSelectionCard
struct UClassSelectionCard_C_ExecuteUbergraph_ClassSelectionCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassSelectionCard.ClassSelectionCard_C.OnUnhover__DelegateSignature
struct UClassSelectionCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.OnHover__DelegateSignature
struct UClassSelectionCard_C_OnHover__DelegateSignature_Params
{
};

// Function ClassSelectionCard.ClassSelectionCard_C.OnClicked__DelegateSignature
struct UClassSelectionCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

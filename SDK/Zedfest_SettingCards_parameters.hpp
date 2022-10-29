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

// Function SettingCards.SettingCards_C.GetIsSelected
struct USettingCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.GetEventHandler
struct USettingCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.GetIndex
struct USettingCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.GetNavigationAction
struct USettingCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SettingCards.SettingCards_C.ChangeValue
struct USettingCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.PreConstruct
struct USettingCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingCards.SettingCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct USettingCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingCards.SettingCards_C.SetIndex
struct USettingCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.SetEventHandler
struct USettingCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.SetIsSelected
struct USettingCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.HoverSelect
struct USettingCards_C_HoverSelect_Params
{
};

// Function SettingCards.SettingCards_C.HoverDeselect
struct USettingCards_C_HoverDeselect_Params
{
};

// Function SettingCards.SettingCards_C.SetFocus
struct USettingCards_C_SetFocus_Params
{
};

// Function SettingCards.SettingCards_C.RemoveFocus
struct USettingCards_C_RemoveFocus_Params
{
};

// Function SettingCards.SettingCards_C.OnClick
struct USettingCards_C_OnClick_Params
{
};

// Function SettingCards.SettingCards_C.ExecuteUbergraph_SettingCards
struct USettingCards_C_ExecuteUbergraph_SettingCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingCards.SettingCards_C.OnUnhover__DelegateSignature
struct USettingCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function SettingCards.SettingCards_C.OnHover__DelegateSignature
struct USettingCards_C_OnHover__DelegateSignature_Params
{
};

// Function SettingCards.SettingCards_C.OnClicked__DelegateSignature
struct USettingCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

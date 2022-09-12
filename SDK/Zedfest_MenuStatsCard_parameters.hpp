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

// Function MenuStatsCard.MenuStatsCard_C.GetIsSelected
struct UMenuStatsCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.GetEventHandler
struct UMenuStatsCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.GetIndex
struct UMenuStatsCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.GetNavigationAction
struct UMenuStatsCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.SetIndex
struct UMenuStatsCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.SetEventHandler
struct UMenuStatsCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.SetIsSelected
struct UMenuStatsCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.HoverSelect
struct UMenuStatsCard_C_HoverSelect_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.HoverDeselect
struct UMenuStatsCard_C_HoverDeselect_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.PreConstruct
struct UMenuStatsCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.SetFocus
struct UMenuStatsCard_C_SetFocus_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.RemoveFocus
struct UMenuStatsCard_C_RemoveFocus_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.OnClick
struct UMenuStatsCard_C_OnClick_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.ChangeValue
struct UMenuStatsCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.Construct
struct UMenuStatsCard_C_Construct_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.NotEvent
struct UMenuStatsCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MenuStatsCard.MenuStatsCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMenuStatsCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.ExecuteUbergraph_MenuStatsCard
struct UMenuStatsCard_C_ExecuteUbergraph_MenuStatsCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuStatsCard.MenuStatsCard_C.OnUnhover__DelegateSignature
struct UMenuStatsCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.OnHover__DelegateSignature
struct UMenuStatsCard_C_OnHover__DelegateSignature_Params
{
};

// Function MenuStatsCard.MenuStatsCard_C.OnClicked__DelegateSignature
struct UMenuStatsCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

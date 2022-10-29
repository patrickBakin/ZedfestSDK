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

// Function LeaderBoardCards.LeaderBoardCards_C.GetIsSelected
struct ULeaderBoardCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.GetEventHandler
struct ULeaderBoardCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.GetIndex
struct ULeaderBoardCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.GetNavigationAction
struct ULeaderBoardCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LeaderBoardCards.LeaderBoardCards_C.HoverSelect
struct ULeaderBoardCards_C_HoverSelect_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.HoverDeselect
struct ULeaderBoardCards_C_HoverDeselect_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.SetIsSelected
struct ULeaderBoardCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.ChangeValue
struct ULeaderBoardCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.SetFocus
struct ULeaderBoardCards_C_SetFocus_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.RemoveFocus
struct ULeaderBoardCards_C_RemoveFocus_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.OnClick
struct ULeaderBoardCards_C_OnClick_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.Construct
struct ULeaderBoardCards_C_Construct_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.NotEvent
struct ULeaderBoardCards_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeaderBoardCards.LeaderBoardCards_C.SetEventHandler
struct ULeaderBoardCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.SetIndex
struct ULeaderBoardCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct ULeaderBoardCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.PreConstruct
struct ULeaderBoardCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.ExecuteUbergraph_LeaderBoardCards
struct ULeaderBoardCards_C_ExecuteUbergraph_LeaderBoardCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderBoardCards.LeaderBoardCards_C.OnUnhover__DelegateSignature
struct ULeaderBoardCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.OnHover__DelegateSignature
struct ULeaderBoardCards_C_OnHover__DelegateSignature_Params
{
};

// Function LeaderBoardCards.LeaderBoardCards_C.OnClicked__DelegateSignature
struct ULeaderBoardCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

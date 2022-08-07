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

// Function MapVoteCards.MapVoteCards_C.GetIsSelected
struct UMapVoteCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.GetEventHandler
struct UMapVoteCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.GetIndex
struct UMapVoteCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.GetNavigationAction
struct UMapVoteCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MapVoteCards.MapVoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMapVoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapVoteCards.MapVoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMapVoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MapVoteCards.MapVoteCards_C.SetFocus
struct UMapVoteCards_C_SetFocus_Params
{
};

// Function MapVoteCards.MapVoteCards_C.RemoveFocus
struct UMapVoteCards_C_RemoveFocus_Params
{
};

// Function MapVoteCards.MapVoteCards_C.OnClick
struct UMapVoteCards_C_OnClick_Params
{
};

// Function MapVoteCards.MapVoteCards_C.Construct
struct UMapVoteCards_C_Construct_Params
{
};

// Function MapVoteCards.MapVoteCards_C.NotEvent
struct UMapVoteCards_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MapVoteCards.MapVoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMapVoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MapVoteCards.MapVoteCards_C.HoverSelect
struct UMapVoteCards_C_HoverSelect_Params
{
};

// Function MapVoteCards.MapVoteCards_C.PreConstruct
struct UMapVoteCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.ChangeValue
struct UMapVoteCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.SetIsSelected
struct UMapVoteCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.SetEventHandler
struct UMapVoteCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.SetIndex
struct UMapVoteCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.HoverDeselect
struct UMapVoteCards_C_HoverDeselect_Params
{
};

// Function MapVoteCards.MapVoteCards_C.ExecuteUbergraph_MapVoteCards
struct UMapVoteCards_C_ExecuteUbergraph_MapVoteCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MapVoteCards.MapVoteCards_C.OnUnhover__DelegateSignature
struct UMapVoteCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function MapVoteCards.MapVoteCards_C.OnHover__DelegateSignature
struct UMapVoteCards_C_OnHover__DelegateSignature_Params
{
};

// Function MapVoteCards.MapVoteCards_C.OnClicked__DelegateSignature
struct UMapVoteCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function EmoteCards.EmoteCards_C.GetIsSelected
struct UEmoteCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.GetEventHandler
struct UEmoteCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.GetIndex
struct UEmoteCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.GetNavigationAction
struct UEmoteCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function EmoteCards.EmoteCards_C.ChangeValue
struct UEmoteCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.PreConstruct
struct UEmoteCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EmoteCards.EmoteCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UEmoteCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function EmoteCards.EmoteCards_C.SetIndex
struct UEmoteCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.SetEventHandler
struct UEmoteCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.SetIsSelected
struct UEmoteCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.HoverSelect
struct UEmoteCards_C_HoverSelect_Params
{
};

// Function EmoteCards.EmoteCards_C.HoverDeselect
struct UEmoteCards_C_HoverDeselect_Params
{
};

// Function EmoteCards.EmoteCards_C.SetFocus
struct UEmoteCards_C_SetFocus_Params
{
};

// Function EmoteCards.EmoteCards_C.RemoveFocus
struct UEmoteCards_C_RemoveFocus_Params
{
};

// Function EmoteCards.EmoteCards_C.OnClick
struct UEmoteCards_C_OnClick_Params
{
};

// Function EmoteCards.EmoteCards_C.Construct
struct UEmoteCards_C_Construct_Params
{
};

// Function EmoteCards.EmoteCards_C.NotEvent
struct UEmoteCards_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EmoteCards.EmoteCards_C.CustomEvent_4
struct UEmoteCards_C_CustomEvent_4_Params
{
};

// Function EmoteCards.EmoteCards_C.RefreshEmoteCards
struct UEmoteCards_C_RefreshEmoteCards_Params
{
};

// Function EmoteCards.EmoteCards_C.CustomEvent_3
struct UEmoteCards_C_CustomEvent_3_Params
{
};

// Function EmoteCards.EmoteCards_C.CustomEvent_2
struct UEmoteCards_C_CustomEvent_2_Params
{
};

// Function EmoteCards.EmoteCards_C.ExecuteUbergraph_EmoteCards
struct UEmoteCards_C_ExecuteUbergraph_EmoteCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EmoteCards.EmoteCards_C.OnUnhover__DelegateSignature
struct UEmoteCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function EmoteCards.EmoteCards_C.OnHover__DelegateSignature
struct UEmoteCards_C_OnHover__DelegateSignature_Params
{
};

// Function EmoteCards.EmoteCards_C.OnClicked__DelegateSignature
struct UEmoteCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function CharacterCards.CharacterCards_C.GetIsSelected
struct UCharacterCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.GetEventHandler
struct UCharacterCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.GetIndex
struct UCharacterCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.GetNavigationAction
struct UCharacterCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function CharacterCards.CharacterCards_C.ChangeValue
struct UCharacterCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.PreConstruct
struct UCharacterCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UCharacterCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function CharacterCards.CharacterCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UCharacterCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CharacterCards.CharacterCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UCharacterCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CharacterCards.CharacterCards_C.SetIndex
struct UCharacterCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.SetEventHandler
struct UCharacterCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.SetIsSelected
struct UCharacterCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.HoverSelect
struct UCharacterCards_C_HoverSelect_Params
{
};

// Function CharacterCards.CharacterCards_C.HoverDeselect
struct UCharacterCards_C_HoverDeselect_Params
{
};

// Function CharacterCards.CharacterCards_C.SetFocus
struct UCharacterCards_C_SetFocus_Params
{
};

// Function CharacterCards.CharacterCards_C.RemoveFocus
struct UCharacterCards_C_RemoveFocus_Params
{
};

// Function CharacterCards.CharacterCards_C.OnClick
struct UCharacterCards_C_OnClick_Params
{
};

// Function CharacterCards.CharacterCards_C.Construct
struct UCharacterCards_C_Construct_Params
{
};

// Function CharacterCards.CharacterCards_C.NotEvent
struct UCharacterCards_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterCards.CharacterCards_C.Tick
struct UCharacterCards_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.CustomEvent_4
struct UCharacterCards_C_CustomEvent_4_Params
{
};

// Function CharacterCards.CharacterCards_C.RefreshCharacterCard
struct UCharacterCards_C_RefreshCharacterCard_Params
{
};

// Function CharacterCards.CharacterCards_C.NoClicked_Event_1
struct UCharacterCards_C_NoClicked_Event_1_Params
{
};

// Function CharacterCards.CharacterCards_C.CustomEvent_3
struct UCharacterCards_C_CustomEvent_3_Params
{
};

// Function CharacterCards.CharacterCards_C.CustomEvent_2
struct UCharacterCards_C_CustomEvent_2_Params
{
};

// Function CharacterCards.CharacterCards_C.ExecuteUbergraph_CharacterCards
struct UCharacterCards_C_ExecuteUbergraph_CharacterCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterCards.CharacterCards_C.OnUnhover__DelegateSignature
struct UCharacterCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function CharacterCards.CharacterCards_C.OnHover__DelegateSignature
struct UCharacterCards_C_OnHover__DelegateSignature_Params
{
};

// Function CharacterCards.CharacterCards_C.OnClicked__DelegateSignature
struct UCharacterCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

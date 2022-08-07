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

// Function PerkCard.PerkCard_C.GetIsSelected
struct UPerkCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.GetEventHandler
struct UPerkCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.GetIndex
struct UPerkCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.GetNavigationAction
struct UPerkCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function PerkCard.PerkCard_C.PreConstruct
struct UPerkCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPerkCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PerkCard.PerkCard_C.ResetPerksEvent
struct UPerkCard_C_ResetPerksEvent_Params
{
	int*                                               ClassIntSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPerkCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PerkCard.PerkCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UPerkCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PerkCard.PerkCard_C.SetIndex
struct UPerkCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.SetEventHandler
struct UPerkCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.SetIsSelected
struct UPerkCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.HoverSelect
struct UPerkCard_C_HoverSelect_Params
{
};

// Function PerkCard.PerkCard_C.HoverDeselect
struct UPerkCard_C_HoverDeselect_Params
{
};

// Function PerkCard.PerkCard_C.Tick
struct UPerkCard_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.ChangeValue
struct UPerkCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.NotEvent
struct UPerkCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PerkCard.PerkCard_C.Construct
struct UPerkCard_C_Construct_Params
{
};

// Function PerkCard.PerkCard_C.OnClick
struct UPerkCard_C_OnClick_Params
{
};

// Function PerkCard.PerkCard_C.RemoveFocus
struct UPerkCard_C_RemoveFocus_Params
{
};

// Function PerkCard.PerkCard_C.SetFocus
struct UPerkCard_C_SetFocus_Params
{
};

// Function PerkCard.PerkCard_C.ExecuteUbergraph_PerkCard
struct UPerkCard_C_ExecuteUbergraph_PerkCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkCard.PerkCard_C.OnUnhover__DelegateSignature
struct UPerkCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function PerkCard.PerkCard_C.OnHover__DelegateSignature
struct UPerkCard_C_OnHover__DelegateSignature_Params
{
};

// Function PerkCard.PerkCard_C.OnClicked__DelegateSignature
struct UPerkCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

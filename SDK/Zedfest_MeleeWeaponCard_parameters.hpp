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

// Function MeleeWeaponCard.MeleeWeaponCard_C.GetIsSelected
struct UMeleeWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.GetEventHandler
struct UMeleeWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.GetIndex
struct UMeleeWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.GetNavigationAction
struct UMeleeWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_PrestigeLvlText_Text_1
struct UMeleeWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_NeededXp_Text_1
struct UMeleeWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_CurrentXP_Text_1
struct UMeleeWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct UMeleeWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.ChangeValue
struct UMeleeWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.SetIndex
struct UMeleeWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.SetEventHandler
struct UMeleeWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.SetIsSelected
struct UMeleeWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.HoverSelect
struct UMeleeWeaponCard_C_HoverSelect_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.HoverDeselect
struct UMeleeWeaponCard_C_HoverDeselect_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.SetFocus
struct UMeleeWeaponCard_C_SetFocus_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.RemoveFocus
struct UMeleeWeaponCard_C_RemoveFocus_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.OnClick
struct UMeleeWeaponCard_C_OnClick_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.Construct
struct UMeleeWeaponCard_C_Construct_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.NotEvent
struct UMeleeWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.RefreshMeleeWeaponCard
struct UMeleeWeaponCard_C_RefreshMeleeWeaponCard_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.EventWeaponLvl
struct UMeleeWeaponCard_C_EventWeaponLvl_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.UpgradeNoCLickedEvent
struct UMeleeWeaponCard_C_UpgradeNoCLickedEvent_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.UpdradeYesClickedEvent
struct UMeleeWeaponCard_C_UpdradeYesClickedEvent_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_5
struct UMeleeWeaponCard_C_CustomEvent_5_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent
struct UMeleeWeaponCard_C_CustomEvent_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_34
struct UMeleeWeaponCard_C_CustomEvent_34_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_3
struct UMeleeWeaponCard_C_CustomEvent_3_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.CustomEvent_2
struct UMeleeWeaponCard_C_CustomEvent_2_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.ExecuteUbergraph_MeleeWeaponCard
struct UMeleeWeaponCard_C_ExecuteUbergraph_MeleeWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.OnUnhover__DelegateSignature
struct UMeleeWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.OnHover__DelegateSignature
struct UMeleeWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function MeleeWeaponCard.MeleeWeaponCard_C.OnClicked__DelegateSignature
struct UMeleeWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

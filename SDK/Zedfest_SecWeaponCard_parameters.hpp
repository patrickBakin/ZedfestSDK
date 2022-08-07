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

// Function SecWeaponCard.SecWeaponCard_C.GetIsSelected
struct USecWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.GetEventHandler
struct USecWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.GetIndex
struct USecWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.GetNavigationAction
struct USecWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SecWeaponCard.SecWeaponCard_C.Get_PrestigeLvlText_Text_1
struct USecWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SecWeaponCard.SecWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct USecWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.Get_NeededXp_Text_1
struct USecWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SecWeaponCard.SecWeaponCard_C.Get_CurrentXP_Text_1
struct USecWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SecWeaponCard.SecWeaponCard_C.ChangeValue
struct USecWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.SetIndex
struct USecWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.SetEventHandler
struct USecWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.SetIsSelected
struct USecWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.HoverSelect
struct USecWeaponCard_C_HoverSelect_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.HoverDeselect
struct USecWeaponCard_C_HoverDeselect_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.SetFocus
struct USecWeaponCard_C_SetFocus_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.RemoveFocus
struct USecWeaponCard_C_RemoveFocus_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.OnClick
struct USecWeaponCard_C_OnClick_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.Construct
struct USecWeaponCard_C_Construct_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.NotEvent
struct USecWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SecWeaponCard.SecWeaponCard_C.RefreshSecWeaponCard
struct USecWeaponCard_C_RefreshSecWeaponCard_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.EventWeaponLvl
struct USecWeaponCard_C_EventWeaponLvl_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct USecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.UpgradeNoCLickedEvent
struct USecWeaponCard_C_UpgradeNoCLickedEvent_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.UpdradeYesClickedEvent
struct USecWeaponCard_C_UpdradeYesClickedEvent_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_5
struct USecWeaponCard_C_CustomEvent_5_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.CustomEvent
struct USecWeaponCard_C_CustomEvent_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_34
struct USecWeaponCard_C_CustomEvent_34_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_3
struct USecWeaponCard_C_CustomEvent_3_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.CustomEvent_2
struct USecWeaponCard_C_CustomEvent_2_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.ExecuteUbergraph_SecWeaponCard
struct USecWeaponCard_C_ExecuteUbergraph_SecWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SecWeaponCard.SecWeaponCard_C.OnUnhover__DelegateSignature
struct USecWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.OnHover__DelegateSignature
struct USecWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function SecWeaponCard.SecWeaponCard_C.OnClicked__DelegateSignature
struct USecWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

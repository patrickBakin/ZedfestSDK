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

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIsSelected
struct UPrimaryWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetEventHandler
struct UPrimaryWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetIndex
struct UPrimaryWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.GetNavigationAction
struct UPrimaryWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1
struct UPrimaryWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_NeededXp_Text_1
struct UPrimaryWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_CurrentXP_Text_1
struct UPrimaryWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct UPrimaryWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.ChangeValue
struct UPrimaryWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIndex
struct UPrimaryWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetEventHandler
struct UPrimaryWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetIsSelected
struct UPrimaryWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverSelect
struct UPrimaryWeaponCard_C_HoverSelect_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.HoverDeselect
struct UPrimaryWeaponCard_C_HoverDeselect_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.SetFocus
struct UPrimaryWeaponCard_C_SetFocus_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.RemoveFocus
struct UPrimaryWeaponCard_C_RemoveFocus_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClick
struct UPrimaryWeaponCard_C_OnClick_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.Construct
struct UPrimaryWeaponCard_C_Construct_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.NotEvent
struct UPrimaryWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.RefreshPrimaryWeaponCard
struct UPrimaryWeaponCard_C_RefreshPrimaryWeaponCard_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UPrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.EventWeaponLvl
struct UPrimaryWeaponCard_C_EventWeaponLvl_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_4
struct UPrimaryWeaponCard_C_CustomEvent_4_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_23
struct UPrimaryWeaponCard_C_CustomEvent_23_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_12
struct UPrimaryWeaponCard_C_CustomEvent_12_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_5
struct UPrimaryWeaponCard_C_CustomEvent_5_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent
struct UPrimaryWeaponCard_C_CustomEvent_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_34
struct UPrimaryWeaponCard_C_CustomEvent_34_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_3
struct UPrimaryWeaponCard_C_CustomEvent_3_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.CustomEvent_2
struct UPrimaryWeaponCard_C_CustomEvent_2_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.ExecuteUbergraph_PrimaryWeaponCard
struct UPrimaryWeaponCard_C_ExecuteUbergraph_PrimaryWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnUnhover__DelegateSignature
struct UPrimaryWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnHover__DelegateSignature
struct UPrimaryWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function PrimaryWeaponCard.PrimaryWeaponCard_C.OnClicked__DelegateSignature
struct UPrimaryWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

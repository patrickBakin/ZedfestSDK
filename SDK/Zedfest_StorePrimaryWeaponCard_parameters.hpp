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

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIsSelected
struct UStorePrimaryWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetEventHandler
struct UStorePrimaryWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetIndex
struct UStorePrimaryWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetNavigationAction
struct UStorePrimaryWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_PrestigeLvlText_Text_1
struct UStorePrimaryWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_NeededXp_Text_1
struct UStorePrimaryWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_CurrentXP_Text_1
struct UStorePrimaryWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct UStorePrimaryWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.GetBrushColor_1
struct UStorePrimaryWeaponCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Get_WeaponCost_Text_1
struct UStorePrimaryWeaponCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverSelect
struct UStorePrimaryWeaponCard_C_HoverSelect_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.HoverDeselect
struct UStorePrimaryWeaponCard_C_HoverDeselect_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetFocus
struct UStorePrimaryWeaponCard_C_SetFocus_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.RemoveFocus
struct UStorePrimaryWeaponCard_C_RemoveFocus_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClick
struct UStorePrimaryWeaponCard_C_OnClick_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.Construct
struct UStorePrimaryWeaponCard_C_Construct_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.NotEvent
struct UStorePrimaryWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.PreConstruct
struct UStorePrimaryWeaponCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ChangeValue
struct UStorePrimaryWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIsSelected
struct UStorePrimaryWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_5
struct UStorePrimaryWeaponCard_C_CustomEvent_5_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent
struct UStorePrimaryWeaponCard_C_CustomEvent_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetEventHandler
struct UStorePrimaryWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.SetIndex
struct UStorePrimaryWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_34
struct UStorePrimaryWeaponCard_C_CustomEvent_34_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_3
struct UStorePrimaryWeaponCard_C_CustomEvent_3_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.CustomEvent_2
struct UStorePrimaryWeaponCard_C_CustomEvent_2_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.ExecuteUbergraph_StorePrimaryWeaponCard
struct UStorePrimaryWeaponCard_C_ExecuteUbergraph_StorePrimaryWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnUnhover__DelegateSignature
struct UStorePrimaryWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnHover__DelegateSignature
struct UStorePrimaryWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function StorePrimaryWeaponCard.StorePrimaryWeaponCard_C.OnClicked__DelegateSignature
struct UStorePrimaryWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

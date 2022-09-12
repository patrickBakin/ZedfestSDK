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

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIsSelected
struct UStoreMeleeWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetEventHandler
struct UStoreMeleeWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetIndex
struct UStoreMeleeWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetNavigationAction
struct UStoreMeleeWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_PrestigeLvlText_Text_1
struct UStoreMeleeWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_NeededXp_Text_1
struct UStoreMeleeWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_CurrentXP_Text_1
struct UStoreMeleeWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct UStoreMeleeWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.GetBrushColor_1
struct UStoreMeleeWeaponCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Get_WeaponCost_Text_1
struct UStoreMeleeWeaponCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetFocus
struct UStoreMeleeWeaponCard_C_SetFocus_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.RemoveFocus
struct UStoreMeleeWeaponCard_C_RemoveFocus_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClick
struct UStoreMeleeWeaponCard_C_OnClick_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.Construct
struct UStoreMeleeWeaponCard_C_Construct_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.NotEvent
struct UStoreMeleeWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverDeselect
struct UStoreMeleeWeaponCard_C_HoverDeselect_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.HoverSelect
struct UStoreMeleeWeaponCard_C_HoverSelect_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIsSelected
struct UStoreMeleeWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetEventHandler
struct UStoreMeleeWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.SetIndex
struct UStoreMeleeWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreMeleeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.PreConstruct
struct UStoreMeleeWeaponCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ChangeValue
struct UStoreMeleeWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_5
struct UStoreMeleeWeaponCard_C_CustomEvent_5_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent
struct UStoreMeleeWeaponCard_C_CustomEvent_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_34
struct UStoreMeleeWeaponCard_C_CustomEvent_34_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_3
struct UStoreMeleeWeaponCard_C_CustomEvent_3_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.CustomEvent_2
struct UStoreMeleeWeaponCard_C_CustomEvent_2_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.ExecuteUbergraph_StoreMeleeWeaponCard
struct UStoreMeleeWeaponCard_C_ExecuteUbergraph_StoreMeleeWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnUnhover__DelegateSignature
struct UStoreMeleeWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnHover__DelegateSignature
struct UStoreMeleeWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreMeleeWeaponCard.StoreMeleeWeaponCard_C.OnClicked__DelegateSignature
struct UStoreMeleeWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

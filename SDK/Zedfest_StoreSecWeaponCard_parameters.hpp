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

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.GetIsSelected
struct UStoreSecWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.GetEventHandler
struct UStoreSecWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.GetIndex
struct UStoreSecWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.GetNavigationAction
struct UStoreSecWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Get_PrestigeLvlText_Text_1
struct UStoreSecWeaponCard_C_Get_PrestigeLvlText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Get_NeededXp_Text_1
struct UStoreSecWeaponCard_C_Get_NeededXp_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Get_CurrentXP_Text_1
struct UStoreSecWeaponCard_C_Get_CurrentXP_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Get_XP_ProgressBar_Percent_1
struct UStoreSecWeaponCard_C_Get_XP_ProgressBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.GetBrushColor_1
struct UStoreSecWeaponCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Get_WeaponCost_Text_1
struct UStoreSecWeaponCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.SetFocus
struct UStoreSecWeaponCard_C_SetFocus_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.RemoveFocus
struct UStoreSecWeaponCard_C_RemoveFocus_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.OnClick
struct UStoreSecWeaponCard_C_OnClick_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.Construct
struct UStoreSecWeaponCard_C_Construct_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.NotEvent
struct UStoreSecWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UStoreSecWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.ChangeValue
struct UStoreSecWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.HoverDeselect
struct UStoreSecWeaponCard_C_HoverDeselect_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.HoverSelect
struct UStoreSecWeaponCard_C_HoverSelect_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.SetIsSelected
struct UStoreSecWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.SetEventHandler
struct UStoreSecWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.CustomEvent_5
struct UStoreSecWeaponCard_C_CustomEvent_5_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.CustomEvent
struct UStoreSecWeaponCard_C_CustomEvent_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.CustomEvent_34
struct UStoreSecWeaponCard_C_CustomEvent_34_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.CustomEvent_3
struct UStoreSecWeaponCard_C_CustomEvent_3_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.CustomEvent_2
struct UStoreSecWeaponCard_C_CustomEvent_2_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.SetIndex
struct UStoreSecWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.ExecuteUbergraph_StoreSecWeaponCard
struct UStoreSecWeaponCard_C_ExecuteUbergraph_StoreSecWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.OnUnhover__DelegateSignature
struct UStoreSecWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.OnHover__DelegateSignature
struct UStoreSecWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreSecWeaponCard.StoreSecWeaponCard_C.OnClicked__DelegateSignature
struct UStoreSecWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

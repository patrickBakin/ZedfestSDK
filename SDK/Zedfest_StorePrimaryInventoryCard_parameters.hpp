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

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIsSelected
struct UStorePrimaryInventoryCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetEventHandler
struct UStorePrimaryInventoryCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetIndex
struct UStorePrimaryInventoryCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetNavigationAction
struct UStorePrimaryInventoryCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetVisibility_1
struct UStorePrimaryInventoryCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetAmmoBrush
struct UStorePrimaryInventoryCard_C_GetAmmoBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SellText
struct UStorePrimaryInventoryCard_C_SellText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.FillUpText
struct UStorePrimaryInventoryCard_C_FillUpText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OneMagText
struct UStorePrimaryInventoryCard_C_OneMagText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_WeaponName
struct UStorePrimaryInventoryCard_C_Get_WeaponName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Get_AmmoText
struct UStorePrimaryInventoryCard_C_Get_AmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.GetBrush_1
struct UStorePrimaryInventoryCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverDeselect
struct UStorePrimaryInventoryCard_C_HoverDeselect_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.HoverSelect
struct UStorePrimaryInventoryCard_C_HoverSelect_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetFocus
struct UStorePrimaryInventoryCard_C_SetFocus_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.RemoveFocus
struct UStorePrimaryInventoryCard_C_RemoveFocus_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClick
struct UStorePrimaryInventoryCard_C_OnClick_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.Construct
struct UStorePrimaryInventoryCard_C_Construct_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.NotEvent
struct UStorePrimaryInventoryCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIsSelected
struct UStorePrimaryInventoryCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetEventHandler
struct UStorePrimaryInventoryCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.SetIndex
struct UStorePrimaryInventoryCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ChangeValue
struct UStorePrimaryInventoryCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UStorePrimaryInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.StoreRef
struct UStorePrimaryInventoryCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.ExecuteUbergraph_StorePrimaryInventoryCard
struct UStorePrimaryInventoryCard_C_ExecuteUbergraph_StorePrimaryInventoryCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnUnhover__DelegateSignature
struct UStorePrimaryInventoryCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnHover__DelegateSignature
struct UStorePrimaryInventoryCard_C_OnHover__DelegateSignature_Params
{
};

// Function StorePrimaryInventoryCard.StorePrimaryInventoryCard_C.OnClicked__DelegateSignature
struct UStorePrimaryInventoryCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

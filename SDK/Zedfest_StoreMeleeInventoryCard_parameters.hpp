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

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIsSelected
struct UStoreMeleeInventoryCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetEventHandler
struct UStoreMeleeInventoryCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetIndex
struct UStoreMeleeInventoryCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetNavigationAction
struct UStoreMeleeInventoryCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetVisibility_1
struct UStoreMeleeInventoryCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SellText
struct UStoreMeleeInventoryCard_C_SellText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_WeaponName
struct UStoreMeleeInventoryCard_C_Get_WeaponName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Get_AmmoText
struct UStoreMeleeInventoryCard_C_Get_AmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.GetBrush_1
struct UStoreMeleeInventoryCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverSelect
struct UStoreMeleeInventoryCard_C_HoverSelect_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetFocus
struct UStoreMeleeInventoryCard_C_SetFocus_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.RemoveFocus
struct UStoreMeleeInventoryCard_C_RemoveFocus_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClick
struct UStoreMeleeInventoryCard_C_OnClick_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.Construct
struct UStoreMeleeInventoryCard_C_Construct_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.NotEvent
struct UStoreMeleeInventoryCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.HoverDeselect
struct UStoreMeleeInventoryCard_C_HoverDeselect_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIsSelected
struct UStoreMeleeInventoryCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetEventHandler
struct UStoreMeleeInventoryCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.SetIndex
struct UStoreMeleeInventoryCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreMeleeInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ChangeValue
struct UStoreMeleeInventoryCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.PreConstruct
struct UStoreMeleeInventoryCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.StoreRef
struct UStoreMeleeInventoryCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.ExecuteUbergraph_StoreMeleeInventoryCard
struct UStoreMeleeInventoryCard_C_ExecuteUbergraph_StoreMeleeInventoryCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnUnhover__DelegateSignature
struct UStoreMeleeInventoryCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnHover__DelegateSignature
struct UStoreMeleeInventoryCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreMeleeInventoryCard.StoreMeleeInventoryCard_C.OnClicked__DelegateSignature
struct UStoreMeleeInventoryCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

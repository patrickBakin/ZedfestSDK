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

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIsSelected
struct UStoreSecInventoryCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetEventHandler
struct UStoreSecInventoryCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetIndex
struct UStoreSecInventoryCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetNavigationAction
struct UStoreSecInventoryCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetVisibility_1
struct UStoreSecInventoryCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetAmmoBrush
struct UStoreSecInventoryCard_C_GetAmmoBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SellText
struct UStoreSecInventoryCard_C_SellText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.FillUpText
struct UStoreSecInventoryCard_C_FillUpText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OneMagText
struct UStoreSecInventoryCard_C_OneMagText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_WeaponName
struct UStoreSecInventoryCard_C_Get_WeaponName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Get_AmmoText
struct UStoreSecInventoryCard_C_Get_AmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.GetBrush_1
struct UStoreSecInventoryCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverDeselect
struct UStoreSecInventoryCard_C_HoverDeselect_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.HoverSelect
struct UStoreSecInventoryCard_C_HoverSelect_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetFocus
struct UStoreSecInventoryCard_C_SetFocus_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.RemoveFocus
struct UStoreSecInventoryCard_C_RemoveFocus_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClick
struct UStoreSecInventoryCard_C_OnClick_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.Construct
struct UStoreSecInventoryCard_C_Construct_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.NotEvent
struct UStoreSecInventoryCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIsSelected
struct UStoreSecInventoryCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetEventHandler
struct UStoreSecInventoryCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.SetIndex
struct UStoreSecInventoryCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.PreConstruct
struct UStoreSecInventoryCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.ChangeValue
struct UStoreSecInventoryCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.StoreRef
struct UStoreSecInventoryCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UStoreSecInventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.ExecuteUbergraph_StoreSecInventoryCard
struct UStoreSecInventoryCard_C_ExecuteUbergraph_StoreSecInventoryCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnUnhover__DelegateSignature
struct UStoreSecInventoryCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnHover__DelegateSignature
struct UStoreSecInventoryCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreSecInventoryCard.StoreSecInventoryCard_C.OnClicked__DelegateSignature
struct UStoreSecInventoryCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIsSelected
struct UStoreThrowablenventoryCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetEventHandler
struct UStoreThrowablenventoryCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetIndex
struct UStoreThrowablenventoryCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetNavigationAction
struct UStoreThrowablenventoryCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetVisibility_1
struct UStoreThrowablenventoryCard_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetAmmoBrush
struct UStoreThrowablenventoryCard_C_GetAmmoBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SellText
struct UStoreThrowablenventoryCard_C_SellText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.FillUpText
struct UStoreThrowablenventoryCard_C_FillUpText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OneMagText
struct UStoreThrowablenventoryCard_C_OneMagText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_WeaponName
struct UStoreThrowablenventoryCard_C_Get_WeaponName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Get_AmmoText
struct UStoreThrowablenventoryCard_C_Get_AmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.GetBrush_1
struct UStoreThrowablenventoryCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverDeselect
struct UStoreThrowablenventoryCard_C_HoverDeselect_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.HoverSelect
struct UStoreThrowablenventoryCard_C_HoverSelect_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetFocus
struct UStoreThrowablenventoryCard_C_SetFocus_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.RemoveFocus
struct UStoreThrowablenventoryCard_C_RemoveFocus_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClick
struct UStoreThrowablenventoryCard_C_OnClick_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIsSelected
struct UStoreThrowablenventoryCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.Construct
struct UStoreThrowablenventoryCard_C_Construct_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.NotEvent
struct UStoreThrowablenventoryCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetEventHandler
struct UStoreThrowablenventoryCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.SetIndex
struct UStoreThrowablenventoryCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.PreConstruct
struct UStoreThrowablenventoryCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ChangeValue
struct UStoreThrowablenventoryCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__SellButtonButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__FillUpButton_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowablenventoryCard_C_BndEvt__OneMagButton_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.StoreRef
struct UStoreThrowablenventoryCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.ExecuteUbergraph_StoreThrowablenventoryCard
struct UStoreThrowablenventoryCard_C_ExecuteUbergraph_StoreThrowablenventoryCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnUnhover__DelegateSignature
struct UStoreThrowablenventoryCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnHover__DelegateSignature
struct UStoreThrowablenventoryCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreThrowablenventoryCard.StoreThrowablenventoryCard_C.OnClicked__DelegateSignature
struct UStoreThrowablenventoryCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

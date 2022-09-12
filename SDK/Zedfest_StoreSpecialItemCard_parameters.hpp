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

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIsSelected
struct UStoreSpecialItemCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetEventHandler
struct UStoreSpecialItemCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetIndex
struct UStoreSpecialItemCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetNavigationAction
struct UStoreSpecialItemCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrush_1
struct UStoreSpecialItemCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetBrushColor_1
struct UStoreSpecialItemCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.GetSpecialItemAmountSlot7
struct UStoreSpecialItemCard_C_GetSpecialItemAmountSlot7_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.Get_WeaponCost_Text_1
struct UStoreSpecialItemCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

<<<<<<< HEAD
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIndex
struct UStoreSpecialItemCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetEventHandler
struct UStoreSpecialItemCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetIsSelected
struct UStoreSpecialItemCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverSelect
struct UStoreSpecialItemCard_C_HoverSelect_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.HoverDeselect
struct UStoreSpecialItemCard_C_HoverDeselect_Params
{
};

<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

<<<<<<< HEAD
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct
struct UStoreSpecialItemCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.SetFocus
struct UStoreSpecialItemCard_C_SetFocus_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.RemoveFocus
struct UStoreSpecialItemCard_C_RemoveFocus_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClick
struct UStoreSpecialItemCard_C_OnClick_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.Construct
struct UStoreSpecialItemCard_C_Construct_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.NotEvent
struct UStoreSpecialItemCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.PreConstruct
struct UStoreSpecialItemCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
=======
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue
struct UStoreSpecialItemCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreSpecialItemCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.StoreRef
struct UStoreSpecialItemCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

<<<<<<< HEAD
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ChangeValue
struct UStoreSpecialItemCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function StoreSpecialItemCard.StoreSpecialItemCard_C.UpdateStoreSpecialItemCard
struct UStoreSpecialItemCard_C_UpdateStoreSpecialItemCard_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.ExecuteUbergraph_StoreSpecialItemCard
struct UStoreSpecialItemCard_C_ExecuteUbergraph_StoreSpecialItemCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnUnhover__DelegateSignature
struct UStoreSpecialItemCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnHover__DelegateSignature
struct UStoreSpecialItemCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreSpecialItemCard.StoreSpecialItemCard_C.OnClicked__DelegateSignature
struct UStoreSpecialItemCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

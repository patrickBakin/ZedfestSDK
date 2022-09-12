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

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIsSelected
struct UStoreSmallMedicCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetEventHandler
struct UStoreSmallMedicCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetIndex
struct UStoreSmallMedicCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetNavigationAction
struct UStoreSmallMedicCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrush_1
struct UStoreSmallMedicCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetBrushColor_1
struct UStoreSmallMedicCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.GetConsumableAmountSlot5
struct UStoreSmallMedicCard_C_GetConsumableAmountSlot5_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.Get_WeaponCost_Text_1
struct UStoreSmallMedicCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.PreConstruct
struct UStoreSmallMedicCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreSmallMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIndex
struct UStoreSmallMedicCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetEventHandler
struct UStoreSmallMedicCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetIsSelected
struct UStoreSmallMedicCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverSelect
struct UStoreSmallMedicCard_C_HoverSelect_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.HoverDeselect
struct UStoreSmallMedicCard_C_HoverDeselect_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.SetFocus
struct UStoreSmallMedicCard_C_SetFocus_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.RemoveFocus
struct UStoreSmallMedicCard_C_RemoveFocus_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClick
struct UStoreSmallMedicCard_C_OnClick_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.Construct
struct UStoreSmallMedicCard_C_Construct_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.NotEvent
struct UStoreSmallMedicCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.ChangeValue
struct UStoreSmallMedicCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.StoreRef
struct UStoreSmallMedicCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.UpdateStoreSmallMedicCard
struct UStoreSmallMedicCard_C_UpdateStoreSmallMedicCard_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.ExecuteUbergraph_StoreSmallMedicCard
struct UStoreSmallMedicCard_C_ExecuteUbergraph_StoreSmallMedicCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnUnhover__DelegateSignature
struct UStoreSmallMedicCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnHover__DelegateSignature
struct UStoreSmallMedicCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreSmallMedicCard.StoreSmallMedicCard_C.OnClicked__DelegateSignature
struct UStoreSmallMedicCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

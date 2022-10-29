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

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIsSelected
struct UStoreRubberArmorCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetEventHandler
struct UStoreRubberArmorCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetIndex
struct UStoreRubberArmorCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetNavigationAction
struct UStoreRubberArmorCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetBrushColor_1
struct UStoreRubberArmorCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.GetArmorAmount
struct UStoreRubberArmorCard_C_GetArmorAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.Get_WeaponCost_Text_1
struct UStoreRubberArmorCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.ChangeValue
struct UStoreRubberArmorCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.PreConstruct
struct UStoreRubberArmorCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreRubberArmorCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIndex
struct UStoreRubberArmorCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetEventHandler
struct UStoreRubberArmorCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetIsSelected
struct UStoreRubberArmorCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverSelect
struct UStoreRubberArmorCard_C_HoverSelect_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.HoverDeselect
struct UStoreRubberArmorCard_C_HoverDeselect_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.SetFocus
struct UStoreRubberArmorCard_C_SetFocus_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.RemoveFocus
struct UStoreRubberArmorCard_C_RemoveFocus_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClick
struct UStoreRubberArmorCard_C_OnClick_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.Construct
struct UStoreRubberArmorCard_C_Construct_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.StoreRef
struct UStoreRubberArmorCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.ExecuteUbergraph_StoreRubberArmorCard
struct UStoreRubberArmorCard_C_ExecuteUbergraph_StoreRubberArmorCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnUnhover__DelegateSignature
struct UStoreRubberArmorCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnHover__DelegateSignature
struct UStoreRubberArmorCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreRubberArmorCard.StoreRubberArmorCard_C.OnClicked__DelegateSignature
struct UStoreRubberArmorCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

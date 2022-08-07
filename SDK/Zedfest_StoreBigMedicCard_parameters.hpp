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

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetIsSelected
struct UStoreBigMedicCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetEventHandler
struct UStoreBigMedicCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetIndex
struct UStoreBigMedicCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetNavigationAction
struct UStoreBigMedicCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrush_1
struct UStoreBigMedicCard_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetBrushColor_1
struct UStoreBigMedicCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.GetConsumableAmountSlot6
struct UStoreBigMedicCard_C_GetConsumableAmountSlot6_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.Get_WeaponCost_Text_1
struct UStoreBigMedicCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_F5C679D44C5B5D4AC89F3D81F028C906
struct UStoreBigMedicCard_C_OnFailure_F5C679D44C5B5D4AC89F3D81F028C906_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906
struct UStoreBigMedicCard_C_OnSuccess_F5C679D44C5B5D4AC89F3D81F028C906_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnFailure_882149E04EA7E5DA83397798862602BB
struct UStoreBigMedicCard_C_OnFailure_882149E04EA7E5DA83397798862602BB_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnSuccess_882149E04EA7E5DA83397798862602BB
struct UStoreBigMedicCard_C_OnSuccess_882149E04EA7E5DA83397798862602BB_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreBigMedicCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.SetIndex
struct UStoreBigMedicCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.SetEventHandler
struct UStoreBigMedicCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.SetIsSelected
struct UStoreBigMedicCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.HoverSelect
struct UStoreBigMedicCard_C_HoverSelect_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.HoverDeselect
struct UStoreBigMedicCard_C_HoverDeselect_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.ChangeValue
struct UStoreBigMedicCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.SetFocus
struct UStoreBigMedicCard_C_SetFocus_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.RemoveFocus
struct UStoreBigMedicCard_C_RemoveFocus_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnClick
struct UStoreBigMedicCard_C_OnClick_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.Construct
struct UStoreBigMedicCard_C_Construct_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.NotEvent
struct UStoreBigMedicCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.PreConstruct
struct UStoreBigMedicCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.StoreRef
struct UStoreBigMedicCard_C_StoreRef_Params
{
	class UW_Store_C**                                 Store;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.UpdateStoreBigMedicCard
struct UStoreBigMedicCard_C_UpdateStoreBigMedicCard_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.ExecuteUbergraph_StoreBigMedicCard
struct UStoreBigMedicCard_C_ExecuteUbergraph_StoreBigMedicCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnUnhover__DelegateSignature
struct UStoreBigMedicCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnHover__DelegateSignature
struct UStoreBigMedicCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreBigMedicCard.StoreBigMedicCard_C.OnClicked__DelegateSignature
struct UStoreBigMedicCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

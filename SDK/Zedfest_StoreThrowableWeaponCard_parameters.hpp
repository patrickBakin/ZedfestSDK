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

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIsSelected
struct UStoreThrowableWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetEventHandler
struct UStoreThrowableWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetIndex
struct UStoreThrowableWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetNavigationAction
struct UStoreThrowableWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.GetBrushColor_1
struct UStoreThrowableWeaponCard_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Get_WeaponCost_Text_1
struct UStoreThrowableWeaponCard_C_Get_WeaponCost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverDeselect
struct UStoreThrowableWeaponCard_C_HoverDeselect_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.HoverSelect
struct UStoreThrowableWeaponCard_C_HoverSelect_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.PreConstruct
struct UStoreThrowableWeaponCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetFocus
struct UStoreThrowableWeaponCard_C_SetFocus_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.RemoveFocus
struct UStoreThrowableWeaponCard_C_RemoveFocus_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClick
struct UStoreThrowableWeaponCard_C_OnClick_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.Construct
struct UStoreThrowableWeaponCard_C_Construct_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.NotEvent
struct UStoreThrowableWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ChangeValue
struct UStoreThrowableWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIsSelected
struct UStoreThrowableWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetEventHandler
struct UStoreThrowableWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.SetIndex
struct UStoreThrowableWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__UpgradeButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UStoreThrowableWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.ExecuteUbergraph_StoreThrowableWeaponCard
struct UStoreThrowableWeaponCard_C_ExecuteUbergraph_StoreThrowableWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnUnhover__DelegateSignature
struct UStoreThrowableWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnHover__DelegateSignature
struct UStoreThrowableWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function StoreThrowableWeaponCard.StoreThrowableWeaponCard_C.OnClicked__DelegateSignature
struct UStoreThrowableWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

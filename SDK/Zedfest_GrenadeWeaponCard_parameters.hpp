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

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIsSelected
struct UGrenadeWeaponCard_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetEventHandler
struct UGrenadeWeaponCard_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetIndex
struct UGrenadeWeaponCard_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.GetNavigationAction
struct UGrenadeWeaponCard_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_69BAE37F476875AA8ACFE9961848A288
struct UGrenadeWeaponCard_C_OnFailure_69BAE37F476875AA8ACFE9961848A288_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_69BAE37F476875AA8ACFE9961848A288
struct UGrenadeWeaponCard_C_OnSuccess_69BAE37F476875AA8ACFE9961848A288_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnFailure_F9573BBC4579C8BE884954A8378ECF58
struct UGrenadeWeaponCard_C_OnFailure_F9573BBC4579C8BE884954A8378ECF58_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnSuccess_F9573BBC4579C8BE884954A8378ECF58
struct UGrenadeWeaponCard_C_OnSuccess_F9573BBC4579C8BE884954A8378ECF58_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.ChangeValue
struct UGrenadeWeaponCard_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.PreConstruct
struct UGrenadeWeaponCard_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UGrenadeWeaponCard_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIndex
struct UGrenadeWeaponCard_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetEventHandler
struct UGrenadeWeaponCard_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetIsSelected
struct UGrenadeWeaponCard_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverSelect
struct UGrenadeWeaponCard_C_HoverSelect_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.HoverDeselect
struct UGrenadeWeaponCard_C_HoverDeselect_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.SetFocus
struct UGrenadeWeaponCard_C_SetFocus_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.RemoveFocus
struct UGrenadeWeaponCard_C_RemoveFocus_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClick
struct UGrenadeWeaponCard_C_OnClick_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.Construct
struct UGrenadeWeaponCard_C_Construct_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.NotEvent
struct UGrenadeWeaponCard_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.RefreshGrenadeWeaponCard
struct UGrenadeWeaponCard_C_RefreshGrenadeWeaponCard_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_4
struct UGrenadeWeaponCard_C_CustomEvent_4_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_23
struct UGrenadeWeaponCard_C_CustomEvent_23_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.CustomEvent_12
struct UGrenadeWeaponCard_C_CustomEvent_12_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.ExecuteUbergraph_GrenadeWeaponCard
struct UGrenadeWeaponCard_C_ExecuteUbergraph_GrenadeWeaponCard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnUnhover__DelegateSignature
struct UGrenadeWeaponCard_C_OnUnhover__DelegateSignature_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnHover__DelegateSignature
struct UGrenadeWeaponCard_C_OnHover__DelegateSignature_Params
{
};

// Function GrenadeWeaponCard.GrenadeWeaponCard_C.OnClicked__DelegateSignature
struct UGrenadeWeaponCard_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

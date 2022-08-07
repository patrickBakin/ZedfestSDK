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

// Function WeaponSkinCards.WeaponSkinCards_C.GetIsSelected
struct UWeaponSkinCards_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.GetEventHandler
struct UWeaponSkinCards_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.GetIndex
struct UWeaponSkinCards_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.GetNavigationAction
struct UWeaponSkinCards_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WeaponSkinCards.WeaponSkinCards_C.SetEventHandler
struct UWeaponSkinCards_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.SetIsSelected
struct UWeaponSkinCards_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.HoverSelect
struct UWeaponSkinCards_C_HoverSelect_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.HoverDeselect
struct UWeaponSkinCards_C_HoverDeselect_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.SetFocus
struct UWeaponSkinCards_C_SetFocus_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.RemoveFocus
struct UWeaponSkinCards_C_RemoveFocus_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWeaponSkinCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWeaponSkinCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.OnClick
struct UWeaponSkinCards_C_OnClick_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.Construct
struct UWeaponSkinCards_C_Construct_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.NotEvent
struct UWeaponSkinCards_C_NotEvent_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WeaponSkinCards.WeaponSkinCards_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWeaponSkinCards_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.PreConstruct
struct UWeaponSkinCards_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.ChangeValue
struct UWeaponSkinCards_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.Tick
struct UWeaponSkinCards_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.RefreshWeaponSkinCard
struct UWeaponSkinCards_C_RefreshWeaponSkinCard_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.SetIndex
struct UWeaponSkinCards_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.CustomEvent_3
struct UWeaponSkinCards_C_CustomEvent_3_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.CustomEvent_2
struct UWeaponSkinCards_C_CustomEvent_2_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.ExecuteUbergraph_WeaponSkinCards
struct UWeaponSkinCards_C_ExecuteUbergraph_WeaponSkinCards_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponSkinCards.WeaponSkinCards_C.OnUnhover__DelegateSignature
struct UWeaponSkinCards_C_OnUnhover__DelegateSignature_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.OnHover__DelegateSignature
struct UWeaponSkinCards_C_OnHover__DelegateSignature_Params
{
};

// Function WeaponSkinCards.WeaponSkinCards_C.OnClicked__DelegateSignature
struct UWeaponSkinCards_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

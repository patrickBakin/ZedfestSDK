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

// Function SettingItem.SettingItem_C.GetNavigationAction
struct USettingItem_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SettingItem.SettingItem_C.GetIndex
struct USettingItem_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.GetEventHandler
struct USettingItem_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.GetIsSelected
struct USettingItem_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.OnClick
struct USettingItem_C_OnClick_Params
{
};

// Function SettingItem.SettingItem_C.PreConstruct
struct USettingItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.BndEvt__prevBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct USettingItem_C_BndEvt__prevBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingItem.SettingItem_C.BndEvt__nextBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct USettingItem_C_BndEvt__nextBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SettingItem.SettingItem_C.UpdateLayout
struct USettingItem_C_UpdateLayout_Params
{
};

// Function SettingItem.SettingItem_C.SetIsSelected
struct USettingItem_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.HoverSelect
struct USettingItem_C_HoverSelect_Params
{
};

// Function SettingItem.SettingItem_C.HoverDeselect
struct USettingItem_C_HoverDeselect_Params
{
};

// Function SettingItem.SettingItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct USettingItem_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingItem.SettingItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct USettingItem_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingItem.SettingItem_C.ChangeValue
struct USettingItem_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.SetEventHandler
struct USettingItem_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.SetIndex
struct USettingItem_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.SetFocus
struct USettingItem_C_SetFocus_Params
{
};

// Function SettingItem.SettingItem_C.RemoveFocus
struct USettingItem_C_RemoveFocus_Params
{
};

// Function SettingItem.SettingItem_C.ExecuteUbergraph_SettingItem
struct USettingItem_C_ExecuteUbergraph_SettingItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItem.SettingItem_C.OnSelectedItemChange__DelegateSignature
struct USettingItem_C_OnSelectedItemChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

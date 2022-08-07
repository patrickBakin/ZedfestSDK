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

// Function SettingItemSlider.SettingItemSlider_C.GetNavigationAction
struct USettingItemSlider_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SettingItemSlider.SettingItemSlider_C.GetIndex
struct USettingItemSlider_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.GetEventHandler
struct USettingItemSlider_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.GetIsSelected
struct USettingItemSlider_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.OnClick
struct USettingItemSlider_C_OnClick_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.PreConstruct
struct USettingItemSlider_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.UpdateLayout
struct USettingItemSlider_C_UpdateLayout_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature
struct USettingItemSlider_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_111_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct USettingItemSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct USettingItemSlider_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.SetIsSelected
struct USettingItemSlider_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.HoverSelect
struct USettingItemSlider_C_HoverSelect_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.HoverDeselect
struct USettingItemSlider_C_HoverDeselect_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.ChangeValue
struct USettingItemSlider_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.SetEventHandler
struct USettingItemSlider_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.SetFocus
struct USettingItemSlider_C_SetFocus_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.RemoveFocus
struct USettingItemSlider_C_RemoveFocus_Params
{
};

// Function SettingItemSlider.SettingItemSlider_C.SetIndex
struct USettingItemSlider_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.ExecuteUbergraph_SettingItemSlider
struct USettingItemSlider_C_ExecuteUbergraph_SettingItemSlider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingItemSlider.SettingItemSlider_C.OnValueChange__DelegateSignature
struct USettingItemSlider_C_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

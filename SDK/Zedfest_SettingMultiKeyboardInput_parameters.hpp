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

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetNavigationAction
struct USettingMultiKeyboardInput_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIndex
struct USettingMultiKeyboardInput_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetEventHandler
struct USettingMultiKeyboardInput_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetIsSelected
struct USettingMultiKeyboardInput_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetMaxWidth
struct USettingMultiKeyboardInput_C_SetMaxWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyUnhover
struct USettingMultiKeyboardInput_C_OnInputKeyUnhover_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetTargetSelectedIndex
struct USettingMultiKeyboardInput_C_SetTargetSelectedIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectFirstKey
struct USettingMultiKeyboardInput_C_SelectFirstKey_Params
{
	bool*                                              TryToSelectTargetIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ResetKeySelection
struct USettingMultiKeyboardInput_C_ResetKeySelection_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputKeyHover
struct USettingMultiKeyboardInput_C_OnInputKeyHover_Params
{
	int*                                               newIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.DeselectInputKey
struct USettingMultiKeyboardInput_C_DeselectInputKey_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PopulateKeys
struct USettingMultiKeyboardInput_C_PopulateKeys_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SelectInputKey
struct USettingMultiKeyboardInput_C_SelectInputKey_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnInputButtonClick
struct USettingMultiKeyboardInput_C_OnInputButtonClick_Params
{
	struct FInputKeyData*                              Input_Data;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RestoreDefault
struct USettingMultiKeyboardInput_C_RestoreDefault_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.GetAxisActionKeyName
struct USettingMultiKeyboardInput_C_GetAxisActionKeyName_Params
{
	struct FInputKeyData*                              KeyData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.PreConstruct
struct USettingMultiKeyboardInput_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.UpdateLayout
struct USettingMultiKeyboardInput_C_UpdateLayout_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct USettingMultiKeyboardInput_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct USettingMultiKeyboardInput_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIsSelected
struct USettingMultiKeyboardInput_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClick
struct USettingMultiKeyboardInput_C_OnClick_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverSelect
struct USettingMultiKeyboardInput_C_HoverSelect_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.HoverDeselect
struct USettingMultiKeyboardInput_C_HoverDeselect_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetEventHandler
struct USettingMultiKeyboardInput_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetIndex
struct USettingMultiKeyboardInput_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.SetFocus
struct USettingMultiKeyboardInput_C_SetFocus_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.RemoveFocus
struct USettingMultiKeyboardInput_C_RemoveFocus_Params
{
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ChangeValue
struct USettingMultiKeyboardInput_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.ExecuteUbergraph_SettingMultiKeyboardInput
struct USettingMultiKeyboardInput_C_ExecuteUbergraph_SettingMultiKeyboardInput_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnSelectionUpdate__DelegateSignature
struct USettingMultiKeyboardInput_C_OnSelectionUpdate__DelegateSignature_Params
{
	int*                                               SelectedKeyIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingMultiKeyboardInput.SettingMultiKeyboardInput_C.OnClicked__DelegateSignature
struct USettingMultiKeyboardInput_C_OnClicked__DelegateSignature_Params
{
	struct FName*                                      KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAxis;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AxisVal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function KBMPanel.KBMPanel_C.OnEscapeInput
struct UKBMPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.GetEventHandler
struct UKBMPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.GetStepIndex
struct UKBMPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.OnKeyRemapItemSelectionChange
struct UKBMPanel_C_OnKeyRemapItemSelectionChange_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.GetSettings
struct UKBMPanel_C_GetSettings_Params
{
	class USaveGame*                                   SaveObj;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.LoadDefaultSettings
struct UKBMPanel_C_LoadDefaultSettings_Params
{
};

// Function KBMPanel.KBMPanel_C.LoadSettings
struct UKBMPanel_C_LoadSettings_Params
{
	class UKBMSaveGame_C**                             SaveObj;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.RebindKey
struct UKBMPanel_C_RebindKey_Params
{
	struct FName*                                      KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAxis_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AxisVal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.ReloadKeyUI
struct UKBMPanel_C_ReloadKeyUI_Params
{
};

// Function KBMPanel.KBMPanel_C.Construct
struct UKBMPanel_C_Construct_Params
{
};

// Function KBMPanel.KBMPanel_C.GetEscapeBehaviour
struct UKBMPanel_C_GetEscapeBehaviour_Params
{
};

// Function KBMPanel.KBMPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UKBMPanel_C_BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function KBMPanel.KBMPanel_C.BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature
struct UKBMPanel_C_BndEvt__invertOption_K2Node_ComponentBoundEvent_31_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function KBMPanel.KBMPanel_C.BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature
struct UKBMPanel_C_BndEvt__SensitivitySlider_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.Save&Apply
struct UKBMPanel_C_Save_Apply_Params
{
};

// Function KBMPanel.KBMPanel_C.RebindKeyCancel
struct UKBMPanel_C_RebindKeyCancel_Params
{
};

// Function KBMPanel.KBMPanel_C.Destruct
struct UKBMPanel_C_Destruct_Params
{
};

// Function KBMPanel.KBMPanel_C.SetNavManager
struct UKBMPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.SetStepIndex
struct UKBMPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UKBMPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function KBMPanel.KBMPanel_C.SetOnEscapeBehaviour
struct UKBMPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.OnNavigationScroll
struct UKBMPanel_C_OnNavigationScroll_Params
{
};

// Function KBMPanel.KBMPanel_C.ExecuteUbergraph_KBMPanel
struct UKBMPanel_C_ExecuteUbergraph_KBMPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KBMPanel.KBMPanel_C.OnRebindCancel__DelegateSignature
struct UKBMPanel_C_OnRebindCancel__DelegateSignature_Params
{
};

// Function KBMPanel.KBMPanel_C.RebindKeyState__DelegateSignature
struct UKBMPanel_C_RebindKeyState__DelegateSignature_Params
{
	bool*                                              IsWaitingForInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

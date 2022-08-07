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

// Function AudioSettingPanel.AudioSettingPanel_C.OnEscapeInput
struct UAudioSettingPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.GetEventHandler
struct UAudioSettingPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.GetStepIndex
struct UAudioSettingPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.LoadSettings
struct UAudioSettingPanel_C_LoadSettings_Params
{
	class UAudioSaveGame_C**                           SettingObj;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.LoadDefaultSettings
struct UAudioSettingPanel_C_LoadDefaultSettings_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.GetSettings
struct UAudioSettingPanel_C_GetSettings_Params
{
	class UAudioSaveGame_C*                            Save;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.GetEscapeBehaviour
struct UAudioSettingPanel_C_GetEscapeBehaviour_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.Construct
struct UAudioSettingPanel_C_Construct_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_104_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.Save&Apply
struct UAudioSettingPanel_C_Save_Apply_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_111_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_115_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__SettingItemSlider_2_K2Node_ComponentBoundEvent_120_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__SettingItemSlider_3_K2Node_ComponentBoundEvent_126_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.SetNavManager
struct UAudioSettingPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.SetStepIndex
struct UAudioSettingPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UAudioSettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.Destruct
struct UAudioSettingPanel_C_Destruct_Params
{
};

// Function AudioSettingPanel.AudioSettingPanel_C.SetOnEscapeBehaviour
struct UAudioSettingPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AudioSettingPanel.AudioSettingPanel_C.ExecuteUbergraph_AudioSettingPanel
struct UAudioSettingPanel_C_ExecuteUbergraph_AudioSettingPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

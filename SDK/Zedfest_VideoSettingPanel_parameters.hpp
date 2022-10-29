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

// Function VideoSettingPanel.VideoSettingPanel_C.OnEscapeInput
struct UVideoSettingPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.GetEventHandler
struct UVideoSettingPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.GetStepIndex
struct UVideoSettingPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.LoadSettings
struct UVideoSettingPanel_C_LoadSettings_Params
{
	class UVideoSaveGame_C**                           Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.PopulateResolutions
struct UVideoSettingPanel_C_PopulateResolutions_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.OnSettingsChanged
struct UVideoSettingPanel_C_OnSettingsChanged_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.RestoreVideo
struct UVideoSettingPanel_C_RestoreVideo_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.RestoreFromTempSetting
struct UVideoSettingPanel_C_RestoreFromTempSetting_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.StoreTempSetting
struct UVideoSettingPanel_C_StoreTempSetting_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.ApplySetting
struct UVideoSettingPanel_C_ApplySetting_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_1
struct UVideoSettingPanel_C_CustomEvent_1_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.CustomEvent_2
struct UVideoSettingPanel_C_CustomEvent_2_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_K2Node_ComponentBoundEvent_140_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.DisableResolutionOnBorderlessMode
struct UVideoSettingPanel_C_DisableResolutionOnBorderlessMode_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__Button1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__resetDefaultBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_1_K2Node_ComponentBoundEvent_58_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_0_K2Node_ComponentBoundEvent_59_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_2_K2Node_ComponentBoundEvent_64_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItemSlider_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItemSlider_0_K2Node_ComponentBoundEvent_77_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItemSlider_1_K2Node_ComponentBoundEvent_85_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_10_K2Node_ComponentBoundEvent_94_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_3_K2Node_ComponentBoundEvent_104_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_4_K2Node_ComponentBoundEvent_117_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_5_K2Node_ComponentBoundEvent_129_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_6_K2Node_ComponentBoundEvent_0_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_7_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_8_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__SettingItem_9_K2Node_ComponentBoundEvent_3_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.Construct
struct UVideoSettingPanel_C_Construct_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.HideSaveBtn
struct UVideoSettingPanel_C_HideSaveBtn_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.GetEscapeBehaviour
struct UVideoSettingPanel_C_GetEscapeBehaviour_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.Save
struct UVideoSettingPanel_C_Save_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.Destruct
struct UVideoSettingPanel_C_Destruct_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.SetNavManager
struct UVideoSettingPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.SetStepIndex
struct UVideoSettingPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UVideoSettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.OnNavigationScroll
struct UVideoSettingPanel_C_OnNavigationScroll_Params
{
};

// Function VideoSettingPanel.VideoSettingPanel_C.SetOnEscapeBehaviour
struct UVideoSettingPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VideoSettingPanel.VideoSettingPanel_C.ExecuteUbergraph_VideoSettingPanel
struct UVideoSettingPanel_C_ExecuteUbergraph_VideoSettingPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

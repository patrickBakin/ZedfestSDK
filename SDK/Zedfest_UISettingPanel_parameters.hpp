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

// Function UISettingPanel.UISettingPanel_C.OnEscapeInput
struct UUISettingPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.GetEventHandler
struct UUISettingPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.GetStepIndex
struct UUISettingPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.GetSettings
struct UUISettingPanel_C_GetSettings_Params
{
	class UUISaveGame_C*                               Save;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.LoadSettings
struct UUISettingPanel_C_LoadSettings_Params
{
	class UUISaveGame_C**                              SettingObj;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.LoadDefaultSettings
struct UUISettingPanel_C_LoadDefaultSettings_Params
{
};

// Function UISettingPanel.UISettingPanel_C.GetEscapeBehaviour
struct UUISettingPanel_C_GetEscapeBehaviour_Params
{
};

// Function UISettingPanel.UISettingPanel_C.Construct
struct UUISettingPanel_C_Construct_Params
{
};

// Function UISettingPanel.UISettingPanel_C.Save&Apply
struct UUISettingPanel_C_Save_Apply_Params
{
};

// Function UISettingPanel.UISettingPanel_C.Destruct
struct UUISettingPanel_C_Destruct_Params
{
};

// Function UISettingPanel.UISettingPanel_C.SetNavManager
struct UUISettingPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.SetStepIndex
struct UUISettingPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUISettingPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.SetOnEscapeBehaviour
struct UUISettingPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__SquadWindow_K2Node_ComponentBoundEvent_1_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ZedOutline_K2Node_ComponentBoundEvent_2_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ZedDeadBodySlider_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ShowCrossHair_K2Node_ComponentBoundEvent_6_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__Headshotsoundmarker_K2Node_ComponentBoundEvent_4_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ShowUserInterfaceSlider_K2Node_ComponentBoundEvent_5_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ShowBloodAndGore_K2Node_ComponentBoundEvent_7_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__ZedDeadBodyDelay_K2Node_ComponentBoundEvent_8_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.BndEvt__FadeAlwaysshowInventory?_K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature
struct UUISettingPanel_C_BndEvt__FadeAlwaysshowInventory__K2Node_ComponentBoundEvent_9_OnSelectedItemChange__DelegateSignature_Params
{
};

// Function UISettingPanel.UISettingPanel_C.ExecuteUbergraph_UISettingPanel
struct UUISettingPanel_C_ExecuteUbergraph_UISettingPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

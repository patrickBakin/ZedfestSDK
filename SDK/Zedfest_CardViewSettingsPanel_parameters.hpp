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

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeInput
struct UCardViewSettingsPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEventHandler
struct UCardViewSettingsPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetStepIndex
struct UCardViewSettingsPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetCanFocus
struct UCardViewSettingsPanel_C_GetCanFocus_Params
{
	bool                                               CanFocus;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BacktoSettingMenu
struct UCardViewSettingsPanel_C_BacktoSettingMenu_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnEscapeCalled
struct UCardViewSettingsPanel_C_OnEscapeCalled_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     Behaviour;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.LoadPanel
struct UCardViewSettingsPanel_C_LoadPanel_Params
{
	class UClass**                                     Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.GetEscapeBehaviour
struct UCardViewSettingsPanel_C_GetEscapeBehaviour_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.Construct
struct UCardViewSettingsPanel_C_Construct_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetNavManager
struct UCardViewSettingsPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetStepIndex
struct UCardViewSettingsPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.Destruct
struct UCardViewSettingsPanel_C_Destruct_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.SetOnEscapeBehaviour
struct UCardViewSettingsPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCardViewSettingsPanel_C_BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCardViewSettingsPanel_C_BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCardViewSettingsPanel_C_BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UCardViewSettingsPanel_C_BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_1
struct UCardViewSettingsPanel_C_CustomEvent_1_Params
{
	bool*                                              IsWaitingForInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.CustomEvent_2
struct UCardViewSettingsPanel_C_CustomEvent_2_Params
{
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.ExecuteUbergraph_CardViewSettingsPanel
struct UCardViewSettingsPanel_C_ExecuteUbergraph_CardViewSettingsPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewSettingsPanel.CardViewSettingsPanel_C.OnKeybindingState__DelegateSignature
struct UCardViewSettingsPanel_C_OnKeybindingState__DelegateSignature_Params
{
	bool*                                              CanFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

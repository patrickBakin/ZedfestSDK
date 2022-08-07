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

// Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeInput
struct UCardViewPlayPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.GetEventHandler
struct UCardViewPlayPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.GetStepIndex
struct UCardViewPlayPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.GetCanFocus
struct UCardViewPlayPanel_C_GetCanFocus_Params
{
	bool                                               CanFocus;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.BacktoSettingMenu
struct UCardViewPlayPanel_C_BacktoSettingMenu_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.OnEscapeCalled
struct UCardViewPlayPanel_C_OnEscapeCalled_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     Behaviour;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.LoadPanel
struct UCardViewPlayPanel_C_LoadPanel_Params
{
	class UClass**                                     Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.GetEscapeBehaviour
struct UCardViewPlayPanel_C_GetEscapeBehaviour_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.Construct
struct UCardViewPlayPanel_C_Construct_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.SetNavManager
struct UCardViewPlayPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.SetStepIndex
struct UCardViewPlayPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.Destruct
struct UCardViewPlayPanel_C_Destruct_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.SetOnEscapeBehaviour
struct UCardViewPlayPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCardViewPlayPanel_C_BndEvt__SettingCards_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCardViewPlayPanel_C_BndEvt__controlsSettingBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCardViewPlayPanel_C_BndEvt__videoSettingBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UCardViewPlayPanel_C_BndEvt__uiSettingBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.ExecuteUbergraph_CardViewPlayPanel
struct UCardViewPlayPanel_C_ExecuteUbergraph_CardViewPlayPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPlayPanel.CardViewPlayPanel_C.OnKeybindingState__DelegateSignature
struct UCardViewPlayPanel_C_OnKeybindingState__DelegateSignature_Params
{
	bool*                                              CanFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

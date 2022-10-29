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

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.OnEscapeInput
struct ULeaderboardSelectionPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEventHandler
struct ULeaderboardSelectionPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetStepIndex
struct ULeaderboardSelectionPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.GetEscapeBehaviour
struct ULeaderboardSelectionPanel_C_GetEscapeBehaviour_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Construct
struct ULeaderboardSelectionPanel_C_Construct_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.Destruct
struct ULeaderboardSelectionPanel_C_Destruct_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetNavManager
struct ULeaderboardSelectionPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetStepIndex
struct ULeaderboardSelectionPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct ULeaderboardSelectionPanel_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.SetOnEscapeBehaviour
struct ULeaderboardSelectionPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct ULeaderboardSelectionPanel_C_BndEvt__DEVELOPMENTAREA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct ULeaderboardSelectionPanel_C_BndEvt__UNDERGROUNDMADNESS_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct ULeaderboardSelectionPanel_C_BndEvt__PLANETARIUM_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct ULeaderboardSelectionPanel_C_BndEvt__CYBERALERT_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ShowHordeModeButtonsEvent
struct ULeaderboardSelectionPanel_C_ShowHordeModeButtonsEvent_Params
{
};

// Function LeaderboardSelectionPanel.LeaderboardSelectionPanel_C.ExecuteUbergraph_LeaderboardSelectionPanel
struct ULeaderboardSelectionPanel_C_ExecuteUbergraph_LeaderboardSelectionPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

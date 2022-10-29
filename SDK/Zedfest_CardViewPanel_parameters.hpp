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

// Function CardViewPanel.CardViewPanel_C.OnEscapeInput
struct UCardViewPanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.GetEventHandler
struct UCardViewPanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.GetStepIndex
struct UCardViewPanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.GetEscapeBehaviour
struct UCardViewPanel_C_GetEscapeBehaviour_Params
{
};

// Function CardViewPanel.CardViewPanel_C.Construct
struct UCardViewPanel_C_Construct_Params
{
};

// Function CardViewPanel.CardViewPanel_C.SetNavManager
struct UCardViewPanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.SetStepIndex
struct UCardViewPanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.Destruct
struct UCardViewPanel_C_Destruct_Params
{
};

// Function CardViewPanel.CardViewPanel_C.SetOnEscapeBehaviour
struct UCardViewPanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.OnEscapeInput_1_2
struct UCardViewPanel_C_OnEscapeInput_1_2_Params
{
};

// Function CardViewPanel.CardViewPanel_C.BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCardViewPanel_C_BndEvt__Cards_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CardViewPanel.CardViewPanel_C.NewGame
struct UCardViewPanel_C_NewGame_Params
{
};

// Function CardViewPanel.CardViewPanel_C.ExecuteUbergraph_CardViewPanel
struct UCardViewPanel_C_ExecuteUbergraph_CardViewPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CardViewPanel.CardViewPanel_C.OnRemoveWidget__DelegateSignature
struct UCardViewPanel_C_OnRemoveWidget__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

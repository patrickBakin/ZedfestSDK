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

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEscapeBehaviour
struct UKeyboardNavigablePanel_C_GetEscapeBehaviour_Params
{
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetEventHandler
struct UKeyboardNavigablePanel_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetOnEscapeBehaviour
struct UKeyboardNavigablePanel_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.OnEscapeInput
struct UKeyboardNavigablePanel_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetNavManager
struct UKeyboardNavigablePanel_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.SetStepIndex
struct UKeyboardNavigablePanel_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigablePanel.KeyboardNavigablePanel_C.GetStepIndex
struct UKeyboardNavigablePanel_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

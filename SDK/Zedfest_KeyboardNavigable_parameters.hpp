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

// Function KeyboardNavigable.KeyboardNavigable_C.GetNavigationAction
struct UKeyboardNavigable_C_GetNavigationAction_Params
{
	struct FNavItemActionStruct                        Action;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function KeyboardNavigable.KeyboardNavigable_C.RemoveFocus
struct UKeyboardNavigable_C_RemoveFocus_Params
{
};

// Function KeyboardNavigable.KeyboardNavigable_C.SetFocus
struct UKeyboardNavigable_C_SetFocus_Params
{
};

// Function KeyboardNavigable.KeyboardNavigable_C.GetIndex
struct UKeyboardNavigable_C_GetIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.SetIndex
struct UKeyboardNavigable_C_SetIndex_Params
{
	int*                                               SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.GetEventHandler
struct UKeyboardNavigable_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  Event_Handler;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.SetEventHandler
struct UKeyboardNavigable_C_SetEventHandler_Params
{
	class UBP_navset_event_handler_C**                 Event_Handler;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.OnClick
struct UKeyboardNavigable_C_OnClick_Params
{
};

// Function KeyboardNavigable.KeyboardNavigable_C.ChangeValue
struct UKeyboardNavigable_C_ChangeValue_Params
{
	bool*                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.GetIsSelected
struct UKeyboardNavigable_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeyboardNavigable.KeyboardNavigable_C.SetIsSelected
struct UKeyboardNavigable_C_SetIsSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

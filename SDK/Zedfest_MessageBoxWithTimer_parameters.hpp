#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput
struct UMessageBoxWithTimer_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEventHandler
struct UMessageBoxWithTimer_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetStepIndex
struct UMessageBoxWithTimer_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetRemainingTime
struct UMessageBoxWithTimer_C_GetRemainingTime_Params
{
	int                                                RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.CalculateTimer
struct UMessageBoxWithTimer_C_CalculateTimer_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetOnEscapeBehaviour
struct UMessageBoxWithTimer_C_SetOnEscapeBehaviour_Params
{
<<<<<<< HEAD
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.GetEscapeBehaviour
struct UMessageBoxWithTimer_C_GetEscapeBehaviour_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
struct UMessageBoxWithTimer_C_BndEvt__Button1_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
struct UMessageBoxWithTimer_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Tick
struct UMessageBoxWithTimer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Construct
struct UMessageBoxWithTimer_C_Construct_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetStepIndex
struct UMessageBoxWithTimer_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.SetNavManager
struct UMessageBoxWithTimer_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.Destruct
struct UMessageBoxWithTimer_C_Destruct_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnEscapeInput_1_2
struct UMessageBoxWithTimer_C_OnEscapeInput_1_2_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.ExecuteUbergraph_MessageBoxWithTimer
struct UMessageBoxWithTimer_C_ExecuteUbergraph_MessageBoxWithTimer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnCancel__DelegateSignature
struct UMessageBoxWithTimer_C_OnCancel__DelegateSignature_Params
{
};

// Function MessageBoxWithTimer.MessageBoxWithTimer_C.OnYes__DelegateSignature
struct UMessageBoxWithTimer_C_OnYes__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

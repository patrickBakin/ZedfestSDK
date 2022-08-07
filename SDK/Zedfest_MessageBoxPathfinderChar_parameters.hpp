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

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput
struct UMessageBoxPathfinderChar_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEventHandler
struct UMessageBoxPathfinderChar_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetStepIndex
struct UMessageBoxPathfinderChar_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnPreviewKeyDown
struct UMessageBoxPathfinderChar_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Destruct
struct UMessageBoxPathfinderChar_C_Destruct_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnEscapeInput_1_2
struct UMessageBoxPathfinderChar_C_OnEscapeInput_1_2_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetNavManager
struct UMessageBoxPathfinderChar_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetStepIndex
struct UMessageBoxPathfinderChar_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.SetOnEscapeBehaviour
struct UMessageBoxPathfinderChar_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.Construct
struct UMessageBoxPathfinderChar_C_Construct_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.PreConstruct
struct UMessageBoxPathfinderChar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.GetEscapeBehaviour
struct UMessageBoxPathfinderChar_C_GetEscapeBehaviour_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_BndEvt__WatchVideoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_BndEvt__EnterCodeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.ExecuteUbergraph_MessageBoxPathfinderChar
struct UMessageBoxPathfinderChar_C_ExecuteUbergraph_MessageBoxPathfinderChar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.OnClose__DelegateSignature
struct UMessageBoxPathfinderChar_C_OnClose__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.NoClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_NoClicked__DelegateSignature_Params
{
};

// Function MessageBoxPathfinderChar.MessageBoxPathfinderChar_C.YesClicked__DelegateSignature
struct UMessageBoxPathfinderChar_C_YesClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

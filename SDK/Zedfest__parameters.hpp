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

// Function .M.OnEscapeInput
struct UM_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function .M.GetEventHandler
struct UM_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function .M.GetStepIndex
struct UM_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function .M.OnPreviewKeyDown
struct UM_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function .M.SetOnEscapeBehaviour
struct UM_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function .M.GetEscapeBehaviour
struct UM_GetEscapeBehaviour_Params
{
};

// Function .M.PreConstruct
struct UM_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function .M.Construct
struct UM_Construct_Params
{
};

// Function .M.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UM_BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function .M.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
struct UM_BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
{
};

// Function .M.SetStepIndex
struct UM_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function .M.SetNavManager
struct UM_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function .M.Destruct
struct UM_Destruct_Params
{
};

// Function .M.OnEscapeInput_1_2
struct UM_OnEscapeInput_1_2_Params
{
};

// Function .M.E
struct UM_E_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function .M.OnClose__DelegateSignature
struct UM_OnClose__DelegateSignature_Params
{
};

// Function .M.NoClicked__DelegateSignature
struct UM_NoClicked__DelegateSignature_Params
{
};

// Function .M.YesClicked__DelegateSignature
struct UM_YesClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

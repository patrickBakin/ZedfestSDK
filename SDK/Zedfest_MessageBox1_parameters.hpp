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

// Function MessageBox1.MessageBox1_C.OnEscapeInput
struct UMessageBox1_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.GetEventHandler
struct UMessageBox1_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.GetStepIndex
struct UMessageBox1_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.OnPreviewKeyDown
struct UMessageBox1_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MessageBox1.MessageBox1_C.BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UMessageBox1_C_BndEvt__Button1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function MessageBox1.MessageBox1_C.BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
struct UMessageBox1_C_BndEvt__Button1_0_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
{
};

// Function MessageBox1.MessageBox1_C.SetStepIndex
struct UMessageBox1_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.SetNavManager
struct UMessageBox1_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.Construct
struct UMessageBox1_C_Construct_Params
{
};

// Function MessageBox1.MessageBox1_C.PreConstruct
struct UMessageBox1_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.GetEscapeBehaviour
struct UMessageBox1_C_GetEscapeBehaviour_Params
{
};

// Function MessageBox1.MessageBox1_C.SetOnEscapeBehaviour
struct UMessageBox1_C_SetOnEscapeBehaviour_Params
{
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.Destruct
struct UMessageBox1_C_Destruct_Params
{
};

// Function MessageBox1.MessageBox1_C.OnEscapeInput_1_2
struct UMessageBox1_C_OnEscapeInput_1_2_Params
{
};

// Function MessageBox1.MessageBox1_C.ExecuteUbergraph_MessageBox1
struct UMessageBox1_C_ExecuteUbergraph_MessageBox1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBox1.MessageBox1_C.OnClose__DelegateSignature
struct UMessageBox1_C_OnClose__DelegateSignature_Params
{
};

// Function MessageBox1.MessageBox1_C.NoClicked__DelegateSignature
struct UMessageBox1_C_NoClicked__DelegateSignature_Params
{
};

// Function MessageBox1.MessageBox1_C.YesClicked__DelegateSignature
struct UMessageBox1_C_YesClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

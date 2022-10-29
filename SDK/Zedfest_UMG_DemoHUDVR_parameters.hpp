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

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMouseTime_Visibility_1
struct UUMG_DemoHUDVR_C_Get_TxtMouseTime_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.FormatTime
struct UUMG_DemoHUDVR_C_FormatTime_Params
{
	float*                                             InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutTime;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.IsDemoPaused
struct UUMG_DemoHUDVR_C_IsDemoPaused_Params
{
	bool                                               Paused;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonUp_1
struct UUMG_DemoHUDVR_C_On_BorderTimeline_MouseButtonUp_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseMove_1
struct UUMG_DemoHUDVR_C_On_BorderTimeline_MouseMove_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtPlayRate_Text_1
struct UUMG_DemoHUDVR_C_Get_TxtPlayRate_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMaxTime_Text_1
struct UUMG_DemoHUDVR_C_Get_TxtMaxTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtCurrentTime_Text_1
struct UUMG_DemoHUDVR_C_Get_TxtCurrentTime_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonDown_1
struct UUMG_DemoHUDVR_C_On_BorderTimeline_MouseButtonDown_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.GetValue_ReplayPercentage
struct UUMG_DemoHUDVR_C_GetValue_ReplayPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUMG_DemoHUDVR_C_BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Tick
struct UUMG_DemoHUDVR_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.ExecuteUbergraph_UMG_DemoHUDVR
struct UUMG_DemoHUDVR_C_ExecuteUbergraph_UMG_DemoHUDVR_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

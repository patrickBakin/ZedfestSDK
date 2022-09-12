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
//Functions
//---------------------------------------------------------------------------

// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMouseTime_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUMG_DemoHUDVR_C::Get_TxtMouseTime_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMouseTime_Visibility_1");

	UUMG_DemoHUDVR_C_Get_TxtMouseTime_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.FormatTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InTime                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutTime                        (Parm, OutParm, ZeroConstructor)

void UUMG_DemoHUDVR_C::FormatTime(float* InTime, struct FString* OutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.FormatTime");

	UUMG_DemoHUDVR_C_FormatTime_Params params;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTime != nullptr)
		*OutTime = params.OutTime;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.IsDemoPaused
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Paused                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoHUDVR_C::IsDemoPaused(bool* Paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.IsDemoPaused");

	UUMG_DemoHUDVR_C_IsDemoPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paused != nullptr)
		*Paused = params.Paused;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUMG_DemoHUDVR_C::On_BorderTimeline_MouseButtonUp_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonUp_1");

	UUMG_DemoHUDVR_C_On_BorderTimeline_MouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseMove_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUMG_DemoHUDVR_C::On_BorderTimeline_MouseMove_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseMove_1");

	UUMG_DemoHUDVR_C_On_BorderTimeline_MouseMove_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtPlayRate_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_DemoHUDVR_C::Get_TxtPlayRate_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtPlayRate_Text_1");

	UUMG_DemoHUDVR_C_Get_TxtPlayRate_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMaxTime_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_DemoHUDVR_C::Get_TxtMaxTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtMaxTime_Text_1");

	UUMG_DemoHUDVR_C_Get_TxtMaxTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtCurrentTime_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUMG_DemoHUDVR_C::Get_TxtCurrentTime_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Get_TxtCurrentTime_Text_1");

	UUMG_DemoHUDVR_C_Get_TxtCurrentTime_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUMG_DemoHUDVR_C::On_BorderTimeline_MouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.On_BorderTimeline_MouseButtonDown_1");

	UUMG_DemoHUDVR_C_On_BorderTimeline_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.GetValue_ReplayPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUMG_DemoHUDVR_C::GetValue_ReplayPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.GetValue_ReplayPercentage");

	UUMG_DemoHUDVR_C_GetValue_ReplayPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoHUDVR_C::BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__ButFrameStepBW_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoHUDVR_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoHUDVR_C::BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__But_RateUp_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoHUDVR_C::BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__But_RateDown_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DemoHUDVR_C::BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__ButFrameStepFW_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoHUDVR_C::BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUMG_DemoHUDVR_C_BndEvt__CheckPause_K2Node_ComponentBoundEvent_331_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoHUDVR_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.Tick");

	UUMG_DemoHUDVR_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.ExecuteUbergraph_UMG_DemoHUDVR
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUMG_DemoHUDVR_C::ExecuteUbergraph_UMG_DemoHUDVR(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_DemoHUDVR.UMG_DemoHUDVR_C.ExecuteUbergraph_UMG_DemoHUDVR");

	UUMG_DemoHUDVR_C_ExecuteUbergraph_UMG_DemoHUDVR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

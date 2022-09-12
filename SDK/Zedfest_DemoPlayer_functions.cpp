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

// Function DemoPlayer.DemoPlayerController.TakeOverVRPawn
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn**                  APawn                          (Parm, ZeroConstructor, IsPlainOldData)

void ADemoPlayerController::TakeOverVRPawn(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.TakeOverVRPawn");

	ADemoPlayerController_TakeOverVRPawn_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.ReleaseVRPawn
// (Native, Public, BlueprintCallable)

void ADemoPlayerController::ReleaseVRPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.ReleaseVRPawn");

	ADemoPlayerController_ReleaseVRPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.OnTakeScreenShot
// (Final, Native, Public, BlueprintCallable)

void ADemoPlayerController::OnTakeScreenShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.OnTakeScreenShot");

	ADemoPlayerController_OnTakeScreenShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.OnIncreasePlaybackSpeed
// (Final, Native, Public, BlueprintCallable)

void ADemoPlayerController::OnIncreasePlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.OnIncreasePlaybackSpeed");

	ADemoPlayerController_OnIncreasePlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.OnDecreasePlaybackSpeed
// (Final, Native, Public, BlueprintCallable)

void ADemoPlayerController::OnDecreasePlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.OnDecreasePlaybackSpeed");

	ADemoPlayerController_OnDecreasePlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADemoPlayerController::GetPlaybackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.GetPlaybackSpeed");

	ADemoPlayerController_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerController.ChangeState
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ADemoPlayerController::ChangeState(struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.ChangeState");

	ADemoPlayerController_ChangeState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerController.BP_ToggleMenu
// (Event, Public, BlueprintEvent)

void ADemoPlayerController::BP_ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerController.BP_ToggleMenu");

	ADemoPlayerController_BP_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StopRecordingReplayBP
// (Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StopRecordingReplayBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StopRecordingReplayBP");

	UDemoPlayerGameInstance_StopRecordingReplayBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StopMovieCapture
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StopMovieCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StopMovieCapture");

	UDemoPlayerGameInstance_StopMovieCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StopDemo
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StopDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StopDemo");

	UDemoPlayerGameInstance_StopDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StepForward
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StepForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StepForward");

	UDemoPlayerGameInstance_StepForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StepBackward
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StepBackward()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StepBackward");

	UDemoPlayerGameInstance_StepBackward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StartRecordingReplayBP
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InName                         (Parm, ZeroConstructor)
// struct FString*                FriendlyName                   (Parm, ZeroConstructor)

void UDemoPlayerGameInstance::StartRecordingReplayBP(struct FString* InName, struct FString* FriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StartRecordingReplayBP");

	UDemoPlayerGameInstance_StartRecordingReplayBP_Params params;
	params.InName = InName;
	params.FriendlyName = FriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.StartMovieCapture
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::StartMovieCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.StartMovieCapture");

	UDemoPlayerGameInstance_StartMovieCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.SetScrubDemoState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UDemoPlayerGameInstance::SetScrubDemoState(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.SetScrubDemoState");

	UDemoPlayerGameInstance_SetScrubDemoState_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.ScrubDemoTimeInSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UDemoPlayerGameInstance::ScrubDemoTimeInSeconds(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.ScrubDemoTimeInSeconds");

	UDemoPlayerGameInstance_ScrubDemoTimeInSeconds_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.ResumePauseDemo
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::ResumePauseDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.ResumePauseDemo");

	UDemoPlayerGameInstance_ResumePauseDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.ReplayPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDemoPlayerGameInstance::ReplayPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.ReplayPercentage");

	UDemoPlayerGameInstance_ReplayPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.PlayQueuedDemo
// (Final, Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::PlayQueuedDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.PlayQueuedDemo");

	UDemoPlayerGameInstance_PlayQueuedDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.PlayDemo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                DemoName                       (Parm, ZeroConstructor)
// float*                         StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDemoPlayerGameInstance::PlayDemo(struct FString* DemoName, float* StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.PlayDemo");

	UDemoPlayerGameInstance_PlayDemo_Params params;
	params.DemoName = DemoName;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.PauseDemo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsPaused                       (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerOwner                    (Parm, ZeroConstructor, IsPlainOldData)

void UDemoPlayerGameInstance::PauseDemo(bool* IsPaused, class APlayerController** PlayerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.PauseDemo");

	UDemoPlayerGameInstance_PauseDemo_Params params;
	params.IsPaused = IsPaused;
	params.PlayerOwner = PlayerOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.IsDemoPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDemoPlayerGameInstance::IsDemoPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.IsDemoPaused");

	UDemoPlayerGameInstance_IsDemoPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.GotoDemoTimeInSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UDemoPlayerGameInstance::GotoDemoTimeInSeconds(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.GotoDemoTimeInSeconds");

	UDemoPlayerGameInstance_GotoDemoTimeInSeconds_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.GetLastScreenShotPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UDemoPlayerGameInstance::GetLastScreenShotPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.GetLastScreenShotPath");

	UDemoPlayerGameInstance_GetLastScreenShotPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DemoTotalTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDemoPlayerGameInstance::DemoTotalTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DemoTotalTime");

	UDemoPlayerGameInstance_DemoTotalTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DemoTotalFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDemoPlayerGameInstance::DemoTotalFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DemoTotalFrames");

	UDemoPlayerGameInstance_DemoTotalFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DemoTimeDilation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDemoPlayerGameInstance::DemoTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DemoTimeDilation");

	UDemoPlayerGameInstance_DemoTimeDilation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDemoPlayerGameInstance::DemoCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentTime");

	UDemoPlayerGameInstance_DemoCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDemoPlayerGameInstance::DemoCurrentFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentFrame");

	UDemoPlayerGameInstance_DemoCurrentFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DemoPlayer.DemoPlayerGameInstance.DeleteDemo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                DemoName                       (Parm, ZeroConstructor)

void UDemoPlayerGameInstance::DeleteDemo(struct FString* DemoName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.DeleteDemo");

	UDemoPlayerGameInstance_DeleteDemo_Params params;
	params.DemoName = DemoName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoPlayerGameInstance.BuildDemoList
// (Native, Public, BlueprintCallable)

void UDemoPlayerGameInstance::BuildDemoList()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoPlayerGameInstance.BuildDemoList");

	UDemoPlayerGameInstance_BuildDemoList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRMotionPawn.ShowPawn
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInShow                        (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRMotionPawn::ShowPawn(bool* bInShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRMotionPawn.ShowPawn");

	ADemoVRMotionPawn_ShowPawn_Params params;
	params.bInShow = bInShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRMotionPawn.SetNetStartup
// (Native, Public, BlueprintCallable)

void ADemoVRMotionPawn::SetNetStartup()
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRMotionPawn.SetNetStartup");

	ADemoVRMotionPawn_SetNetStartup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.TurnAtRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::TurnAtRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.TurnAtRate");

	ADemoVRPawn_TurnAtRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.Turn
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::Turn(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.Turn");

	ADemoVRPawn_Turn_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.MoveUp_World
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::MoveUp_World(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.MoveUp_World");

	ADemoVRPawn_MoveUp_World_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::MoveRight(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.MoveRight");

	ADemoVRPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::MoveForward(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.MoveForward");

	ADemoVRPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.LookUpAtRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::LookUpAtRate(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.LookUpAtRate");

	ADemoVRPawn_LookUpAtRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DemoPlayer.DemoVRPawn.LookUp
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ADemoVRPawn::LookUp(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DemoPlayer.DemoVRPawn.LookUp");

	ADemoVRPawn_LookUp_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

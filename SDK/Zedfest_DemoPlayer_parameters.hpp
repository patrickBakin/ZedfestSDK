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

// Function DemoPlayer.DemoPlayerController.TakeOverVRPawn
struct ADemoPlayerController_TakeOverVRPawn_Params
{
	class APawn**                                      APawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerController.ReleaseVRPawn
struct ADemoPlayerController_ReleaseVRPawn_Params
{
};

// Function DemoPlayer.DemoPlayerController.OnTakeScreenShot
struct ADemoPlayerController_OnTakeScreenShot_Params
{
};

// Function DemoPlayer.DemoPlayerController.OnIncreasePlaybackSpeed
struct ADemoPlayerController_OnIncreasePlaybackSpeed_Params
{
};

// Function DemoPlayer.DemoPlayerController.OnDecreasePlaybackSpeed
struct ADemoPlayerController_OnDecreasePlaybackSpeed_Params
{
};

// Function DemoPlayer.DemoPlayerController.GetPlaybackSpeed
struct ADemoPlayerController_GetPlaybackSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerController.ChangeState
struct ADemoPlayerController_ChangeState_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerController.BP_ToggleMenu
struct ADemoPlayerController_BP_ToggleMenu_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StopRecordingReplayBP
struct UDemoPlayerGameInstance_StopRecordingReplayBP_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StopMovieCapture
struct UDemoPlayerGameInstance_StopMovieCapture_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StopDemo
struct UDemoPlayerGameInstance_StopDemo_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StepForward
struct UDemoPlayerGameInstance_StepForward_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StepBackward
struct UDemoPlayerGameInstance_StepBackward_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.StartRecordingReplayBP
struct UDemoPlayerGameInstance_StartRecordingReplayBP_Params
{
	struct FString*                                    InName;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    FriendlyName;                                             // (Parm, ZeroConstructor)
};

// Function DemoPlayer.DemoPlayerGameInstance.StartMovieCapture
struct UDemoPlayerGameInstance_StartMovieCapture_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.SetScrubDemoState
struct UDemoPlayerGameInstance_SetScrubDemoState_Params
{
	bool*                                              IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.ScrubDemoTimeInSeconds
struct UDemoPlayerGameInstance_ScrubDemoTimeInSeconds_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.ResumePauseDemo
struct UDemoPlayerGameInstance_ResumePauseDemo_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.ReplayPercentage
struct UDemoPlayerGameInstance_ReplayPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.PlayQueuedDemo
struct UDemoPlayerGameInstance_PlayQueuedDemo_Params
{
};

// Function DemoPlayer.DemoPlayerGameInstance.PlayDemo
struct UDemoPlayerGameInstance_PlayDemo_Params
{
	struct FString*                                    DemoName;                                                 // (Parm, ZeroConstructor)
	float*                                             StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.PauseDemo
struct UDemoPlayerGameInstance_PauseDemo_Params
{
	bool*                                              IsPaused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.IsDemoPaused
struct UDemoPlayerGameInstance_IsDemoPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.GotoDemoTimeInSeconds
struct UDemoPlayerGameInstance_GotoDemoTimeInSeconds_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.GetLastScreenShotPath
struct UDemoPlayerGameInstance_GetLastScreenShotPath_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DemoPlayer.DemoPlayerGameInstance.DemoTotalTime
struct UDemoPlayerGameInstance_DemoTotalTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.DemoTotalFrames
struct UDemoPlayerGameInstance_DemoTotalFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.DemoTimeDilation
struct UDemoPlayerGameInstance_DemoTimeDilation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentTime
struct UDemoPlayerGameInstance_DemoCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.DemoCurrentFrame
struct UDemoPlayerGameInstance_DemoCurrentFrame_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DemoPlayer.DemoPlayerGameInstance.DeleteDemo
struct UDemoPlayerGameInstance_DeleteDemo_Params
{
	struct FString*                                    DemoName;                                                 // (Parm, ZeroConstructor)
};

// Function DemoPlayer.DemoPlayerGameInstance.BuildDemoList
struct UDemoPlayerGameInstance_BuildDemoList_Params
{
};

// Function DemoPlayer.DemoVRMotionPawn.ShowPawn
struct ADemoVRMotionPawn_ShowPawn_Params
{
	bool*                                              bInShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRMotionPawn.SetNetStartup
struct ADemoVRMotionPawn_SetNetStartup_Params
{
};

// Function DemoPlayer.DemoVRPawn.TurnAtRate
struct ADemoVRPawn_TurnAtRate_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.Turn
struct ADemoVRPawn_Turn_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.MoveUp_World
struct ADemoVRPawn_MoveUp_World_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.MoveRight
struct ADemoVRPawn_MoveRight_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.MoveForward
struct ADemoVRPawn_MoveForward_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.LookUpAtRate
struct ADemoVRPawn_LookUpAtRate_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DemoPlayer.DemoVRPawn.LookUp
struct ADemoVRPawn_LookUp_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

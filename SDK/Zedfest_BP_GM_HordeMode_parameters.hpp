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

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ServerTravelBackToLobby
struct ABP_GM_HordeMode_C_ServerTravelBackToLobby_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveObjectiveStuff
struct ABP_GM_HordeMode_C_RemoveObjectiveStuff_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Game_Start
struct ABP_GM_HordeMode_C_Game_Start_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Lobby_Update_All
struct ABP_GM_HordeMode_C_Lobby_Update_All_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SpawnDefaultPawnFor
struct ABP_GM_HordeMode_C_SpawnDefaultPawnFor_Params
{
	class AController**                                NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     StartSpot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__FinishedFunc
struct ABP_GM_HordeMode_C_SlomoTimeline__FinishedFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__UpdateFunc
struct ABP_GM_HordeMode_C_SlomoTimeline__UpdateFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__FinishedFunc
struct ABP_GM_HordeMode_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__UpdateFunc
struct ABP_GM_HordeMode_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__FinishedFunc
struct ABP_GM_HordeMode_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__UpdateFunc
struct ABP_GM_HordeMode_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__FinishedFunc
struct ABP_GM_HordeMode_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__UpdateFunc
struct ABP_GM_HordeMode_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnFailure_53F0C10B43420B94BD69E7AAB42F5935
struct ABP_GM_HordeMode_C_OnFailure_53F0C10B43420B94BD69E7AAB42F5935_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnSuccess_53F0C10B43420B94BD69E7AAB42F5935
struct ABP_GM_HordeMode_C_OnSuccess_53F0C10B43420B94BD69E7AAB42F5935_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.STARTWAVE
struct ABP_GM_HordeMode_C_STARTWAVE_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_PostLogin
struct ABP_GM_HordeMode_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimer
struct ABP_GM_HordeMode_C_StartPauseTimer_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartGame
struct ABP_GM_HordeMode_C_StartGame_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SwapCharacter
struct ABP_GM_HordeMode_C_SwapCharacter_Params
{
	class APlayerController**                          Player_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Changed_Status;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              CharacterMesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Update_ALL
struct ABP_GM_HordeMode_C_Update_ALL_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RespawnPlayer
struct ABP_GM_HordeMode_C_RespawnPlayer_Params
{
	class APlayerController**                          Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.AddToKickList
struct ABP_GM_HordeMode_C_AddToKickList_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Server_Update_GameSettings
struct ABP_GM_HordeMode_C_Server_Update_GameSettings_Params
{
	class UTexture2D**                                 MapImage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      MapTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               MapID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.KickPlayer
struct ABP_GM_HordeMode_C_KickPlayer_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_OnLogout
struct ABP_GM_HordeMode_C_K2_OnLogout_Params
{
	class AController**                                ExitingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReceiveBeginPlay
struct ABP_GM_HordeMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckAlivePlayers
struct ABP_GM_HordeMode_C_CheckAlivePlayers_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.End Game
struct ABP_GM_HordeMode_C_End_Game_Params
{
	bool*                                              Win_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveAlivePlayer
struct ABP_GM_HordeMode_C_RemoveAlivePlayer_Params
{
	bool*                                              Remove_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.EndRound
struct ABP_GM_HordeMode_C_EndRound_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.WaveSpawn
struct ABP_GM_HordeMode_C_WaveSpawn_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowDifficultyText
struct ABP_GM_HordeMode_C_ShowDifficultyText_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowFriendlyBotCountText
struct ABP_GM_HordeMode_C_ShowFriendlyBotCountText_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.LoadingScreenWhenChangingLevel
struct ABP_GM_HordeMode_C_LoadingScreenWhenChangingLevel_Params
{
	struct FString*                                    MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HandleStartingNewPlayer
struct ABP_GM_HordeMode_C_HandleStartingNewPlayer_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HordeIntEvent
struct ABP_GM_HordeMode_C_HordeIntEvent_Params
{
	int*                                               HordeInt;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReturnToLobby
struct ABP_GM_HordeMode_C_ReturnToLobby_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Show WaveAmountText
struct ABP_GM_HordeMode_C_Show_WaveAmountText_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SequencerToController
struct ABP_GM_HordeMode_C_SequencerToController_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.GMUnderGroundObjective
struct ABP_GM_HordeMode_C_GMUnderGroundObjective_Params
{
	int*                                               CurrentObjectiveInt;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveProgressNumber;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.MapVoteEvent
struct ABP_GM_HordeMode_C_MapVoteEvent_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowGameModeText
struct ABP_GM_HordeMode_C_ShowGameModeText_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HeadName
struct ABP_GM_HordeMode_C_HeadName_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ResetSpawnZedsMacro
struct ABP_GM_HordeMode_C_ResetSpawnZedsMacro_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.UpdateServerBrowserProperties
struct ABP_GM_HordeMode_C_UpdateServerBrowserProperties_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.TimeAttackPUGSClosing
struct ABP_GM_HordeMode_C_TimeAttackPUGSClosing_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckZedEventTimer11
struct ABP_GM_HordeMode_C_CheckZedEventTimer11_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimerFirstTime
struct ABP_GM_HordeMode_C_StartPauseTimerFirstTime_Params
{
};

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ExecuteUbergraph_BP_GM_HordeMode
struct ABP_GM_HordeMode_C_ExecuteUbergraph_BP_GM_HordeMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

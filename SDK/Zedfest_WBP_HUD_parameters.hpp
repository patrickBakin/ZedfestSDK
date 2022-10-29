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

// Function WBP_HUD.WBP_HUD_C.Get_ObjectiveTimeLeftText_Text_1
struct UWBP_HUD_C_Get_ObjectiveTimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.Get_TakeABreakVotingPlayers_Text_1
struct UWBP_HUD_C_Get_TakeABreakVotingPlayers_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.TakeABreak
struct UWBP_HUD_C_TakeABreak_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.Get_SkipInternmissionBox_Visibility_1
struct UWBP_HUD_C_Get_SkipInternmissionBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD.WBP_HUD_C.Get_SkipPauseCheckMark_Brush_1
struct UWBP_HUD_C_Get_SkipPauseCheckMark_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.Get_SkipPauseVotingPlayers_Text_1
struct UWBP_HUD_C_Get_SkipPauseVotingPlayers_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.GameWave2
struct UWBP_HUD_C_GameWave2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.ObjectiveProgressText2
struct UWBP_HUD_C_ObjectiveProgressText2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.ObjectiveProgressText
struct UWBP_HUD_C_ObjectiveProgressText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.ObjectiveClock
struct UWBP_HUD_C_ObjectiveClock_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.PlayerLivesLeft
struct UWBP_HUD_C_PlayerLivesLeft_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.EventText
struct UWBP_HUD_C_EventText_Params
{
};

// Function WBP_HUD.WBP_HUD_C.GetEnemiesAlive
struct UWBP_HUD_C_GetEnemiesAlive_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.PauseTimeVisibility
struct UWBP_HUD_C_PauseTimeVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_HUD.WBP_HUD_C.GetPauseTime
struct UWBP_HUD_C_GetPauseTime_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.GetGameWave
struct UWBP_HUD_C_GetGameWave_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_HUD.WBP_HUD_C.ObjectiveEvent
struct UWBP_HUD_C_ObjectiveEvent_Params
{
	struct FText*                                      ObjectiveText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowObjective1Image_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowObjective2Image_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HUD.WBP_HUD_C.Construct
struct UWBP_HUD_C_Construct_Params
{
};

// Function WBP_HUD.WBP_HUD_C.UpdatePlayerInfoFrontWBP
struct UWBP_HUD_C_UpdatePlayerInfoFrontWBP_Params
{
	TArray<struct FS_Player_Info1>*                    Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APlayerState*>*                       Game_States;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               MaxPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_HUD.WBP_HUD_C.ClearPlayerInfoFrontListWBP
struct UWBP_HUD_C_ClearPlayerInfoFrontListWBP_Params
{
};

// Function WBP_HUD.WBP_HUD_C.ExecuteUbergraph_WBP_HUD
struct UWBP_HUD_C_ExecuteUbergraph_WBP_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

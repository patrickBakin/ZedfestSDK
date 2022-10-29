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

// Function WBP_Scoreboard.WBP_Scoreboard_C.Construct
struct UWBP_Scoreboard_C_Construct_Params
{
};

// Function WBP_Scoreboard.WBP_Scoreboard_C.UpdatePlayerInfo
struct UWBP_Scoreboard_C_UpdatePlayerInfo_Params
{
	TArray<struct FS_Player_Info1>*                    Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APlayerState*>*                       Game_States;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText*                                      DifficultyText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      GameModeText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Scoreboard.WBP_Scoreboard_C.MoveScoreBoard
struct UWBP_Scoreboard_C_MoveScoreBoard_Params
{
};

// Function WBP_Scoreboard.WBP_Scoreboard_C.ExecuteUbergraph_WBP_Scoreboard
struct UWBP_Scoreboard_C_ExecuteUbergraph_WBP_Scoreboard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

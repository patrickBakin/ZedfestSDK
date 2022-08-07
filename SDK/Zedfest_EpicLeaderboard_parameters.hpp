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

// Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntryWithMetadata
struct UEpicLeaderboardObject_SubmitEntryWithMetadata_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	float*                                             PlayerScore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>*              MetaData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntry
struct UEpicLeaderboardObject_SubmitEntry_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	float*                                             PlayerScore;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EpicLeaderboard.EpicLeaderboardObject.GetLeaderboardEntries
struct UEpicLeaderboardObject_GetLeaderboardEntries_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	bool*                                              AroundPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EpicLeaderboard.EpicLeaderboardObject.GetEpicLeaderboard
struct UEpicLeaderboardObject_GetEpicLeaderboard_Params
{
	struct FString*                                    LeaderboardID;                                            // (Parm, ZeroConstructor)
	struct FString*                                    LeaderboardKey;                                           // (Parm, ZeroConstructor)
	class UEpicLeaderboardObject*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EpicLeaderboard.EpicLeaderboardObject.CleanupName
struct UEpicLeaderboardObject_CleanupName_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

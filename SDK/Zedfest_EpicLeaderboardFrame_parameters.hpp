#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StopLoadingAnimation
struct UEpicLeaderboardFrame_C_StopLoadingAnimation_Params
{
};

// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StartLoadingAnimation
struct UEpicLeaderboardFrame_C_StartLoadingAnimation_Params
{
};

// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.UpdateScores
struct UEpicLeaderboardFrame_C_UpdateScores_Params
{
	TArray<struct FEpicLeaderboardEntry>               Leaderboard_Entries;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FEpicLeaderboardEntry*                      SpotlightEntry;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    HighlightUser;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UClass**                                     EntryClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.InitFields
struct UEpicLeaderboardEntry_C_InitFields_Params
{
	bool*                                              Highlight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEpicLeaderboardEntry*                      ScoreEntry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.ExecuteUbergraph_EpicLeaderboardEntry
struct UEpicLeaderboardEntry_C_ExecuteUbergraph_EpicLeaderboardEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

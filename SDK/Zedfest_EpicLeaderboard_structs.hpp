#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicLeaderboard.EpicLeaderboardEntry
// 0x0098
struct FEpicLeaderboardEntry
{
	int                                                rank;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     username;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     score;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     country;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               MetaData;                                                 // 0x0038(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     meta;                                                     // 0x0088(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

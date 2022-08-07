#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EpicLeaderboard.EpicLeaderboardObject
// 0x00E8 (0x0110 - 0x0028)
class UEpicLeaderboardObject : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     ID;                                                       // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     Key;                                                      // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FEpicLeaderboardEntry>               LeaderboardEntries;                                       // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FEpicLeaderboardEntry                       PlayerEntry;                                              // 0x0078(0x0098) (Edit, BlueprintVisible, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicLeaderboard.EpicLeaderboardObject");
		return ptr;
	}


	void SubmitEntryWithMetadata(struct FString* PlayerName, float* PlayerScore, TMap<struct FString, struct FString>* MetaData);
	void SubmitEntry(struct FString* PlayerName, float* PlayerScore);
	void GetLeaderboardEntries(struct FString* PlayerName, bool* AroundPlayer);
	class UEpicLeaderboardObject* STATIC_GetEpicLeaderboard(struct FString* LeaderboardID, struct FString* LeaderboardKey);
	struct FString STATIC_CleanupName(struct FString* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

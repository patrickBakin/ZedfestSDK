// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StopLoadingAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UEpicLeaderboardFrame_C::StopLoadingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StopLoadingAnimation");

	UEpicLeaderboardFrame_C_StopLoadingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StartLoadingAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UEpicLeaderboardFrame_C::StartLoadingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.StartLoadingAnimation");

	UEpicLeaderboardFrame_C_StartLoadingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.UpdateScores
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEpicLeaderboardEntry> Leaderboard_Entries            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FEpicLeaderboardEntry*  SpotlightEntry                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString*                HighlightUser                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UClass**                 EntryClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEpicLeaderboardFrame_C::UpdateScores(struct FEpicLeaderboardEntry* SpotlightEntry, struct FString* HighlightUser, class UClass** EntryClass, TArray<struct FEpicLeaderboardEntry>* Leaderboard_Entries)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardFrame.EpicLeaderboardFrame_C.UpdateScores");

	UEpicLeaderboardFrame_C_UpdateScores_Params params;
	params.SpotlightEntry = SpotlightEntry;
	params.HighlightUser = HighlightUser;
	params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Leaderboard_Entries != nullptr)
		*Leaderboard_Entries = params.Leaderboard_Entries;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

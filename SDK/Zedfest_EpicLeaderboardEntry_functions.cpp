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

// Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.InitFields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Highlight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEpicLeaderboardEntry*  ScoreEntry                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEpicLeaderboardEntry_C::InitFields(bool* Highlight, struct FEpicLeaderboardEntry* ScoreEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.InitFields");

	UEpicLeaderboardEntry_C_InitFields_Params params;
	params.Highlight = Highlight;
	params.ScoreEntry = ScoreEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.ExecuteUbergraph_EpicLeaderboardEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEpicLeaderboardEntry_C::ExecuteUbergraph_EpicLeaderboardEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardEntry.EpicLeaderboardEntry_C.ExecuteUbergraph_EpicLeaderboardEntry");

	UEpicLeaderboardEntry_C_ExecuteUbergraph_EpicLeaderboardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

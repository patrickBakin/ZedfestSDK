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

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

// Function EpicLeaderboardEntryInterface.EpicLeaderboardEntryInterface_C.InitFields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Highlight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEpicLeaderboardEntry*  ScoreEntry                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UEpicLeaderboardEntryInterface_C::InitFields(bool* Highlight, struct FEpicLeaderboardEntry* ScoreEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboardEntryInterface.EpicLeaderboardEntryInterface_C.InitFields");

	UEpicLeaderboardEntryInterface_C_InitFields_Params params;
	params.Highlight = Highlight;
	params.ScoreEntry = ScoreEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

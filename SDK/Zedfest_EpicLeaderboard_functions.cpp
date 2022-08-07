// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntryWithMetadata
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)
// float*                         PlayerScore                    (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, struct FString>* MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UEpicLeaderboardObject::SubmitEntryWithMetadata(struct FString* PlayerName, float* PlayerScore, TMap<struct FString, struct FString>* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntryWithMetadata");

	UEpicLeaderboardObject_SubmitEntryWithMetadata_Params params;
	params.PlayerName = PlayerName;
	params.PlayerScore = PlayerScore;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)
// float*                         PlayerScore                    (Parm, ZeroConstructor, IsPlainOldData)

void UEpicLeaderboardObject::SubmitEntry(struct FString* PlayerName, float* PlayerScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboard.EpicLeaderboardObject.SubmitEntry");

	UEpicLeaderboardObject_SubmitEntry_Params params;
	params.PlayerName = PlayerName;
	params.PlayerScore = PlayerScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboard.EpicLeaderboardObject.GetLeaderboardEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)
// bool*                          AroundPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UEpicLeaderboardObject::GetLeaderboardEntries(struct FString* PlayerName, bool* AroundPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboard.EpicLeaderboardObject.GetLeaderboardEntries");

	UEpicLeaderboardObject_GetLeaderboardEntries_Params params;
	params.PlayerName = PlayerName;
	params.AroundPlayer = AroundPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicLeaderboard.EpicLeaderboardObject.GetEpicLeaderboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                LeaderboardID                  (Parm, ZeroConstructor)
// struct FString*                LeaderboardKey                 (Parm, ZeroConstructor)
// class UEpicLeaderboardObject*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEpicLeaderboardObject* UEpicLeaderboardObject::STATIC_GetEpicLeaderboard(struct FString* LeaderboardID, struct FString* LeaderboardKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboard.EpicLeaderboardObject.GetEpicLeaderboard");

	UEpicLeaderboardObject_GetEpicLeaderboard_Params params;
	params.LeaderboardID = LeaderboardID;
	params.LeaderboardKey = LeaderboardKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EpicLeaderboard.EpicLeaderboardObject.CleanupName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UEpicLeaderboardObject::STATIC_CleanupName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicLeaderboard.EpicLeaderboardObject.CleanupName");

	UEpicLeaderboardObject_CleanupName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WBP_Scoreboard.WBP_Scoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Scoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard.WBP_Scoreboard_C.Construct");

	UWBP_Scoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard.WBP_Scoreboard_C.UpdatePlayerInfo
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Player_Info1>* Players                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APlayerState*>*   Game_States                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText*                  DifficultyText                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Scoreboard_C::UpdatePlayerInfo(TArray<struct FS_Player_Info1>* Players, TArray<class APlayerState*>* Game_States, struct FText* DifficultyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard.WBP_Scoreboard_C.UpdatePlayerInfo");

	UWBP_Scoreboard_C_UpdatePlayerInfo_Params params;
	params.Players = Players;
	params.Game_States = Game_States;
	params.DifficultyText = DifficultyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard.WBP_Scoreboard_C.MoveScoreBoard
// (BlueprintCallable, BlueprintEvent)

void UWBP_Scoreboard_C::MoveScoreBoard()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard.WBP_Scoreboard_C.MoveScoreBoard");

	UWBP_Scoreboard_C_MoveScoreBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Scoreboard.WBP_Scoreboard_C.ExecuteUbergraph_WBP_Scoreboard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Scoreboard_C::ExecuteUbergraph_WBP_Scoreboard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard.WBP_Scoreboard_C.ExecuteUbergraph_WBP_Scoreboard");

	UWBP_Scoreboard_C_ExecuteUbergraph_WBP_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

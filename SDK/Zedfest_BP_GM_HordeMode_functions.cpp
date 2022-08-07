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

// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ServerTravelBackToLobby
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ServerTravelBackToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ServerTravelBackToLobby");

	ABP_GM_HordeMode_C_ServerTravelBackToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveObjectiveStuff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::RemoveObjectiveStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveObjectiveStuff");

	ABP_GM_HordeMode_C_RemoveObjectiveStuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Game_Start
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::Game_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Game_Start");

	ABP_GM_HordeMode_C_Game_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Lobby_Update_All
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::Lobby_Update_All()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Lobby_Update_All");

	ABP_GM_HordeMode_C_Lobby_Update_All_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SpawnDefaultPawnFor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 StartSpot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* ABP_GM_HordeMode_C::SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.SpawnDefaultPawnFor");

	ABP_GM_HordeMode_C_SpawnDefaultPawnFor_Params params;
	params.NewPlayer = NewPlayer;
	params.StartSpot = StartSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::SlomoTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__FinishedFunc");

	ABP_GM_HordeMode_C_SlomoTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::SlomoTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.SlomoTimeline__UpdateFunc");

	ABP_GM_HordeMode_C_SlomoTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__FinishedFunc");

	ABP_GM_HordeMode_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_0__UpdateFunc");

	ABP_GM_HordeMode_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__FinishedFunc");

	ABP_GM_HordeMode_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_1__UpdateFunc");

	ABP_GM_HordeMode_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__FinishedFunc");

	ABP_GM_HordeMode_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_GM_HordeMode_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Timeline_2__UpdateFunc");

	ABP_GM_HordeMode_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnFailure_53F0C10B43420B94BD69E7AAB42F5935
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::OnFailure_53F0C10B43420B94BD69E7AAB42F5935()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnFailure_53F0C10B43420B94BD69E7AAB42F5935");

	ABP_GM_HordeMode_C_OnFailure_53F0C10B43420B94BD69E7AAB42F5935_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnSuccess_53F0C10B43420B94BD69E7AAB42F5935
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::OnSuccess_53F0C10B43420B94BD69E7AAB42F5935()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.OnSuccess_53F0C10B43420B94BD69E7AAB42F5935");

	ABP_GM_HordeMode_C_OnSuccess_53F0C10B43420B94BD69E7AAB42F5935_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.STARTWAVE
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::STARTWAVE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.STARTWAVE");

	ABP_GM_HordeMode_C_STARTWAVE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_PostLogin");

	ABP_GM_HordeMode_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::StartPauseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimer");

	ABP_GM_HordeMode_C_StartPauseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartGame");

	ABP_GM_HordeMode_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SwapCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Changed_Status                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          CharacterMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::SwapCharacter(class APlayerController** Player_Controller, bool* Changed_Status, class USkeletalMesh** CharacterMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.SwapCharacter");

	ABP_GM_HordeMode_C_SwapCharacter_Params params;
	params.Player_Controller = Player_Controller;
	params.Changed_Status = Changed_Status;
	params.CharacterMesh = CharacterMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Update_ALL
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::Update_ALL()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Update_ALL");

	ABP_GM_HordeMode_C_Update_ALL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RespawnPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::RespawnPlayer(class APlayerController** Controller, class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.RespawnPlayer");

	ABP_GM_HordeMode_C_RespawnPlayer_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.AddToKickList
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::AddToKickList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.AddToKickList");

	ABP_GM_HordeMode_C_AddToKickList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Server_Update_GameSettings
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             MapImage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MapTime                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           MapID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::Server_Update_GameSettings(class UTexture2D** MapImage, struct FText* MapName, struct FText* MapTime, int* MapID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Server_Update_GameSettings");

	ABP_GM_HordeMode_C_Server_Update_GameSettings_Params params;
	params.MapImage = MapImage;
	params.MapName = MapName;
	params.MapTime = MapTime;
	params.MapID = MapID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.KickPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::KickPlayer(int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.KickPlayer");

	ABP_GM_HordeMode_C_KickPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.K2_OnLogout");

	ABP_GM_HordeMode_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GM_HordeMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReceiveBeginPlay");

	ABP_GM_HordeMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckAlivePlayers
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::CheckAlivePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckAlivePlayers");

	ABP_GM_HordeMode_C_CheckAlivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.End Game
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Win_                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::End_Game(bool* Win_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.End Game");

	ABP_GM_HordeMode_C_End_Game_Params params;
	params.Win_ = Win_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveAlivePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Remove_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::RemoveAlivePlayer(bool* Remove_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.RemoveAlivePlayer");

	ABP_GM_HordeMode_C_RemoveAlivePlayer_Params params;
	params.Remove_ = Remove_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.EndRound
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::EndRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.EndRound");

	ABP_GM_HordeMode_C_EndRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.WaveSpawn
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::WaveSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.WaveSpawn");

	ABP_GM_HordeMode_C_WaveSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowDifficultyText
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ShowDifficultyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowDifficultyText");

	ABP_GM_HordeMode_C_ShowDifficultyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowFriendlyBotCountText
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ShowFriendlyBotCountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowFriendlyBotCountText");

	ABP_GM_HordeMode_C_ShowFriendlyBotCountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.LoadingScreenWhenChangingLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GM_HordeMode_C::LoadingScreenWhenChangingLevel(struct FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.LoadingScreenWhenChangingLevel");

	ABP_GM_HordeMode_C_LoadingScreenWhenChangingLevel_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::HandleStartingNewPlayer(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.HandleStartingNewPlayer");

	ABP_GM_HordeMode_C_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HordeIntEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           HordeInt                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::HordeIntEvent(int* HordeInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.HordeIntEvent");

	ABP_GM_HordeMode_C_HordeIntEvent_Params params;
	params.HordeInt = HordeInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReturnToLobby
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ReturnToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ReturnToLobby");

	ABP_GM_HordeMode_C_ReturnToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.Show WaveAmountText
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::Show_WaveAmountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.Show WaveAmountText");

	ABP_GM_HordeMode_C_Show_WaveAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.SequencerToController
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::SequencerToController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.SequencerToController");

	ABP_GM_HordeMode_C_SequencerToController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.GMUnderGroundObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentObjectiveInt            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ObjectiveProgressNumber        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::GMUnderGroundObjective(int* CurrentObjectiveInt, int* ObjectiveProgressNumber, bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.GMUnderGroundObjective");

	ABP_GM_HordeMode_C_GMUnderGroundObjective_Params params;
	params.CurrentObjectiveInt = CurrentObjectiveInt;
	params.ObjectiveProgressNumber = ObjectiveProgressNumber;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.MapVoteEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::MapVoteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.MapVoteEvent");

	ABP_GM_HordeMode_C_MapVoteEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowGameModeText
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ShowGameModeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ShowGameModeText");

	ABP_GM_HordeMode_C_ShowGameModeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.HeadName
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::HeadName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.HeadName");

	ABP_GM_HordeMode_C_HeadName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ResetSpawnZedsMacro
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::ResetSpawnZedsMacro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ResetSpawnZedsMacro");

	ABP_GM_HordeMode_C_ResetSpawnZedsMacro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.UpdateServerBrowserProperties
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::UpdateServerBrowserProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.UpdateServerBrowserProperties");

	ABP_GM_HordeMode_C_UpdateServerBrowserProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckZedEventTimer11
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::CheckZedEventTimer11()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.CheckZedEventTimer11");

	ABP_GM_HordeMode_C_CheckZedEventTimer11_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimerFirstTime
// (BlueprintCallable, BlueprintEvent)

void ABP_GM_HordeMode_C::StartPauseTimerFirstTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.StartPauseTimerFirstTime");

	ABP_GM_HordeMode_C_StartPauseTimerFirstTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_HordeMode.BP_GM_HordeMode_C.ExecuteUbergraph_BP_GM_HordeMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GM_HordeMode_C::ExecuteUbergraph_BP_GM_HordeMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_HordeMode.BP_GM_HordeMode_C.ExecuteUbergraph_BP_GM_HordeMode");

	ABP_GM_HordeMode_C_ExecuteUbergraph_BP_GM_HordeMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedkill
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Headshot_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::AddZedkill(bool* Headshot_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedkill");

	ABP_Horde_PlayerState_C_AddZedkill_Params params;
	params.Headshot_ = Headshot_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerScore
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::AddPlayerScore(int* score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerScore");

	ABP_Horde_PlayerState_C_AddPlayerScore_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerMoney
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::AddPlayerMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerMoney");

	ABP_Horde_PlayerState_C_AddPlayerMoney_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerHealthPS
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::PlayerHealthPS(int* PlayerHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerHealthPS");

	ABP_Horde_PlayerState_C_PlayerHealthPS_Params params;
	params.PlayerHealth = PlayerHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxHealthPS
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::PlayerMaxHealthPS(int* PlayerHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxHealthPS");

	ABP_Horde_PlayerState_C_PlayerMaxHealthPS_Params params;
	params.PlayerHealth = PlayerHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerShieldPS
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerShield                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::PlayerShieldPS(int* PlayerShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerShieldPS");

	ABP_Horde_PlayerState_C_PlayerShieldPS_Params params;
	params.PlayerShield = PlayerShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxShieldPS
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerShield                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::PlayerMaxShieldPS(int* PlayerShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxShieldPS");

	ABP_Horde_PlayerState_C_PlayerMaxShieldPS_Params params;
	params.PlayerShield = PlayerShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedAssist
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Horde_PlayerState_C::AddZedAssist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedAssist");

	ABP_Horde_PlayerState_C_AddZedAssist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteSkipPause
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SkipPause_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentPlayers                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::VoteSkipPause(bool* SkipPause_, int* CurrentPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteSkipPause");

	ABP_Horde_PlayerState_C_VoteSkipPause_Params params;
	params.SkipPause_ = SkipPause_;
	params.CurrentPlayers = CurrentPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.RemovePauseVote
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Horde_PlayerState_C::RemovePauseVote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.RemovePauseVote");

	ABP_Horde_PlayerState_C_RemovePauseVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteForBreak
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          VoteBreak_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentPlayers                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::VoteForBreak(bool* VoteBreak_, int* CurrentPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteForBreak");

	ABP_Horde_PlayerState_C_VoteForBreak_Params params;
	params.VoteBreak_ = VoteBreak_;
	params.CurrentPlayers = CurrentPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ResetWaveInfo
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Horde_PlayerState_C::ResetWaveInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ResetWaveInfo");

	ABP_Horde_PlayerState_C_ResetWaveInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ExecuteUbergraph_BP_Horde_PlayerState
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Horde_PlayerState_C::ExecuteUbergraph_BP_Horde_PlayerState(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ExecuteUbergraph_BP_Horde_PlayerState");

	ABP_Horde_PlayerState_C_ExecuteUbergraph_BP_Horde_PlayerState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedkill
struct ABP_Horde_PlayerState_C_AddZedkill_Params
{
	bool*                                              Headshot_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerScore
struct ABP_Horde_PlayerState_C_AddPlayerScore_Params
{
	int*                                               score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddPlayerMoney
struct ABP_Horde_PlayerState_C_AddPlayerMoney_Params
{
	int*                                               Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerHealthPS
struct ABP_Horde_PlayerState_C_PlayerHealthPS_Params
{
	int*                                               PlayerHealth;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxHealthPS
struct ABP_Horde_PlayerState_C_PlayerMaxHealthPS_Params
{
	int*                                               PlayerHealth;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerShieldPS
struct ABP_Horde_PlayerState_C_PlayerShieldPS_Params
{
	int*                                               PlayerShield;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.PlayerMaxShieldPS
struct ABP_Horde_PlayerState_C_PlayerMaxShieldPS_Params
{
	int*                                               PlayerShield;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.AddZedAssist
struct ABP_Horde_PlayerState_C_AddZedAssist_Params
{
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteSkipPause
struct ABP_Horde_PlayerState_C_VoteSkipPause_Params
{
	bool*                                              SkipPause_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentPlayers;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.RemovePauseVote
struct ABP_Horde_PlayerState_C_RemovePauseVote_Params
{
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.VoteForBreak
struct ABP_Horde_PlayerState_C_VoteForBreak_Params
{
	bool*                                              VoteBreak_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentPlayers;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ResetWaveInfo
struct ABP_Horde_PlayerState_C_ResetWaveInfo_Params
{
};

// Function BP_Horde_PlayerState.BP_Horde_PlayerState_C.ExecuteUbergraph_BP_Horde_PlayerState
struct ABP_Horde_PlayerState_C_ExecuteUbergraph_BP_Horde_PlayerState_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

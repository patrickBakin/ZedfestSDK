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

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Remove_Zombies_Left
struct ABP_Horde_Gamestate_C_Remove_Zombies_Left_Params
{
	int*                                               B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add_Zombies_Left
struct ABP_Horde_Gamestate_C_Add_Zombies_Left_Params
{
	int*                                               B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Change GameState
struct ABP_Horde_Gamestate_C_Change_GameState_Params
{
	TEnumAsByte<E_GameState>*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ReceiveBeginPlay
struct ABP_Horde_Gamestate_C_ReceiveBeginPlay_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Add Current Zombie
struct ABP_Horde_Gamestate_C_Add_Current_Zombie_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveCurrentZombie
struct ABP_Horde_Gamestate_C_RemoveCurrentZombie_Params
{
	int*                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddObjectivePickup
struct ABP_Horde_Gamestate_C_AddObjectivePickup_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveObjectivePickup
struct ABP_Horde_Gamestate_C_RemoveObjectivePickup_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveReusableSwitchOpen
struct ABP_Horde_Gamestate_C_ObjectiveReusableSwitchOpen_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveButtonDisabled
struct ABP_Horde_Gamestate_C_ObjectiveButtonDisabled_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.AddTotalMoney
struct ABP_Horde_Gamestate_C_AddTotalMoney_Params
{
	int*                                               TotalMoney;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.RemoveTotalMoney
struct ABP_Horde_Gamestate_C_RemoveTotalMoney_Params
{
	int*                                               TotalMoney;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GSUnderGroundObjective
struct ABP_Horde_Gamestate_C_GSUnderGroundObjective_Params
{
	int*                                               CurrentObjectiveInt;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveProgressNumber;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GS ZedsLeft
struct ABP_Horde_Gamestate_C_GS_ZedsLeft_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveItemPickup
struct ABP_Horde_Gamestate_C_ObjectiveItemPickup_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.EventStartObjective
struct ABP_Horde_Gamestate_C_EventStartObjective_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveObjectPlaced
struct ABP_Horde_Gamestate_C_ObjectiveObjectPlaced_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.Siren
struct ABP_Horde_Gamestate_C_Siren_Params
{
	class USoundBase**                                 Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.GameStateDifficulty
struct ABP_Horde_Gamestate_C_GameStateDifficulty_Params
{
	int*                                               CurrentDifficulty;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ObjectiveUpdaterEvent
struct ABP_Horde_Gamestate_C_ObjectiveUpdaterEvent_Params
{
	int*                                               ObjectiveNumber;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ObjectiveProgressNumber;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ResetObjectivesEvent
struct ABP_Horde_Gamestate_C_ResetObjectivesEvent_Params
{
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.StopObjectiveTimer
struct ABP_Horde_Gamestate_C_StopObjectiveTimer_Params
{
	bool*                                              Start_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.ExecuteUbergraph_BP_Horde_Gamestate
struct ABP_Horde_Gamestate_C_ExecuteUbergraph_BP_Horde_Gamestate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Gamestate.BP_Horde_Gamestate_C.OpenElevators__DelegateSignature
struct ABP_Horde_Gamestate_C_OpenElevators__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

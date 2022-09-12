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

// Function C_CXP_Component.C_CXP_Component_C.UpdateSKill
struct UC_CXP_Component_C_UpdateSKill_Params
{
	TEnumAsByte<E_SkillTree>*                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Sillxp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531
struct UC_CXP_Component_C_OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531
struct UC_CXP_Component_C_OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.OnFailure_6BC9A43C4089481900C640A108A5FEF0
struct UC_CXP_Component_C_OnFailure_6BC9A43C4089481900C640A108A5FEF0_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_6BC9A43C4089481900C640A108A5FEF0
struct UC_CXP_Component_C_OnSuccess_6BC9A43C4089481900C640A108A5FEF0_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23
struct UC_CXP_Component_C_OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23
struct UC_CXP_Component_C_OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.OnFailure_1F9C95E046BA49A56946DD9F5D872558
struct UC_CXP_Component_C_OnFailure_1F9C95E046BA49A56946DD9F5D872558_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.OnSuccess_1F9C95E046BA49A56946DD9F5D872558
struct UC_CXP_Component_C_OnSuccess_1F9C95E046BA49A56946DD9F5D872558_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.Initialize
struct UC_CXP_Component_C_Initialize_Params
{
	class ABP_Base_HordeController_C**                 PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.AddXP
struct UC_CXP_Component_C_AddXP_Params
{
	float*                                             XpToAdd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C_CXP_Component.C_CXP_Component_C.UpdateHud
struct UC_CXP_Component_C_UpdateHud_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.CheckForLevelUp
struct UC_CXP_Component_C_CheckForLevelUp_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.LevelupEvents
struct UC_CXP_Component_C_LevelupEvents_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.ReceiveBeginPlay
struct UC_CXP_Component_C_ReceiveBeginPlay_Params
{
};

// Function C_CXP_Component.C_CXP_Component_C.ExecuteUbergraph_C_CXP_Component
struct UC_CXP_Component_C_ExecuteUbergraph_C_CXP_Component_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

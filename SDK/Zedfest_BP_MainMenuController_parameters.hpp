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

// Function BP_MainMenuController.BP_MainMenuController_C.LevelUp
struct ABP_MainMenuController_C_LevelUp_Params
{
};

// Function BP_MainMenuController.BP_MainMenuController_C.AddOnlySkillXp
struct ABP_MainMenuController_C_AddOnlySkillXp_Params
{
	TEnumAsByte<E_SkillTree>*                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenuController.BP_MainMenuController_C.SkillMaxReached
struct ABP_MainMenuController_C_SkillMaxReached_Params
{
	TEnumAsByte<E_SkillTree>*                          SkillReached;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenuController.BP_MainMenuController_C.AddXP
struct ABP_MainMenuController_C_AddXP_Params
{
	float*                                             XpToAdd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainMenuController.BP_MainMenuController_C.ExecuteUbergraph_BP_MainMenuController
struct ABP_MainMenuController_C_ExecuteUbergraph_BP_MainMenuController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

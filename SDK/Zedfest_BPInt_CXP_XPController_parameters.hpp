#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.SkillMaxReached
struct UBPInt_CXP_XPController_C_SkillMaxReached_Params
{
	TEnumAsByte<E_SkillTree>*                          SkillReached;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddOnlySkillXp
struct UBPInt_CXP_XPController_C_AddOnlySkillXp_Params
{
	TEnumAsByte<E_SkillTree>*                          Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.LevelUp
struct UBPInt_CXP_XPController_C_LevelUp_Params
{
};

// Function BPInt_CXP_XPController.BPInt_CXP_XPController_C.AddXP
struct UBPInt_CXP_XPController_C_AddXP_Params
{
	float*                                             XpToAdd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

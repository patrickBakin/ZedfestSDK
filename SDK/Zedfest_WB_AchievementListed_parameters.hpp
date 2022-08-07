#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WB_AchievementListed.WB_AchievementListed_C.MaxProgressionText
struct UWB_AchievementListed_C_MaxProgressionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WB_AchievementListed.WB_AchievementListed_C.CurrentProgressionText
struct UWB_AchievementListed_C_CurrentProgressionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WB_AchievementListed.WB_AchievementListed_C.Construct
struct UWB_AchievementListed_C_Construct_Params
{
};

// Function WB_AchievementListed.WB_AchievementListed_C.ExecuteUbergraph_WB_AchievementListed
struct UWB_AchievementListed_C_ExecuteUbergraph_WB_AchievementListed_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

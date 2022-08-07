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

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveDailyChallenges
struct UBP_AchievementSavingLibrary_C_SaveDailyChallenges_Params
{
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges1
struct UBP_AchievementSavingLibrary_C_LoadDailyChallenges1_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadDailyChallenges
struct UBP_AchievementSavingLibrary_C_LoadDailyChallenges_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements1
struct UBP_AchievementSavingLibrary_C_LoadAchievements1_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.GetAchievementSaveObject
struct UBP_AchievementSavingLibrary_C_GetAchievementSaveObject_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_AchievementsSave_C*                      Achievements_Save_Object;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.LoadAchievements
struct UBP_AchievementSavingLibrary_C_LoadAchievements_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementSavingLibrary.BP_AchievementSavingLibrary_C.SaveAchievements
struct UBP_AchievementSavingLibrary_C_SaveAchievements_Params
{
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

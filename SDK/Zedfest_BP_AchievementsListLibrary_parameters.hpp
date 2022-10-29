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

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock DailyChallenges
struct UBP_AchievementsListLibrary_C_Unlock_DailyChallenges_Params
{
	struct FText*                                      Achievement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Progression_to_Add;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate DailyChallenges
struct UBP_AchievementsListLibrary_C_Initiate_DailyChallenges_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementCustomizationInformation> Achievement_List;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Get Date and Time
struct UBP_AchievementsListLibrary_C_Get_Date_and_Time_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Date;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Time;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Hide Achievements List Menu
struct UBP_AchievementsListLibrary_C_Hide_Achievements_List_Menu_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Unlock Achievement
struct UBP_AchievementsListLibrary_C_Unlock_Achievement_Params
{
	struct FText*                                      Achievement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Progression_to_Add;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Generate Achievements List
struct UBP_AchievementsListLibrary_C_Generate_Achievements_List_Params
{
	TArray<struct FS_AchievementInformation>           Achievements;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPanelWidget**                               Achievements_Container;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AchievementsListLibrary.BP_AchievementsListLibrary_C.Initiate Achievements
struct UBP_AchievementsListLibrary_C_Initiate_Achievements_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_AchievementCustomizationInformation> Achievement_List;                                         // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

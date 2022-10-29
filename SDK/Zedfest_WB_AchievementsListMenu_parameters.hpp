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

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achieved Achievements
struct UWB_AchievementsListMenu_C_Number_of_Achieved_Achievements_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achievements
struct UWB_AchievementsListMenu_C_Number_of_Achievements_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_BFBF705E4EF02F6C48013EAB78BC8247
struct UWB_AchievementsListMenu_C_OnFailure_BFBF705E4EF02F6C48013EAB78BC8247_Params
{
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247
struct UWB_AchievementsListMenu_C_OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247_Params
{
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_9509A55F42BF18A273D91D9FD061C6CE
struct UWB_AchievementsListMenu_C_OnFailure_9509A55F42BF18A273D91D9FD061C6CE_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_9509A55F42BF18A273D91D9FD061C6CE
struct UWB_AchievementsListMenu_C_OnSuccess_9509A55F42BF18A273D91D9FD061C6CE_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWB_AchievementsListMenu_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWB_AchievementsListMenu_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Play Animation
struct UWB_AchievementsListMenu_C_Play_Animation_Params
{
	bool*                                              Forwards_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Construct
struct UWB_AchievementsListMenu_C_Construct_Params
{
};

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.ExecuteUbergraph_WB_AchievementsListMenu
struct UWB_AchievementsListMenu_C_ExecuteUbergraph_WB_AchievementsListMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

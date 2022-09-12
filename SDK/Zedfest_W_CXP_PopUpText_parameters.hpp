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

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetScroller
struct UW_CXP_PopUpText_C_GetScroller_Params
{
	class UScrollBox*                                  Scroller;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetXpAmount
struct UW_CXP_PopUpText_C_GetXpAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54
struct UW_CXP_PopUpText_C_OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54_Params
{
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54
struct UW_CXP_PopUpText_C_OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54_Params
{
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_85AC89024D8B8C21EB8EACB99D67693A
struct UW_CXP_PopUpText_C_OnFailure_85AC89024D8B8C21EB8EACB99D67693A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_85AC89024D8B8C21EB8EACB99D67693A
struct UW_CXP_PopUpText_C_OnSuccess_85AC89024D8B8C21EB8EACB99D67693A_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.Construct
struct UW_CXP_PopUpText_C_Construct_Params
{
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.XPPopup
struct UW_CXP_PopUpText_C_XPPopup_Params
{
	float*                                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.LevelUpPopup
struct UW_CXP_PopUpText_C_LevelUpPopup_Params
{
	struct FString*                                    CurrentLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    ClassName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Z;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.WinLoseWidgetEvent
struct UW_CXP_PopUpText_C_WinLoseWidgetEvent_Params
{
	struct FString*                                    LoseText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.ObjectiveWidgetEvent
struct UW_CXP_PopUpText_C_ObjectiveWidgetEvent_Params
{
	struct FString*                                    ObjectiveHeadText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    ObjectiveDescText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.WeaponUpgradePopup
struct UW_CXP_PopUpText_C_WeaponUpgradePopup_Params
{
	struct FString*                                    WeaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Prestige_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.UnlockableRewardEvent
struct UW_CXP_PopUpText_C_UnlockableRewardEvent_Params
{
	struct FString*                                    Rubrik;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RewardID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.DailyChallengePopup
struct UW_CXP_PopUpText_C_DailyChallengePopup_Params
{
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.SeasonalChallengePopup
struct UW_CXP_PopUpText_C_SeasonalChallengePopup_Params
{
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.BandNameEvent
struct UW_CXP_PopUpText_C_BandNameEvent_Params
{
	struct FText*                                      BandName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      SongName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.ExecuteUbergraph_W_CXP_PopUpText
struct UW_CXP_PopUpText_C_ExecuteUbergraph_W_CXP_PopUpText_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

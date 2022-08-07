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

// Function W_CXP_HUD.W_CXP_HUD_C.GetScroller
struct UW_CXP_HUD_C_GetScroller_Params
{
	class UScrollBox*                                  Scroller;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function W_CXP_HUD.W_CXP_HUD_C.PrestigeLevel
struct UW_CXP_HUD_C_PrestigeLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetSteamAvatar
struct UW_CXP_HUD_C_GetSteamAvatar_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.ClassName
struct UW_CXP_HUD_C_ClassName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetXPBar
struct UW_CXP_HUD_C_GetXPBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetHexagonCurrency
struct UW_CXP_HUD_C_GetHexagonCurrency_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetEuroCurrency
struct UW_CXP_HUD_C_GetEuroCurrency_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetPlayerName
struct UW_CXP_HUD_C_GetPlayerName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetText_4
struct UW_CXP_HUD_C_GetText_4_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetText_3
struct UW_CXP_HUD_C_GetText_3_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetText_2
struct UW_CXP_HUD_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.GetText_1
struct UW_CXP_HUD_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CXP_HUD.W_CXP_HUD_C.UpdateSkillWidget
struct UW_CXP_HUD_C_UpdateSkillWidget_Params
{
	float*                                             HarvestingBar;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponBar;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AgilityBar;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_HUD.W_CXP_HUD_C.SetXP
struct UW_CXP_HUD_C_SetXP_Params
{
	int*                                               CurrentLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NextLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentXP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NeededXP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPBar;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_CXP_HUD.W_CXP_HUD_C.Construct
struct UW_CXP_HUD_C_Construct_Params
{
};

// Function W_CXP_HUD.W_CXP_HUD_C.ExecuteUbergraph_W_CXP_HUD
struct UW_CXP_HUD_C_ExecuteUbergraph_W_CXP_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

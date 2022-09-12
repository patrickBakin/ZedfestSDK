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

// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.UpdateSkillWidget
struct UBPInt_CXP_HUDWidgets_C_UpdateSkillWidget_Params
{
	float*                                             HarvestingBar;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WeaponBar;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AgilityBar;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.GetScroller
struct UBPInt_CXP_HUDWidgets_C_GetScroller_Params
{
	class UScrollBox*                                  Scroller;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.SetXP
struct UBPInt_CXP_HUDWidgets_C_SetXP_Params
{
	int*                                               CurrentLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NextLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentXP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NeededXP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPBar;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Visibility
struct UCraftingStationUI_C_Set_Progress_Bar_UI_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingStationUI.CraftingStationUI_C.Set Progress Bar UI Percent
struct UCraftingStationUI_C_Set_Progress_Bar_UI_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CraftingStationUI.CraftingStationUI_C.Set Crafting Station UI Visibility
struct UCraftingStationUI_C_Set_Crafting_Station_UI_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

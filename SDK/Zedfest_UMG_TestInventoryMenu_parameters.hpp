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

// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.GetSelectedOption
struct UUMG_TestInventoryMenu_C_GetSelectedOption_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Construct
struct UUMG_TestInventoryMenu_C_Construct_Params
{
};

// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.Tick
struct UUMG_TestInventoryMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_TestInventoryMenu.UMG_TestInventoryMenu_C.ExecuteUbergraph_UMG_TestInventoryMenu
struct UUMG_TestInventoryMenu_C_ExecuteUbergraph_UMG_TestInventoryMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Get Background
struct UHUDSlotBarHP1_C_Get_Background_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Get Rarity Color
struct UHUDSlotBarHP1_C_Get_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Get Selection UI
struct UHUDSlotBarHP1_C_Get_Selection_UI_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Get Item Amount
struct UHUDSlotBarHP1_C_Get_Item_Amount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Get Item Icon
struct UHUDSlotBarHP1_C_Get_Item_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.KeyVisibilityEvent
struct UHUDSlotBarHP1_C_KeyVisibilityEvent_Params
{
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.Construct
struct UHUDSlotBarHP1_C_Construct_Params
{
};

// Function HUDSlotBarHP1.HUDSlotBarHP1_C.ExecuteUbergraph_HUDSlotBarHP1
struct UHUDSlotBarHP1_C_ExecuteUbergraph_HUDSlotBarHP1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

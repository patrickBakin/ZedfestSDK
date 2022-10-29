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

// Function HUDSlotBar.HUDSlotBar_C.Get Background
struct UHUDSlotBar_C_Get_Background_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBar.HUDSlotBar_C.Get Rarity Color
struct UHUDSlotBar_C_Get_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBar.HUDSlotBar_C.Get Selection UI
struct UHUDSlotBar_C_Get_Selection_UI_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBar.HUDSlotBar_C.Get Item Amount
struct UHUDSlotBar_C_Get_Item_Amount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBar.HUDSlotBar_C.Get Item Icon
struct UHUDSlotBar_C_Get_Item_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBar.HUDSlotBar_C.Construct
struct UHUDSlotBar_C_Construct_Params
{
};

// Function HUDSlotBar.HUDSlotBar_C.KeyVisibilityEvent
struct UHUDSlotBar_C_KeyVisibilityEvent_Params
{
};

// Function HUDSlotBar.HUDSlotBar_C.ExecuteUbergraph_HUDSlotBar
struct UHUDSlotBar_C_ExecuteUbergraph_HUDSlotBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

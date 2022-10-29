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

// Function CSSlotUI.CSSlotUI_C.Set Slot Rarity Color
struct UCSSlotUI_C_Set_Slot_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CSSlotUI.CSSlotUI_C.Set Slot Text
struct UCSSlotUI_C_Set_Slot_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CSSlotUI.CSSlotUI_C.Set Slot Percent
struct UCSSlotUI_C_Set_Slot_Percent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

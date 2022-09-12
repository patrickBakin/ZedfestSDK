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

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Background
struct UHUDSlotBarHP_C_Get_Background_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Rarity Color
struct UHUDSlotBarHP_C_Get_Rarity_Color_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Selection UI
struct UHUDSlotBarHP_C_Get_Selection_UI_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Amount
struct UHUDSlotBarHP_C_Get_Item_Amount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.Get Item Icon
struct UHUDSlotBarHP_C_Get_Item_Icon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.Construct
struct UHUDSlotBarHP_C_Construct_Params
{
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.KeyVisibilityEvent
struct UHUDSlotBarHP_C_KeyVisibilityEvent_Params
{
};

// Function HUDSlotBarHP.HUDSlotBarHP_C.ExecuteUbergraph_HUDSlotBarHP
struct UHUDSlotBarHP_C_ExecuteUbergraph_HUDSlotBarHP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

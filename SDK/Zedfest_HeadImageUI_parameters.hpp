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

// Function HeadImageUI.HeadImageUI_C.GetArmor
struct UHeadImageUI_C_GetArmor_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HeadImageUI.HeadImageUI_C.GetHealth
struct UHeadImageUI_C_GetHealth_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HeadImageUI.HeadImageUI_C.Construct
struct UHeadImageUI_C_Construct_Params
{
};

// Function HeadImageUI.HeadImageUI_C.InitiateHeadUI
struct UHeadImageUI_C_InitiateHeadUI_Params
{
	class ABP_Horde_PlayerState_C**                    PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeadImageUI.HeadImageUI_C.ExecuteUbergraph_HeadImageUI
struct UHeadImageUI_C_ExecuteUbergraph_HeadImageUI_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

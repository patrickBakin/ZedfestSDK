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

// Function W_CannotOpen.W_CannotOpen_C.GetText_1
struct UW_CannotOpen_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_CannotOpen.W_CannotOpen_C.Construct
struct UW_CannotOpen_C_Construct_Params
{
};

// Function W_CannotOpen.W_CannotOpen_C.ExecuteUbergraph_W_CannotOpen
struct UW_CannotOpen_C_ExecuteUbergraph_W_CannotOpen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

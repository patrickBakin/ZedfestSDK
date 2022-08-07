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

// Function BPA_FloatingText.BPA_FloatingText_C.ReceiveTick
struct ABPA_FloatingText_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_FloatingText.BPA_FloatingText_C.ReceiveBeginPlay
struct ABPA_FloatingText_C_ReceiveBeginPlay_Params
{
};

// Function BPA_FloatingText.BPA_FloatingText_C.ExecuteUbergraph_BPA_FloatingText
struct ABPA_FloatingText_C_ExecuteUbergraph_BPA_FloatingText_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

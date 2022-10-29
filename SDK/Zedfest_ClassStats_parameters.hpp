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

// Function ClassStats.ClassStats_C.Construct
struct UClassStats_C_Construct_Params
{
};

// Function ClassStats.ClassStats_C.PreConstruct
struct UClassStats_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClassStats.ClassStats_C.ShowStats
struct UClassStats_C_ShowStats_Params
{
	struct FText*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      NewParam2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      NewParam3;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ClassStats.ClassStats_C.ExecuteUbergraph_ClassStats
struct UClassStats_C_ExecuteUbergraph_ClassStats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

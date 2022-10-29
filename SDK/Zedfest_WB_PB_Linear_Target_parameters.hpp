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

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.GetPercent
struct UWB_PB_Linear_Target_C_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetFillColor
struct UWB_PB_Linear_Target_C_SetFillColor_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetBarFillType
struct UWB_PB_Linear_Target_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 BarFillType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetPercent
struct UWB_PB_Linear_Target_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetDefaultValues
struct UWB_PB_Linear_Target_C_SetDefaultValues_Params
{
};

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.ExecuteUbergraph_WB_PB_Linear_Target
struct UWB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

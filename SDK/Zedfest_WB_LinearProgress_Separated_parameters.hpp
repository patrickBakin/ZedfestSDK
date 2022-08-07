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

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Vertical
struct UWB_LinearProgress_Separated_C_FindMaxPaddingValue_Vertical_Params
{
	float*                                             Tolerance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindCurrentSegmentPercentValue
struct UWB_LinearProgress_Separated_C_FindCurrentSegmentPercentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindPercentCurrentSegment
struct UWB_LinearProgress_Separated_C_FindPercentCurrentSegment_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.GetSegmentSteps
struct UWB_LinearProgress_Separated_C_GetSegmentSteps_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Horizontal
struct UWB_LinearProgress_Separated_C_FindMaxPaddingValue_Horizontal_Params
{
	float*                                             Tolerance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsProgressBar
struct UWB_LinearProgress_Separated_C_AddSegmentsProgressBar_Params
{
	int*                                               NumSegments;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               FillColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFillFromCenter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_ProgressBar
struct UWB_LinearProgress_Separated_C_ClearSegments_ProgressBar_Params
{
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsBackground
struct UWB_LinearProgress_Separated_C_AddSegmentsBackground_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseBackgroundBlur;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlurStrength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Background
struct UWB_LinearProgress_Separated_C_ClearSegments_Background_Params
{
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetPercent
struct UWB_LinearProgress_Separated_C_SetPercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetAbsoluteFillMethod
struct UWB_LinearProgress_Separated_C_SetAbsoluteFillMethod_Params
{
	bool*                                              bAbsoluteFill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetUseMarquee
struct UWB_LinearProgress_Separated_C_SetUseMarquee_Params
{
	bool*                                              bSetUseMarquee;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Marquee
struct UWB_LinearProgress_Separated_C_ClearSegments_Marquee_Params
{
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImage
struct UWB_LinearProgress_Separated_C_SetMarqueeImage_Params
{
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImageSize
struct UWB_LinearProgress_Separated_C_SetMarqueeImageSize_Params
{
	struct FVector2D*                                  ImageSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTint
struct UWB_LinearProgress_Separated_C_SetMarqueeTint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeDrawAs
struct UWB_LinearProgress_Separated_C_SetMarqueeDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  DrawAs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTiling
struct UWB_LinearProgress_Separated_C_SetMarqueeTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.UpdateProgressChangeColor
struct UWB_LinearProgress_Separated_C_UpdateProgressChangeColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsMarquee
struct UWB_LinearProgress_Separated_C_AddSegmentsMarquee_Params
{
};

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ExecuteUbergraph_WB_LinearProgress_Separated
struct UWB_LinearProgress_Separated_C_ExecuteUbergraph_WB_LinearProgress_Separated_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

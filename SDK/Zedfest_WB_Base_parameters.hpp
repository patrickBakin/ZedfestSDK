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

// Function WB_Base.WB_Base_C.PB_GetSeparationSteps
struct UWB_Base_C_PB_GetSeparationSteps_Params
{
	int                                                Steps;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_AddEffect
struct UWB_Base_C_PB_AddEffect_Params
{
	struct FS_Effects*                                 Effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetEffects
struct UWB_Base_C_PB_GetEffects_Params
{
	TArray<struct FS_Effects>                          Effects;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WB_Base.WB_Base_C.PB_GetIsMarquee
struct UWB_Base_C_PB_GetIsMarquee_Params
{
	bool                                               IsMarquee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetIsCustomMarquee
struct UWB_Base_C_PB_GetIsCustomMarquee_Params
{
	bool                                               IsMarquee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetThickness
struct UWB_Base_C_PB_GetThickness_Params
{
	float                                              Thickness;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetBackgroundColor
struct UWB_Base_C_PB_GetBackgroundColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetUseGradientFillColor
struct UWB_Base_C_PB_GetUseGradientFillColor_Params
{
	bool                                               UseGradientFillColor;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Negative
struct UWB_Base_C_PB_GetTargetFillColor_Negative_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetTargetFillColor_Positive
struct UWB_Base_C_PB_GetTargetFillColor_Positive_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetInterpTimeTarget
struct UWB_Base_C_PB_GetInterpTimeTarget_Params
{
	float                                              TargetInterpTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetInterpTimeCurrent
struct UWB_Base_C_PB_GetInterpTimeCurrent_Params
{
	float                                              CurrentInterpTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetProgressMethod
struct UWB_Base_C_PB_GetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>                       EProgressMethod;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetUseTargetPercent
struct UWB_Base_C_PB_GetUseTargetPercent_Params
{
	bool                                               UseTargetPercent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetTargetPercent
struct UWB_Base_C_PB_GetTargetPercent_Params
{
	float                                              TargetPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetFillColor
struct UWB_Base_C_PB_GetFillColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetPercent
struct UWB_Base_C_PB_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_GetSize
struct UWB_Base_C_PB_GetSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetSize
struct UWB_Base_C_PB_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetPercent
struct UWB_Base_C_PB_SetPercent_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillColor
struct UWB_Base_C_PB_SetFillColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetTargetPercent
struct UWB_Base_C_PB_SetTargetPercent_Params
{
	float*                                             TargetPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetThickness
struct UWB_Base_C_PB_SetThickness_Params
{
	float*                                             Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetUseTargetPercent
struct UWB_Base_C_PB_SetUseTargetPercent_Params
{
	bool*                                              UseTargetPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetProgressMethod
struct UWB_Base_C_PB_SetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>*                      EProgressMethod;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetInterpTimeCurrent
struct UWB_Base_C_PB_SetInterpTimeCurrent_Params
{
	float*                                             CurrentInterpTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetInterpTimeTarget
struct UWB_Base_C_PB_SetInterpTimeTarget_Params
{
	float*                                             TargetInterpTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Positive
struct UWB_Base_C_PB_SetTargetFillColor_Positive_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetTargetFillColor_Negative
struct UWB_Base_C_PB_SetTargetFillColor_Negative_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetUseGradientFillColor
struct UWB_Base_C_PB_SetUseGradientFillColor_Params
{
	bool*                                              UseGradientFillColor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetBackgroundColor
struct UWB_Base_C_PB_SetBackgroundColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillColorGradientPower
struct UWB_Base_C_PB_SetFillColorGradientPower_Params
{
	float*                                             GradientPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillColorBrushTiling
struct UWB_Base_C_PB_SetFillColorBrushTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillColorMask
struct UWB_Base_C_PB_SetFillColorMask_Params
{
	class UObject**                                    Mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetBackgroundColorMask
struct UWB_Base_C_PB_SetBackgroundColorMask_Params
{
	class UTexture2D**                                 Mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetBackgroundBrushTiling
struct UWB_Base_C_PB_SetBackgroundBrushTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetBackgroundBlurStrength
struct UWB_Base_C_PB_SetBackgroundBlurStrength_Params
{
	float*                                             BlurStrength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillColorGradientType
struct UWB_Base_C_PB_SetFillColorGradientType_Params
{
	TEnumAsByte<EGradientTypes>*                       GradientType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetBlendMask
struct UWB_Base_C_PB_SetBlendMask_Params
{
	class UTexture2D**                                 BlendMask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillType
struct UWB_Base_C_PB_SetFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetFillFromCenterSpacing
struct UWB_Base_C_PB_SetFillFromCenterSpacing_Params
{
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetIsCustomMarquee
struct UWB_Base_C_PB_SetIsCustomMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetIsMarquee
struct UWB_Base_C_PB_SetIsMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeImage
struct UWB_Base_C_PB_SetCustomMarqueeImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetMarqueeImage
struct UWB_Base_C_PB_SetMarqueeImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetCustomMarqueeMaskType
struct UWB_Base_C_PB_SetCustomMarqueeMaskType_Params
{
	TEnumAsByte<EMarqueeMask>*                         MaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetSeparationSteps
struct UWB_Base_C_PB_SetSeparationSteps_Params
{
	int*                                               Steps;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetSeparationStepsSpacing
struct UWB_Base_C_PB_SetSeparationStepsSpacing_Params
{
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetSeparationAbsoluteFill
struct UWB_Base_C_PB_SetSeparationAbsoluteFill_Params
{
	bool*                                              AbsoluteFillMethod;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetEffects
struct UWB_Base_C_PB_SetEffects_Params
{
	TArray<struct FS_Effects>*                         Effects;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WB_Base.WB_Base_C.PB_SetEffectEnabled
struct UWB_Base_C_PB_SetEffectEnabled_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_SetAllEffectsEnabled
struct UWB_Base_C_PB_SetAllEffectsEnabled_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.PB_RemoveEffect
struct UWB_Base_C_PB_RemoveEffect_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Base.WB_Base_C.ExecuteUbergraph_WB_Base
struct UWB_Base_C_ExecuteUbergraph_WB_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

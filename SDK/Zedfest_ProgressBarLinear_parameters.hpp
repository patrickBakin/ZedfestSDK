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

// Function ProgressBarLinear.ProgressBarLinear_C.Count_TargetPercent
struct UProgressBarLinear_C_Count_TargetPercent_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.RemoveEntryIndex
struct UProgressBarLinear_C_RemoveEntryIndex_Params
{
	int*                                               IndexToRemove;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetEntryIndex
struct UProgressBarLinear_C_GetEntryIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsValidEntryIndex
struct UProgressBarLinear_C_IsValidEntryIndex_Params
{
	int*                                               IndexToTest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetLocalVariables
struct UProgressBarLinear_C_SetLocalVariables_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.HasEffectChanged
struct UProgressBarLinear_C_HasEffectChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.NotEqualColor
struct UProgressBarLinear_C_NotEqualColor_Params
{
	struct FLinearColor*                               A;                                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               B;                                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.HasAnyValueChanged
struct UProgressBarLinear_C_HasAnyValueChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsEffectProgressChangeColor
struct UProgressBarLinear_C_IsEffectProgressChangeColor_Params
{
	struct FS_Effects*                                 Effect;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSeparationSteps
struct UProgressBarLinear_C_PB_GetSeparationSteps_Params
{
	int                                                Steps;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_AddEffect
struct UProgressBarLinear_C_PB_AddEffect_Params
{
	struct FS_Effects*                                 Effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetEffects
struct UProgressBarLinear_C_PB_GetEffects_Params
{
	TArray<struct FS_Effects>                          Effects;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsCustomMarquee
struct UProgressBarLinear_C_PB_GetIsCustomMarquee_Params
{
	bool                                               IsMarquee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsMarquee
struct UProgressBarLinear_C_PB_GetIsMarquee_Params
{
	bool                                               IsMarquee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseGradientFillColor
struct UProgressBarLinear_C_PB_GetUseGradientFillColor_Params
{
	bool                                               UseGradientFillColor;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetFillColor
struct UProgressBarLinear_C_PB_GetFillColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Negative
struct UProgressBarLinear_C_PB_GetTargetFillColor_Negative_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Positive
struct UProgressBarLinear_C_PB_GetTargetFillColor_Positive_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeTarget
struct UProgressBarLinear_C_PB_GetInterpTimeTarget_Params
{
	float                                              TargetInterpTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeCurrent
struct UProgressBarLinear_C_PB_GetInterpTimeCurrent_Params
{
	float                                              CurrentInterpTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetProgressMethod
struct UProgressBarLinear_C_PB_GetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>                       EProgressMethod;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseTargetPercent
struct UProgressBarLinear_C_PB_GetUseTargetPercent_Params
{
	bool                                               UseTargetPercent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetPercent
struct UProgressBarLinear_C_PB_GetTargetPercent_Params
{
	float                                              TargetPercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetPercent
struct UProgressBarLinear_C_PB_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSize
struct UProgressBarLinear_C_PB_GetSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetEffectOverlays
struct UProgressBarLinear_C_GetEffectOverlays_Params
{
	TArray<class UOverlay*>                            Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlaysCentered
struct UProgressBarLinear_C_FindEffectOverlaysCentered_Params
{
	TEnumAsByte<EEffectLayer>*                         EffectLayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UOverlay*>                            Overlays;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_Effects
struct UProgressBarLinear_C_SetCenterSpacing_Effects_Params
{
	float*                                             PaddingValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.ClearEffectLayers
struct UProgressBarLinear_C_ClearEffectLayers_Params
{
	TEnumAsByte<EEffectLayer>*                         EffectLayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledDefault
struct UProgressBarLinear_C_SetBlurEnabledDefault_Params
{
	bool*                                              bInIsEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledCentered
struct UProgressBarLinear_C_SetBlurEnabledCentered_Params
{
	bool*                                              bInIsEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthDefault
struct UProgressBarLinear_C_SetBlurStrengthDefault_Params
{
	float*                                             InStrength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthCentered
struct UProgressBarLinear_C_SetBlurStrengthCentered_Params
{
	float*                                             InStrength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SendPercentToEffects
struct UProgressBarLinear_C_SendPercentToEffects_Params
{
	class UOverlay**                                   EffectsOverlay;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlay
struct UProgressBarLinear_C_FindEffectOverlay_Params
{
	TEnumAsByte<EEffectLayer>*                         EffectLayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOverlay*                                    Overlay;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Count_Percent
struct UProgressBarLinear_C_Count_Percent_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_CurrentPercent
struct UProgressBarLinear_C_Transfer_CurrentPercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_UseTargetPercent
struct UProgressBarLinear_C_Transfer_UseTargetPercent_Params
{
	bool*                                              UseTargetPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_TargetPercent
struct UProgressBarLinear_C_Transfer_TargetPercent_Params
{
	float*                                             TargetPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBlendMask
struct UProgressBarLinear_C_SetBlendMask_Params
{
	class UTexture**                                   Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeTopOrBottom
struct UProgressBarLinear_C_IsFillTypeTopOrBottom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetFillFromCenterSpacing
struct UProgressBarLinear_C_GetFillFromCenterSpacing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_BG
struct UProgressBarLinear_C_SetCenterSpacing_BG_Params
{
	float*                                             PaddingValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetSize_BGBrushLeftRight
struct UProgressBarLinear_C_SetSize_BGBrushLeftRight_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSizeCentered
struct UProgressBarLinear_C_FindThicknessSizeCentered_Params
{
	float*                                             Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetCenterSpacingSize
struct UProgressBarLinear_C_GetCenterSpacingSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing
struct UProgressBarLinear_C_SetCenterSpacing_Params
{
	float*                                             PaddingValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetChildren
struct UProgressBarLinear_C_GetChildren_Params
{
	TArray<class UWB_Container_Linear_C*>              Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeFillFromCenter
struct UProgressBarLinear_C_IsFillTypeFillFromCenter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.GetInterpolationTime
struct UProgressBarLinear_C_GetInterpolationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSize
struct UProgressBarLinear_C_FindThicknessSize_Params
{
	float*                                             Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodInterpolated
struct UProgressBarLinear_C_IsProgressMethodInterpolated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodStatic
struct UProgressBarLinear_C_IsProgressMethodStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSize
struct UProgressBarLinear_C_PB_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetPercent
struct UProgressBarLinear_C_PB_SetPercent_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColor
struct UProgressBarLinear_C_PB_SetFillColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetPercent
struct UProgressBarLinear_C_PB_SetTargetPercent_Params
{
	float*                                             TargetPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetThickness
struct UProgressBarLinear_C_PB_SetThickness_Params
{
	float*                                             Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseTargetPercent
struct UProgressBarLinear_C_PB_SetUseTargetPercent_Params
{
	bool*                                              UseTargetPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetProgressMethod
struct UProgressBarLinear_C_PB_SetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>*                      EProgressMethod;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeCurrent
struct UProgressBarLinear_C_PB_SetInterpTimeCurrent_Params
{
	float*                                             CurrentInterpTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeTarget
struct UProgressBarLinear_C_PB_SetInterpTimeTarget_Params
{
	float*                                             TargetInterpTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Positive
struct UProgressBarLinear_C_PB_SetTargetFillColor_Positive_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Negative
struct UProgressBarLinear_C_PB_SetTargetFillColor_Negative_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseGradientFillColor
struct UProgressBarLinear_C_PB_SetUseGradientFillColor_Params
{
	bool*                                              UseGradientFillColor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColor
struct UProgressBarLinear_C_PB_SetBackgroundColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientPower
struct UProgressBarLinear_C_PB_SetFillColorGradientPower_Params
{
	float*                                             GradientPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorBrushTiling
struct UProgressBarLinear_C_PB_SetFillColorBrushTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorMask
struct UProgressBarLinear_C_PB_SetFillColorMask_Params
{
	class UObject**                                    Mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColorMask
struct UProgressBarLinear_C_PB_SetBackgroundColorMask_Params
{
	class UTexture2D**                                 Mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBrushTiling
struct UProgressBarLinear_C_PB_SetBackgroundBrushTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBlurStrength
struct UProgressBarLinear_C_PB_SetBackgroundBlurStrength_Params
{
	float*                                             BlurStrength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientType
struct UProgressBarLinear_C_PB_SetFillColorGradientType_Params
{
	TEnumAsByte<EGradientTypes>*                       GradientType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBlendMask
struct UProgressBarLinear_C_PB_SetBlendMask_Params
{
	class UTexture2D**                                 BlendMask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillType
struct UProgressBarLinear_C_PB_SetFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillFromCenterSpacing
struct UProgressBarLinear_C_PB_SetFillFromCenterSpacing_Params
{
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsCustomMarquee
struct UProgressBarLinear_C_PB_SetIsCustomMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsMarquee
struct UProgressBarLinear_C_PB_SetIsMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeImage
struct UProgressBarLinear_C_PB_SetCustomMarqueeImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeMaskType
struct UProgressBarLinear_C_PB_SetCustomMarqueeMaskType_Params
{
	TEnumAsByte<EMarqueeMask>*                         MaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetMarqueeImage
struct UProgressBarLinear_C_PB_SetMarqueeImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationSteps
struct UProgressBarLinear_C_PB_SetSeparationSteps_Params
{
	int*                                               Steps;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationStepsSpacing
struct UProgressBarLinear_C_PB_SetSeparationStepsSpacing_Params
{
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationAbsoluteFill
struct UProgressBarLinear_C_PB_SetSeparationAbsoluteFill_Params
{
	bool*                                              AbsoluteFillMethod;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffects
struct UProgressBarLinear_C_PB_SetEffects_Params
{
	TArray<struct FS_Effects>*                         Effects;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffectEnabled
struct UProgressBarLinear_C_PB_SetEffectEnabled_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetAllEffectsEnabled
struct UProgressBarLinear_C_PB_SetAllEffectsEnabled_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.PB_RemoveEffect
struct UProgressBarLinear_C_PB_RemoveEffect_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdatePercent
struct UProgressBarLinear_C_UpdatePercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdateInterpolation
struct UProgressBarLinear_C_UpdateInterpolation_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColor
struct UProgressBarLinear_C_SetFillColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GradientPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetSize
struct UProgressBarLinear_C_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetUseGradient
struct UProgressBarLinear_C_SetUseGradient_Params
{
	bool*                                              UseGradient;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetPercent
struct UProgressBarLinear_C_SetTargetPercent_Params
{
	bool*                                              UseTargetPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorPositive
struct UProgressBarLinear_C_SetTargetFillColorPositive_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorNegative
struct UProgressBarLinear_C_SetTargetFillColorNegative_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColor
struct UProgressBarLinear_C_SetBackgroundColor_Params
{
	class UTexture2D**                                 BackgroundColorMask;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  In_Brush_Tiling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetProgressMethod
struct UProgressBarLinear_C_SetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>*                      ProgressMethod;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetPercentInterpolated
struct UProgressBarLinear_C_SetPercentInterpolated_Params
{
	float*                                             NewPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColorMask
struct UProgressBarLinear_C_SetFillColorMask_Params
{
	class UObject**                                    Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetGradientMask
struct UProgressBarLinear_C_SetGradientMask_Params
{
	TEnumAsByte<EGradientTypes>*                       GradientType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColorMask
struct UProgressBarLinear_C_SetBackgroundColorMask_Params
{
	class UTexture2D**                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  In_Brush_Tiling;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetOverallBlendMask
struct UProgressBarLinear_C_SetOverallBlendMask_Params
{
	class UTexture2D**                                 BlendMask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarquee
struct UProgressBarLinear_C_UpdateCustomMarquee_Params
{
	bool*                                              bIsMarquee;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarqueeMethod>*                       MarqueeMethod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeSpeed
struct UProgressBarLinear_C_UpdateCustomMarqueeSpeed_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeMask
struct UProgressBarLinear_C_UpdateCustomMarqueeMask_Params
{
	TEnumAsByte<EMarqueeMask>*                         MaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  MaskTiling;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_IsMarquee
struct UProgressBarLinear_C_SetDefaultMarquee_IsMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Image
struct UProgressBarLinear_C_SetDefaultMarquee_Image_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_ImageSize
struct UProgressBarLinear_C_SetDefaultMarquee_ImageSize_Params
{
	struct FVector2D*                                  Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tint
struct UProgressBarLinear_C_SetDefaultMarquee_Tint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_DrawAs
struct UProgressBarLinear_C_SetDefaultMarquee_DrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tiling
struct UProgressBarLinear_C_SetDefaultMarquee_Tiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeColor
struct UProgressBarLinear_C_UpdateCustomMarqueeColor_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddSegments
struct UProgressBarLinear_C_Separation_AddSegments_Params
{
	int*                                               NumSegments;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               FillColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddBackground
struct UProgressBarLinear_C_Separation_AddBackground_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Separation_SetUseAbsoluteFillValue
struct UProgressBarLinear_C_Separation_SetUseAbsoluteFillValue_Params
{
	bool*                                              bAbsoluteFill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBarFillType
struct UProgressBarLinear_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetCurrentCustomMarqueePercent
struct UProgressBarLinear_C_SetCurrentCustomMarqueePercent_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.CreateEffects
struct UProgressBarLinear_C_CreateEffects_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.AddEffect
struct UProgressBarLinear_C_AddEffect_Params
{
	struct FS_Effects*                                 Effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Reset
struct UProgressBarLinear_C_Reset_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundBlur
struct UProgressBarLinear_C_SetBackgroundBlur_Params
{
	bool*                                              UseBackgroundBlur;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BackgroundBlurStrength;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Tick
struct UProgressBarLinear_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.AddEntry
struct UProgressBarLinear_C_AddEntry_Params
{
	float*                                             NewPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.InitNextEntry
struct UProgressBarLinear_C_InitNextEntry_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteEntry
struct UProgressBarLinear_C_ExecuteEntry_Params
{
	float*                                             CurrentEntry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.Reconstruct
struct UProgressBarLinear_C_Reconstruct_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.Construct
struct UProgressBarLinear_C_Construct_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.PreConstruct
struct UProgressBarLinear_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.StopTriggerProgressChangeColor
struct UProgressBarLinear_C_StopTriggerProgressChangeColor_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.StartTriggerProgressChangeColor
struct UProgressBarLinear_C_StartTriggerProgressChangeColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.HandlePausedQueue
struct UProgressBarLinear_C_HandlePausedQueue_Params
{
};

// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteUbergraph_ProgressBarLinear
struct UProgressBarLinear_C_ExecuteUbergraph_ProgressBarLinear_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProgressBarLinear.ProgressBarLinear_C.OnPercentChanged__DelegateSignature
struct UProgressBarLinear_C_OnPercentChanged__DelegateSignature_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

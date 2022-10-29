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

// Function BP_Widget_Functions.BP_Widget_Functions_C.RandomizePositiveNegativeFloat
struct UBP_Widget_Functions_C_RandomizePositiveNegativeFloat_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushTiling
struct UBP_Widget_Functions_C_SetBorderBrushTiling_Params
{
	class UBorder**                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushSize
struct UBP_Widget_Functions_C_SetBorderBrushSize_Params
{
	class UBorder**                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrush
struct UBP_Widget_Functions_C_SetBorderBrush_Params
{
	class UBorder**                                    Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushSize
struct UBP_Widget_Functions_C_SetImageBrushSize_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushTiling
struct UBP_Widget_Functions_C_SetImageBrushTiling_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrush
struct UBP_Widget_Functions_C_SetImageBrush_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageDrawAs
struct UBP_Widget_Functions_C_SetFillImageDrawAs_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>*                  DrawAs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageMargin
struct UBP_Widget_Functions_C_SetFillImageMargin_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBackgroundTint
struct UBP_Widget_Functions_C_SetBackgroundTint_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlateColor*                                Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMirroring
struct UBP_Widget_Functions_C_SetMarqueeMirroring_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>*                Mirroring;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTiling
struct UBP_Widget_Functions_C_SetMarqueeTiling_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeDrawAs
struct UBP_Widget_Functions_C_SetMarqueeDrawAs_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTint
struct UBP_Widget_Functions_C_SetMarqueeTint_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMargin
struct UBP_Widget_Functions_C_SetMarqueeMargin_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMargin*                                    Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImageSize
struct UBP_Widget_Functions_C_SetMarqueeImageSize_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImage
struct UBP_Widget_Functions_C_SetMarqueeImage_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.GetFillImage
struct UBP_Widget_Functions_C_GetFillImage_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     FillImage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageTiling
struct UBP_Widget_Functions_C_SetFillImageTiling_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FProgressBarStyle                           Output_Get;                                               // (Parm, OutParm)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageSize
struct UBP_Widget_Functions_C_SetFillImageSize_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  FillImageSize;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImage
struct UBP_Widget_Functions_C_SetFillImage_Params
{
	class UProgressBar**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    FillImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractBrightnessValue
struct UBP_Widget_Functions_C_SubtractBrightnessValue_Params
{
	struct FLinearColor*                               InColor;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractFromColor
struct UBP_Widget_Functions_C_SubtractFromColor_Params
{
	struct FLinearColor*                               InColor;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.GetSize
struct UBP_Widget_Functions_C_GetSize_Params
{
	class USizeBox**                                   SizeBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.SetSize
struct UBP_Widget_Functions_C_SetSize_Params
{
	class USizeBox**                                   SizeBox;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSizeClamped
struct UBP_Widget_Functions_C_GetTexture2DSizeClamped_Params
{
	class UTexture2D**                                 Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Clamp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSize
struct UBP_Widget_Functions_C_GetTexture2DSize_Params
{
	class UTexture2D**                                 Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

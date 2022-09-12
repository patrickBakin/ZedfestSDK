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

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTiling
struct UWB_PB_Raw_C_SetMarqueeTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeDrawAs
struct UWB_PB_Raw_C_SetMarqueeDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  DrawAs;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetBarFillType
struct UWB_PB_Raw_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 BarFillType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTint
struct UWB_PB_Raw_C_SetMarqueeTint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillColorAndOpacity
struct UWB_PB_Raw_C_SetFillColorAndOpacity_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImageSize
struct UWB_PB_Raw_C_SetMarqueeImageSize_Params
{
	struct FVector2D*                                  ImageSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetBackgroundTint
struct UWB_PB_Raw_C_SetBackgroundTint_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImage
struct UWB_PB_Raw_C_SetMarqueeImage_Params
{
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImage
struct UWB_PB_Raw_C_SetFillImage_Params
{
	class UObject**                                    FillImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarquee
struct UWB_PB_Raw_C_SetMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageSize
struct UWB_PB_Raw_C_SetFillImageSize_Params
{
	struct FVector2D*                                  FillImageSize;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetColor
struct UWB_PB_Raw_C_SetColor_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageTiling
struct UWB_PB_Raw_C_SetFillImageTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetPercent
struct UWB_PB_Raw_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageMargin
struct UWB_PB_Raw_C_SetFillImageMargin_Params
{
	float*                                             Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageDrawAs
struct UWB_PB_Raw_C_SetFillImageDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Raw.WB_PB_Raw_C.ExecuteUbergraph_WB_PB_Raw
struct UWB_PB_Raw_C_ExecuteUbergraph_WB_PB_Raw_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

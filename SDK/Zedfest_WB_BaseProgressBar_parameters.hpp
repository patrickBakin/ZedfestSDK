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

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetPercent
struct UWB_BaseProgressBar_C_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetCurrentProgressBar
struct UWB_BaseProgressBar_C_GetCurrentProgressBar_Params
{
	class UProgressBar*                                AsProgress_Bar;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPercent
struct UWB_BaseProgressBar_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillColorAndOpacity
struct UWB_BaseProgressBar_C_SetFillColorAndOpacity_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageTiling
struct UWB_BaseProgressBar_C_SetFillImageTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBarFillType
struct UWB_BaseProgressBar_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 BarFillType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageSize
struct UWB_BaseProgressBar_C_SetFillImageSize_Params
{
	struct FVector2D*                                  FillImageSize;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImage
struct UWB_BaseProgressBar_C_SetFillImage_Params
{
	class UObject**                                    FillImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetIsMarquee
struct UWB_BaseProgressBar_C_SetIsMarquee_Params
{
	bool*                                              InbIsMarquee;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImage
struct UWB_BaseProgressBar_C_SetMarqueeImage_Params
{
	class UObject**                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImageSize
struct UWB_BaseProgressBar_C_SetMarqueeImageSize_Params
{
	struct FVector2D*                                  Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTint
struct UWB_BaseProgressBar_C_SetMarqueeTint_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeDrawAs
struct UWB_BaseProgressBar_C_SetMarqueeDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTiling
struct UWB_BaseProgressBar_C_SetMarqueeTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBackgroundTint
struct UWB_BaseProgressBar_C_SetBackgroundTint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageMargin
struct UWB_BaseProgressBar_C_SetFillImageMargin_Params
{
	float*                                             Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageDrawAs
struct UWB_BaseProgressBar_C_SetFillImageDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.ExecuteUbergraph_WB_BaseProgressBar
struct UWB_BaseProgressBar_C_ExecuteUbergraph_WB_BaseProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

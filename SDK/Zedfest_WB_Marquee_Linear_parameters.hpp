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

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSize
struct UWB_Marquee_Linear_C_SetMarqueeSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMask
struct UWB_Marquee_Linear_C_SetMarqueeMask_Params
{
	class UTexture2D**                                 Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeTiling
struct UWB_Marquee_Linear_C_SetMarqueeTiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSpeed
struct UWB_Marquee_Linear_C_SetMarqueeSpeed_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetPercent
struct UWB_Marquee_Linear_C_SetPercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMethod
struct UWB_Marquee_Linear_C_SetMarqueeMethod_Params
{
	TEnumAsByte<EMarqueeMethod>*                       MarqueeMethod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.ExecuteUbergraph_WB_Marquee_Linear
struct UWB_Marquee_Linear_C_ExecuteUbergraph_WB_Marquee_Linear_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

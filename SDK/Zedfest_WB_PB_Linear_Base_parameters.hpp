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

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.FindFillSize
struct UWB_PB_Linear_Base_C_FindFillSize_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignRetainerGradient
struct UWB_PB_Linear_Base_C_Rotate_DesignRetainerGradient_Params
{
	float*                                             Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignTimeGradient
struct UWB_PB_Linear_Base_C_Rotate_DesignTimeGradient_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Mirror_DesignTimeGradient
struct UWB_PB_Linear_Base_C_Mirror_DesignTimeGradient_Params
{
	bool*                                              Mirror;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.GetPercent
struct UWB_PB_Linear_Base_C_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetPercent
struct UWB_PB_Linear_Base_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColor
struct UWB_PB_Linear_Base_C_SetFillColor_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GradientPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetSize
struct UWB_PB_Linear_Base_C_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientPercent
struct UWB_PB_Linear_Base_C_SetGradientPercent_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetUseGradient
struct UWB_PB_Linear_Base_C_SetUseGradient_Params
{
	bool*                                              UseGradient;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColorMask
struct UWB_PB_Linear_Base_C_SetFillColorMask_Params
{
	class UObject**                                    Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientMask
struct UWB_PB_Linear_Base_C_SetGradientMask_Params
{
	class UTexture2D**                                 GradientTexture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.UpdateProgressChangeColor
struct UWB_PB_Linear_Base_C_UpdateProgressChangeColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsChanging;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetBarFillType
struct UWB_PB_Linear_Base_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.PreConstruct
struct UWB_PB_Linear_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Reconstruct
struct UWB_PB_Linear_Base_C_Reconstruct_Params
{
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Construct
struct UWB_PB_Linear_Base_C_Construct_Params
{
};

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.ExecuteUbergraph_WB_PB_Linear_Base
struct UWB_PB_Linear_Base_C_ExecuteUbergraph_WB_PB_Linear_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

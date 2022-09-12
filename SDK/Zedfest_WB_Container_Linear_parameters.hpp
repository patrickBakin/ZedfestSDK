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

// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_OnTopMarquee
struct UWB_Container_Linear_C_Set_Mirror_OV_OnTopMarquee_Params
{
	bool*                                              Mirror;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_TargetPB_Marquee
struct UWB_Container_Linear_C_Set_Mirror_OV_TargetPB_Marquee_Params
{
	bool*                                              Mirror;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_BasePB_Marquee
struct UWB_Container_Linear_C_Set_Mirror_OV_BasePB_Marquee_Params
{
	bool*                                              Mirror;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Handle_SetUseSeparation
struct UWB_Container_Linear_C_Handle_SetUseSeparation_Params
{
	bool*                                              bUseSeparation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Set_DefaultMarquee_Visibility
struct UWB_Container_Linear_C_Set_DefaultMarquee_Visibility_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Set_MarqueeMask
struct UWB_Container_Linear_C_Set_MarqueeMask_Params
{
	TEnumAsByte<EMarqueeMask>*                         MaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 CustomMask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.Hide_AllMarquees
struct UWB_Container_Linear_C_Hide_AllMarquees_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.Interp_BasePB_Color
struct UWB_Container_Linear_C_Interp_BasePB_Color_Params
{
	struct FLinearColor*                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsChanging;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorY_OV_Target
struct UWB_Container_Linear_C_SetMirrorY_OV_Target_Params
{
	bool*                                              MirrorY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorX_OV_Target
struct UWB_Container_Linear_C_SetMirrorX_OV_Target_Params
{
	bool*                                              MirrorX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeY
struct UWB_Container_Linear_C_GetSizeY_Params
{
	float                                              Current_Size_Y;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent_Separated
struct UWB_Container_Linear_C_GetPercent_Separated_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetAbsoluteTargetPercent
struct UWB_Container_Linear_C_GetAbsoluteTargetPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.FindHighestPercentValue
struct UWB_Container_Linear_C_FindHighestPercentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.IsMarqueeMethod
struct UWB_Container_Linear_C_IsMarqueeMethod_Params
{
	TEnumAsByte<EMarqueeMethod>*                       Method;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.FindMarquee
struct UWB_Container_Linear_C_FindMarquee_Params
{
	class UWB_Marquee_Linear_C*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.UpdateStaticPercent
struct UWB_Container_Linear_C_UpdateStaticPercent_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodStatic
struct UWB_Container_Linear_C_IsProgressMethodStatic_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodInterpolate
struct UWB_Container_Linear_C_IsProgressMethodInterpolate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetTargetPercent
struct UWB_Container_Linear_C_GetTargetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetPercentValue
struct UWB_Container_Linear_C_FindTargetPercentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetFillColor
struct UWB_Container_Linear_C_FindTargetFillColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.IsNegativeFillValue
struct UWB_Container_Linear_C_IsNegativeFillValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeX
struct UWB_Container_Linear_C_GetSizeX_Params
{
	float                                              Current_Size_X;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetProgressBarPosition
struct UWB_Container_Linear_C_FindTargetProgressBarPosition_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent
struct UWB_Container_Linear_C_GetPercent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetPercent
struct UWB_Container_Linear_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColor
struct UWB_Container_Linear_C_SetFillColor_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GradientPower;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetSize
struct UWB_Container_Linear_C_SetSize_Params
{
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetUseGradient
struct UWB_Container_Linear_C_SetUseGradient_Params
{
	bool*                                              UseGradient;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetPercent
struct UWB_Container_Linear_C_SetTargetPercent_Params
{
	float*                                             TargetPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorPositive
struct UWB_Container_Linear_C_SetTargetFillColorPositive_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorNegative
struct UWB_Container_Linear_C_SetTargetFillColorNegative_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetUseTargetPercent
struct UWB_Container_Linear_C_SetUseTargetPercent_Params
{
	bool*                                              UseTargetPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.UpdateTargetPercent
struct UWB_Container_Linear_C_UpdateTargetPercent_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.UpdatePercent
struct UWB_Container_Linear_C_UpdatePercent_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetProgressMethod
struct UWB_Container_Linear_C_SetProgressMethod_Params
{
	TEnumAsByte<EProgressMethod>*                      ProgressMethod;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColorMask
struct UWB_Container_Linear_C_SetFillColorMask_Params
{
	class UObject**                                    Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetGradientMask
struct UWB_Container_Linear_C_SetGradientMask_Params
{
	class UTexture2D**                                 GradientTexture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeAppearance
struct UWB_Container_Linear_C_SetCustomMarqueeAppearance_Params
{
	bool*                                              bIsMarquee;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarqueeMethod>*                       MarqueeMethod;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeSpeed
struct UWB_Container_Linear_C_SetCustomMarqueeSpeed_Params
{
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeMask
struct UWB_Container_Linear_C_SetCustomMarqueeMask_Params
{
	TEnumAsByte<EMarqueeMask>*                         MaskType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 CustomMask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushTileType>*                  MaskTiling;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Current
struct UWB_Container_Linear_C_SetCustomMarqueePercent_Current_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Target
struct UWB_Container_Linear_C_SetCustomMarqueePercent_Target_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_CurrentAndTarget
struct UWB_Container_Linear_C_SetCustomMarqueePercent_CurrentAndTarget_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_IsMarquee
struct UWB_Container_Linear_C_SetDefaultMarquee_IsMarquee_Params
{
	bool*                                              IsMarquee;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Image
struct UWB_Container_Linear_C_SetDefaultMarquee_Image_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_ImageSize
struct UWB_Container_Linear_C_SetDefaultMarquee_ImageSize_Params
{
	struct FVector2D*                                  Image_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tint
struct UWB_Container_Linear_C_SetDefaultMarquee_Tint_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_DrawAs
struct UWB_Container_Linear_C_SetDefaultMarquee_DrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  Draw_As;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tiling
struct UWB_Container_Linear_C_SetDefaultMarquee_Tiling_Params
{
	TEnumAsByte<ESlateBrushTileType>*                  Tiling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeColor
struct UWB_Container_Linear_C_SetCustomMarqueeColor_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetUseSeparation
struct UWB_Container_Linear_C_SetUseSeparation_Params
{
	bool*                                              bUseSeparation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.AddSegments
struct UWB_Container_Linear_C_AddSegments_Params
{
	int*                                               NumSegments;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Spacing;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               FillColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFillFromCenter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.AddBackground
struct UWB_Container_Linear_C_AddBackground_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUseBackgroundBlur;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlurStrength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.UpdateSeparationPercent
struct UWB_Container_Linear_C_UpdateSeparationPercent_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetUseAbsoluteFillMethod
struct UWB_Container_Linear_C_SetUseAbsoluteFillMethod_Params
{
	bool*                                              bAbsoluteFill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.SetBarFillType
struct UWB_Container_Linear_C_SetBarFillType_Params
{
	TEnumAsByte<EProgressBarFillType>*                 FillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.UpdateMarqueeFillType
struct UWB_Container_Linear_C_UpdateMarqueeFillType_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.StartTriggerProgressChangeColor
struct UWB_Container_Linear_C_StartTriggerProgressChangeColor_Params
{
	struct FLinearColor*                               ProgressChangeColor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.StopTriggerProgressChangeColor
struct UWB_Container_Linear_C_StopTriggerProgressChangeColor_Params
{
};

// Function WB_Container_Linear.WB_Container_Linear_C.Tick
struct UWB_Container_Linear_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.PreConstruct
struct UWB_Container_Linear_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WB_Container_Linear.WB_Container_Linear_C.ExecuteUbergraph_WB_Container_Linear
struct UWB_Container_Linear_C_ExecuteUbergraph_WB_Container_Linear_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

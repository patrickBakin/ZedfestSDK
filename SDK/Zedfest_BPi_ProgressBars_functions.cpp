// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSeparationSteps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Steps                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetSeparationSteps(int* Steps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSeparationSteps");

	UBPi_ProgressBars_C_PB_GetSeparationSteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Steps != nullptr)
		*Steps = params.Steps;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_RemoveEffect(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_RemoveEffect");

	UBPi_ProgressBars_C_PB_RemoveEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_AddEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects*             Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_AddEffect(struct FS_Effects* Effect, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_AddEffect");

	UBPi_ProgressBars_C_PB_AddEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetAllEffectsEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetAllEffectsEnabled");

	UBPi_ProgressBars_C_PB_SetAllEffectsEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetEffectEnabled(int* Index, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffectEnabled");

	UBPi_ProgressBars_C_PB_SetEffectEnabled_Params params;
	params.Index = Index;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>      Effects                        (Parm, OutParm, ZeroConstructor)

void UBPi_ProgressBars_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetEffects");

	UBPi_ProgressBars_C_PB_GetEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>*     Effects                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPi_ProgressBars_C::PB_SetEffects(TArray<struct FS_Effects>* Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetEffects");

	UBPi_ProgressBars_C_PB_SetEffects_Params params;
	params.Effects = Effects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AbsoluteFillMethod             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetSeparationAbsoluteFill(bool* AbsoluteFillMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationAbsoluteFill");

	UBPi_ProgressBars_C_PB_SetSeparationAbsoluteFill_Params params;
	params.AbsoluteFillMethod = AbsoluteFillMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetSeparationStepsSpacing(float* Spacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationStepsSpacing");

	UBPi_ProgressBars_C_PB_SetSeparationStepsSpacing_Params params;
	params.Spacing = Spacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Steps                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetSeparationSteps(int* Steps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSeparationSteps");

	UBPi_ProgressBars_C_PB_SetSeparationSteps_Params params;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMask>*     MaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetCustomMarqueeMaskType(TEnumAsByte<EMarqueeMask>* MaskType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeMaskType");

	UBPi_ProgressBars_C_PB_SetCustomMarqueeMaskType_Params params;
	params.MaskType = MaskType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetMarqueeImage(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetMarqueeImage");

	UBPi_ProgressBars_C_PB_SetMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetCustomMarqueeImage(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetCustomMarqueeImage");

	UBPi_ProgressBars_C_PB_SetCustomMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsMarquee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMarquee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsMarquee");

	UBPi_ProgressBars_C_PB_GetIsMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMarquee != nullptr)
		*IsMarquee = params.IsMarquee;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetIsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsMarquee");

	UBPi_ProgressBars_C_PB_SetIsMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsCustomMarquee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMarquee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetIsCustomMarquee");

	UBPi_ProgressBars_C_PB_GetIsCustomMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMarquee != nullptr)
		*IsMarquee = params.IsMarquee;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetIsCustomMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetIsCustomMarquee");

	UBPi_ProgressBars_C_PB_SetIsCustomMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillFromCenterSpacing(float* Spacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillFromCenterSpacing");

	UBPi_ProgressBars_C_PB_SetFillFromCenterSpacing_Params params;
	params.Spacing = Spacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillType");

	UBPi_ProgressBars_C_PB_SetFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             BlendMask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetBlendMask(class UTexture2D** BlendMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBlendMask");

	UBPi_ProgressBars_C_PB_SetBlendMask_Params params;
	params.BlendMask = BlendMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGradientTypes>*   GradientType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillColorGradientType(TEnumAsByte<EGradientTypes>* GradientType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientType");

	UBPi_ProgressBars_C_PB_SetFillColorGradientType_Params params;
	params.GradientType = GradientType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BlurStrength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetBackgroundBlurStrength(float* BlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBlurStrength");

	UBPi_ProgressBars_C_PB_SetBackgroundBlurStrength_Params params;
	params.BlurStrength = BlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetBackgroundBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundBrushTiling");

	UBPi_ProgressBars_C_PB_SetBackgroundBrushTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetBackgroundColorMask(class UTexture2D** Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColorMask");

	UBPi_ProgressBars_C_PB_SetBackgroundColorMask_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillColorMask(class UObject** Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorMask");

	UBPi_ProgressBars_C_PB_SetFillColorMask_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillColorBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorBrushTiling");

	UBPi_ProgressBars_C_PB_SetFillColorBrushTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         GradientPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillColorGradientPower(float* GradientPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColorGradientPower");

	UBPi_ProgressBars_C_PB_SetFillColorGradientPower_Params params;
	params.GradientPower = GradientPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetBackgroundColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetBackgroundColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetBackgroundColor");

	UBPi_ProgressBars_C_PB_GetBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetBackgroundColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetBackgroundColor");

	UBPi_ProgressBars_C_PB_SetBackgroundColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseGradientFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseGradientFillColor           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseGradientFillColor");

	UBPi_ProgressBars_C_PB_GetUseGradientFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = params.UseGradientFillColor;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseGradientFillColor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetUseGradientFillColor(bool* UseGradientFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseGradientFillColor");

	UBPi_ProgressBars_C_PB_SetUseGradientFillColor_Params params;
	params.UseGradientFillColor = UseGradientFillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Negative");

	UBPi_ProgressBars_C_PB_GetTargetFillColor_Negative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetFillColor_Positive");

	UBPi_ProgressBars_C_PB_GetTargetFillColor_Positive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Negative");

	UBPi_ProgressBars_C_PB_SetTargetFillColor_Negative_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetFillColor_Positive");

	UBPi_ProgressBars_C_PB_SetTargetFillColor_Positive_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetInterpTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetInterpTimeTarget(float* TargetInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeTarget");

	UBPi_ProgressBars_C_PB_GetInterpTimeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = params.TargetInterpTime;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetInterpTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetInterpTimeTarget(float* TargetInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeTarget");

	UBPi_ProgressBars_C_PB_SetInterpTimeTarget_Params params;
	params.TargetInterpTime = TargetInterpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeCurrent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentInterpTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetInterpTimeCurrent(float* CurrentInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetInterpTimeCurrent");

	UBPi_ProgressBars_C_PB_GetInterpTimeCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = params.CurrentInterpTime;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentInterpTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetInterpTimeCurrent(float* CurrentInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetInterpTimeCurrent");

	UBPi_ProgressBars_C_PB_SetInterpTimeCurrent_Params params;
	params.CurrentInterpTime = CurrentInterpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetProgressMethod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>   EProgressMethod                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetProgressMethod");

	UBPi_ProgressBars_C_PB_GetProgressMethod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EProgressMethod != nullptr)
		*EProgressMethod = params.EProgressMethod;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>*  EProgressMethod                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetProgressMethod");

	UBPi_ProgressBars_C_PB_SetProgressMethod_Params params;
	params.EProgressMethod = EProgressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseTargetPercent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetUseTargetPercent");

	UBPi_ProgressBars_C_PB_GetUseTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = params.UseTargetPercent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetUseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetUseTargetPercent");

	UBPi_ProgressBars_C_PB_SetUseTargetPercent_Params params;
	params.UseTargetPercent = UseTargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetThickness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Thickness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetThickness(float* Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetThickness");

	UBPi_ProgressBars_C_PB_GetThickness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Thickness != nullptr)
		*Thickness = params.Thickness;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetThickness(float* Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetThickness");

	UBPi_ProgressBars_C_PB_SetThickness_Params params;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetTargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetTargetPercent");

	UBPi_ProgressBars_C_PB_GetTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetPercent != nullptr)
		*TargetPercent = params.TargetPercent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetTargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetTargetPercent");

	UBPi_ProgressBars_C_PB_SetTargetPercent_Params params;
	params.TargetPercent = TargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetFillColor");

	UBPi_ProgressBars_C_PB_GetFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetFillColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetFillColor");

	UBPi_ProgressBars_C_PB_SetFillColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetPercent");

	UBPi_ProgressBars_C_PB_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetPercent(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetPercent");

	UBPi_ProgressBars_C_PB_SetPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_GetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_GetSize");

	UBPi_ProgressBars_C_PB_GetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPi_ProgressBars_C::PB_SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPi_ProgressBars.BPi_ProgressBars_C.PB_SetSize");

	UBPi_ProgressBars_C_PB_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

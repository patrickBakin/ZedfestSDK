// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Widget_Functions.BP_Widget_Functions_C.RandomizePositiveNegativeFloat
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_Widget_Functions_C::STATIC_RandomizePositiveNegativeFloat(float* Value, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.RandomizePositiveNegativeFloat");

	UBP_Widget_Functions_C_RandomizePositiveNegativeFloat_Params params;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetBorderBrushTiling(class UBorder** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushTiling");

	UBP_Widget_Functions_C_SetBorderBrushTiling_Params params;
	params.Target = Target;
	params.Tiling = Tiling;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetBorderBrushSize(class UBorder** Target, struct FVector2D* Size, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrushSize");

	UBP_Widget_Functions_C_SetBorderBrushSize_Params params;
	params.Target = Target;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrush
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBorder**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                Brush                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetBorderBrush(class UBorder** Target, class UObject** Brush, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetBorderBrush");

	UBP_Widget_Functions_C_SetBorderBrush_Params params;
	params.Target = Target;
	params.Brush = Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetImageBrushSize(class UImage** Target, struct FVector2D* Size, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushSize");

	UBP_Widget_Functions_C_SetImageBrushSize_Params params;
	params.Target = Target;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetImageBrushTiling(class UImage** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrushTiling");

	UBP_Widget_Functions_C_SetImageBrushTiling_Params params;
	params.Target = Target;
	params.Tiling = Tiling;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrush
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                Brush                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetImageBrush(class UImage** Target, class UObject** Brush, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetImageBrush");

	UBP_Widget_Functions_C_SetImageBrush_Params params;
	params.Target = Target;
	params.Brush = Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageDrawAs
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushDrawType>* DrawAs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetFillImageDrawAs(class UProgressBar** Target, TEnumAsByte<ESlateBrushDrawType>* DrawAs, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageDrawAs");

	UBP_Widget_Functions_C_SetFillImageDrawAs_Params params;
	params.Target = Target;
	params.DrawAs = DrawAs;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageMargin
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetFillImageMargin(class UProgressBar** Target, float* Margin, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageMargin");

	UBP_Widget_Functions_C_SetFillImageMargin_Params params;
	params.Target = Target;
	params.Margin = Margin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetBackgroundTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSlateColor*            Tint                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetBackgroundTint(class UProgressBar** Target, struct FSlateColor* Tint, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetBackgroundTint");

	UBP_Widget_Functions_C_SetBackgroundTint_Params params;
	params.Target = Target;
	params.Tint = Tint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMirroring
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushMirrorType>* Mirroring                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeMirroring(class UProgressBar** Target, TEnumAsByte<ESlateBrushMirrorType>* Mirroring, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMirroring");

	UBP_Widget_Functions_C_SetMarqueeMirroring_Params params;
	params.Target = Target;
	params.Mirroring = Mirroring;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTiling
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeTiling(class UProgressBar** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTiling");

	UBP_Widget_Functions_C_SetMarqueeTiling_Params params;
	params.Target = Target;
	params.Tiling = Tiling;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeDrawAs
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeDrawAs(class UProgressBar** Target, TEnumAsByte<ESlateBrushDrawType>* Draw_As, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeDrawAs");

	UBP_Widget_Functions_C_SetMarqueeDrawAs_Params params;
	params.Target = Target;
	params.Draw_As = Draw_As;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeTint(class UProgressBar** Target, struct FLinearColor* Tint, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeTint");

	UBP_Widget_Functions_C_SetMarqueeTint_Params params;
	params.Target = Target;
	params.Tint = Tint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMargin
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FMargin*                Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeMargin(class UProgressBar** Target, struct FMargin* Margin, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeMargin");

	UBP_Widget_Functions_C_SetMarqueeMargin_Params params;
	params.Target = Target;
	params.Margin = Margin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImageSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeImageSize(class UProgressBar** Target, struct FVector2D* Image_Size, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImageSize");

	UBP_Widget_Functions_C_SetMarqueeImageSize_Params params;
	params.Target = Target;
	params.Image_Size = Image_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetMarqueeImage(class UProgressBar** Target, class UObject** Image, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetMarqueeImage");

	UBP_Widget_Functions_C_SetMarqueeImage_Params params;
	params.Target = Target;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetFillImage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 FillImage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_GetFillImage(class UProgressBar** Target, class UObject** __WorldContext, class UObject** FillImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.GetFillImage");

	UBP_Widget_Functions_C_GetFillImage_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FillImage != nullptr)
		*FillImage = params.FillImage;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageTiling
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FProgressBarStyle       Output_Get                     (Parm, OutParm)

void UBP_Widget_Functions_C::STATIC_SetFillImageTiling(class UProgressBar** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext, struct FProgressBarStyle* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageTiling");

	UBP_Widget_Functions_C_SetFillImageTiling_Params params;
	params.Target = Target;
	params.Tiling = Tiling;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              FillImageSize                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetFillImageSize(class UProgressBar** Target, struct FVector2D* FillImageSize, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImageSize");

	UBP_Widget_Functions_C_SetFillImageSize_Params params;
	params.Target = Target;
	params.FillImageSize = FillImageSize;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                FillImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetFillImage(class UProgressBar** Target, class UObject** FillImage, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetFillImage");

	UBP_Widget_Functions_C_SetFillImage_Params params;
	params.Target = Target;
	params.FillImage = FillImage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractBrightnessValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_Widget_Functions_C::STATIC_SubtractBrightnessValue(struct FLinearColor* InColor, float* Value, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractBrightnessValue");

	UBP_Widget_Functions_C_SubtractBrightnessValue_Params params;
	params.InColor = InColor;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractFromColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           InColor                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UBP_Widget_Functions_C::STATIC_SubtractFromColor(struct FLinearColor* InColor, float* Value, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SubtractFromColor");

	UBP_Widget_Functions_C_SubtractFromColor_Params params;
	params.InColor = InColor;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetSize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USizeBox**               SizeBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_GetSize(class USizeBox** SizeBox, class UObject** __WorldContext, float* Width, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.GetSize");

	UBP_Widget_Functions_C_GetSize_Params params;
	params.SizeBox = SizeBox;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.SetSize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox**               SizeBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Widget_Functions_C::STATIC_SetSize(class USizeBox** SizeBox, float* Width, float* Height, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.SetSize");

	UBP_Widget_Functions_C_SetSize_Params params;
	params.SizeBox = SizeBox;
	params.Width = Width;
	params.Height = Height;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSizeClamped
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D**             Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Clamp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UBP_Widget_Functions_C::STATIC_GetTexture2DSizeClamped(class UTexture2D** Texture2D, struct FVector2D* Clamp, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSizeClamped");

	UBP_Widget_Functions_C_GetTexture2DSizeClamped_Params params;
	params.Texture2D = Texture2D;
	params.Clamp = Clamp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSize
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D**             Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UBP_Widget_Functions_C::STATIC_GetTexture2DSize(class UTexture2D** Texture2D, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_Functions.BP_Widget_Functions_C.GetTexture2DSize");

	UBP_Widget_Functions_C_GetTexture2DSize_Params params;
	params.Texture2D = Texture2D;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

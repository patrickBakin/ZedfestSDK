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

// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Vertical
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Tolerance                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_LinearProgress_Separated_C::FindMaxPaddingValue_Vertical(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Vertical");

	UWB_LinearProgress_Separated_C_FindMaxPaddingValue_Vertical_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindCurrentSegmentPercentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_LinearProgress_Separated_C::FindCurrentSegmentPercentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindCurrentSegmentPercentValue");

	UWB_LinearProgress_Separated_C_FindCurrentSegmentPercentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindPercentCurrentSegment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWB_LinearProgress_Separated_C::FindPercentCurrentSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindPercentCurrentSegment");

	UWB_LinearProgress_Separated_C_FindPercentCurrentSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.GetSegmentSteps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_LinearProgress_Separated_C::GetSegmentSteps()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.GetSegmentSteps");

	UWB_LinearProgress_Separated_C_GetSegmentSteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Horizontal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Tolerance                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_LinearProgress_Separated_C::FindMaxPaddingValue_Horizontal(float* Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.FindMaxPaddingValue_Horizontal");

	UWB_LinearProgress_Separated_C_FindMaxPaddingValue_Horizontal_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumSegments                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFillFromCenter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::AddSegmentsProgressBar(int* NumSegments, float* Spacing, struct FVector2D* Size, struct FLinearColor* FillColor, TEnumAsByte<EProgressBarFillType>* FillType, bool* bIsFillFromCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsProgressBar");

	UWB_LinearProgress_Separated_C_AddSegmentsProgressBar_Params params;
	params.NumSegments = NumSegments;
	params.Spacing = Spacing;
	params.Size = Size;
	params.FillColor = FillColor;
	params.FillType = FillType;
	params.bIsFillFromCenter = bIsFillFromCenter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_ProgressBar
// (BlueprintCallable, BlueprintEvent)

void UWB_LinearProgress_Separated_C::ClearSegments_ProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_ProgressBar");

	UWB_LinearProgress_Separated_C_ClearSegments_ProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseBackgroundBlur             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlurStrength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::AddSegmentsBackground(struct FLinearColor* Color, bool* bUseBackgroundBlur, float* BlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsBackground");

	UWB_LinearProgress_Separated_C_AddSegmentsBackground_Params params;
	params.Color = Color;
	params.bUseBackgroundBlur = bUseBackgroundBlur;
	params.BlurStrength = BlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Background
// (BlueprintCallable, BlueprintEvent)

void UWB_LinearProgress_Separated_C::ClearSegments_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Background");

	UWB_LinearProgress_Separated_C_ClearSegments_Background_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetPercent");

	UWB_LinearProgress_Separated_C_SetPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetAbsoluteFillMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAbsoluteFill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetAbsoluteFillMethod(bool* bAbsoluteFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetAbsoluteFillMethod");

	UWB_LinearProgress_Separated_C_SetAbsoluteFillMethod_Params params;
	params.bAbsoluteFill = bAbsoluteFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetUseMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bSetUseMarquee                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetUseMarquee(bool* bSetUseMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetUseMarquee");

	UWB_LinearProgress_Separated_C_SetUseMarquee_Params params;
	params.bSetUseMarquee = bSetUseMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Marquee
// (BlueprintCallable, BlueprintEvent)

void UWB_LinearProgress_Separated_C::ClearSegments_Marquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ClearSegments_Marquee");

	UWB_LinearProgress_Separated_C_ClearSegments_Marquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetMarqueeImage(class UObject** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImage");

	UWB_LinearProgress_Separated_C_SetMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ImageSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetMarqueeImageSize(struct FVector2D* ImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeImageSize");

	UWB_LinearProgress_Separated_C_SetMarqueeImageSize_Params params;
	params.ImageSize = ImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetMarqueeTint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTint");

	UWB_LinearProgress_Separated_C_SetMarqueeTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* DrawAs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetMarqueeDrawAs(TEnumAsByte<ESlateBrushDrawType>* DrawAs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeDrawAs");

	UWB_LinearProgress_Separated_C_SetMarqueeDrawAs_Params params;
	params.DrawAs = DrawAs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::SetMarqueeTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.SetMarqueeTiling");

	UWB_LinearProgress_Separated_C_SetMarqueeTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.UpdateProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::UpdateProgressChangeColor(struct FLinearColor* NewColor, float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.UpdateProgressChangeColor");

	UWB_LinearProgress_Separated_C_UpdateProgressChangeColor_Params params;
	params.NewColor = NewColor;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsMarquee
// (BlueprintCallable, BlueprintEvent)

void UWB_LinearProgress_Separated_C::AddSegmentsMarquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.AddSegmentsMarquee");

	UWB_LinearProgress_Separated_C_AddSegmentsMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ExecuteUbergraph_WB_LinearProgress_Separated
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_LinearProgress_Separated_C::ExecuteUbergraph_WB_LinearProgress_Separated(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_LinearProgress_Separated.WB_LinearProgress_Separated_C.ExecuteUbergraph_WB_LinearProgress_Separated");

	UWB_LinearProgress_Separated_C_ExecuteUbergraph_WB_LinearProgress_Separated_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarqueeTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTiling");

	UWB_PB_Raw_C_SetMarqueeTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* DrawAs                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarqueeDrawAs(TEnumAsByte<ESlateBrushDrawType>* DrawAs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeDrawAs");

	UWB_PB_Raw_C_SetMarqueeDrawAs_Params params;
	params.DrawAs = DrawAs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* BarFillType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* BarFillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetBarFillType");

	UWB_PB_Raw_C_SetBarFillType_Params params;
	params.BarFillType = BarFillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarqueeTint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTint");

	UWB_PB_Raw_C_SetMarqueeTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillColorAndOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillColorAndOpacity(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillColorAndOpacity");

	UWB_PB_Raw_C_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ImageSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarqueeImageSize(struct FVector2D* ImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImageSize");

	UWB_PB_Raw_C_SetMarqueeImageSize_Params params;
	params.ImageSize = ImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetBackgroundTint(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetBackgroundTint");

	UWB_PB_Raw_C_SetBackgroundTint_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarqueeImage(class UObject** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImage");

	UWB_PB_Raw_C_SetMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                FillImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillImage(class UObject** FillImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillImage");

	UWB_PB_Raw_C_SetFillImage_Params params;
	params.FillImage = FillImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetMarquee");

	UWB_PB_Raw_C_SetMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              FillImageSize                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillImageSize(struct FVector2D* FillImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageSize");

	UWB_PB_Raw_C_SetFillImageSize_Params params;
	params.FillImageSize = FillImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetColor(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetColor");

	UWB_PB_Raw_C_SetColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillImageTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageTiling");

	UWB_PB_Raw_C_SetFillImageTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetPercent");

	UWB_PB_Raw_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageMargin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillImageMargin(float* Margin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageMargin");

	UWB_PB_Raw_C_SetFillImageMargin_Params params;
	params.Margin = Margin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::SetFillImageDrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageDrawAs");

	UWB_PB_Raw_C_SetFillImageDrawAs_Params params;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Raw.WB_PB_Raw_C.ExecuteUbergraph_WB_PB_Raw
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Raw_C::ExecuteUbergraph_WB_PB_Raw(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Raw.WB_PB_Raw_C.ExecuteUbergraph_WB_PB_Raw");

	UWB_PB_Raw_C_ExecuteUbergraph_WB_PB_Raw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

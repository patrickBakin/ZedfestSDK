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
//Functions
//---------------------------------------------------------------------------

// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetPercent");

	UWB_BaseProgressBar_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetCurrentProgressBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressBar*            AsProgress_Bar                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWB_BaseProgressBar_C::GetCurrentProgressBar(class UProgressBar** AsProgress_Bar)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.GetCurrentProgressBar");

	UWB_BaseProgressBar_C_GetCurrentProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsProgress_Bar != nullptr)
		*AsProgress_Bar = params.AsProgress_Bar;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetPercent");

	UWB_BaseProgressBar_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillColorAndOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillColorAndOpacity(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillColorAndOpacity");

	UWB_BaseProgressBar_C_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillImageTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageTiling");

	UWB_BaseProgressBar_C_SetFillImageTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* BarFillType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* BarFillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBarFillType");

	UWB_BaseProgressBar_C_SetBarFillType_Params params;
	params.BarFillType = BarFillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              FillImageSize                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillImageSize(struct FVector2D* FillImageSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageSize");

	UWB_BaseProgressBar_C_SetFillImageSize_Params params;
	params.FillImageSize = FillImageSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                FillImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillImage(class UObject** FillImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImage");

	UWB_BaseProgressBar_C_SetFillImage_Params params;
	params.FillImage = FillImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetIsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InbIsMarquee                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetIsMarquee(bool* InbIsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetIsMarquee");

	UWB_BaseProgressBar_C_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetMarqueeImage(class UObject** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImage");

	UWB_BaseProgressBar_C_SetMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetMarqueeImageSize(struct FVector2D* Image_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeImageSize");

	UWB_BaseProgressBar_C_SetMarqueeImageSize_Params params;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetMarqueeTint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTint");

	UWB_BaseProgressBar_C_SetMarqueeTint_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetMarqueeDrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeDrawAs");

	UWB_BaseProgressBar_C_SetMarqueeDrawAs_Params params;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetMarqueeTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetMarqueeTiling");

	UWB_BaseProgressBar_C_SetMarqueeTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetBackgroundTint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetBackgroundTint");

	UWB_BaseProgressBar_C_SetBackgroundTint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageMargin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillImageMargin(float* Margin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageMargin");

	UWB_BaseProgressBar_C_SetFillImageMargin_Params params;
	params.Margin = Margin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::SetFillImageDrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.SetFillImageDrawAs");

	UWB_BaseProgressBar_C_SetFillImageDrawAs_Params params;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_BaseProgressBar.WB_BaseProgressBar_C.ExecuteUbergraph_WB_BaseProgressBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_BaseProgressBar_C::ExecuteUbergraph_WB_BaseProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_BaseProgressBar.WB_BaseProgressBar_C.ExecuteUbergraph_WB_BaseProgressBar");

	UWB_BaseProgressBar_C_ExecuteUbergraph_WB_BaseProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

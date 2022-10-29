#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Widget_Functions.BP_Widget_Functions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Widget_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Widget_Functions.BP_Widget_Functions_C");
		return ptr;
	}


	float STATIC_RandomizePositiveNegativeFloat(float* Value, class UObject** __WorldContext);
	void STATIC_SetBorderBrushTiling(class UBorder** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext);
	void STATIC_SetBorderBrushSize(class UBorder** Target, struct FVector2D* Size, class UObject** __WorldContext);
	void STATIC_SetBorderBrush(class UBorder** Target, class UObject** Brush, class UObject** __WorldContext);
	void STATIC_SetImageBrushSize(class UImage** Target, struct FVector2D* Size, class UObject** __WorldContext);
	void STATIC_SetImageBrushTiling(class UImage** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext);
	void STATIC_SetImageBrush(class UImage** Target, class UObject** Brush, class UObject** __WorldContext);
	void STATIC_SetFillImageDrawAs(class UProgressBar** Target, TEnumAsByte<ESlateBrushDrawType>* DrawAs, class UObject** __WorldContext);
	void STATIC_SetFillImageMargin(class UProgressBar** Target, float* Margin, class UObject** __WorldContext);
	void STATIC_SetBackgroundTint(class UProgressBar** Target, struct FSlateColor* Tint, class UObject** __WorldContext);
	void STATIC_SetMarqueeMirroring(class UProgressBar** Target, TEnumAsByte<ESlateBrushMirrorType>* Mirroring, class UObject** __WorldContext);
	void STATIC_SetMarqueeTiling(class UProgressBar** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext);
	void STATIC_SetMarqueeDrawAs(class UProgressBar** Target, TEnumAsByte<ESlateBrushDrawType>* Draw_As, class UObject** __WorldContext);
	void STATIC_SetMarqueeTint(class UProgressBar** Target, struct FLinearColor* Tint, class UObject** __WorldContext);
	void STATIC_SetMarqueeMargin(class UProgressBar** Target, struct FMargin* Margin, class UObject** __WorldContext);
	void STATIC_SetMarqueeImageSize(class UProgressBar** Target, struct FVector2D* Image_Size, class UObject** __WorldContext);
	void STATIC_SetMarqueeImage(class UProgressBar** Target, class UObject** Image, class UObject** __WorldContext);
	void STATIC_GetFillImage(class UProgressBar** Target, class UObject** __WorldContext, class UObject** FillImage);
	void STATIC_SetFillImageTiling(class UProgressBar** Target, TEnumAsByte<ESlateBrushTileType>* Tiling, class UObject** __WorldContext, struct FProgressBarStyle* Output_Get);
	void STATIC_SetFillImageSize(class UProgressBar** Target, struct FVector2D* FillImageSize, class UObject** __WorldContext);
	void STATIC_SetFillImage(class UProgressBar** Target, class UObject** FillImage, class UObject** __WorldContext);
	struct FLinearColor STATIC_SubtractBrightnessValue(struct FLinearColor* InColor, float* Value, class UObject** __WorldContext);
	struct FLinearColor STATIC_SubtractFromColor(struct FLinearColor* InColor, float* Value, class UObject** __WorldContext);
	void STATIC_GetSize(class USizeBox** SizeBox, class UObject** __WorldContext, float* Width, float* Height);
	void STATIC_SetSize(class USizeBox** SizeBox, float* Width, float* Height, class UObject** __WorldContext);
	struct FVector2D STATIC_GetTexture2DSizeClamped(class UTexture2D** Texture2D, struct FVector2D* Clamp, class UObject** __WorldContext);
	struct FVector2D STATIC_GetTexture2DSize(class UTexture2D** Texture2D, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

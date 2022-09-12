#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPi_ProgressBars.BPi_ProgressBars_C
// 0x0000 (0x0028 - 0x0028)
class UBPi_ProgressBars_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPi_ProgressBars.BPi_ProgressBars_C");
		return ptr;
	}


	void PB_GetSeparationSteps(int* Steps);
	void PB_RemoveEffect(int* Index);
	void PB_AddEffect(struct FS_Effects* Effect, int* Index);
	void PB_SetAllEffectsEnabled(bool* IsEnabled);
	void PB_SetEffectEnabled(int* Index, bool* IsEnabled);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects);
	void PB_SetEffects(TArray<struct FS_Effects>* Effects);
	void PB_SetSeparationAbsoluteFill(bool* AbsoluteFillMethod);
	void PB_SetSeparationStepsSpacing(float* Spacing);
	void PB_SetSeparationSteps(int* Steps);
	void PB_SetCustomMarqueeMaskType(TEnumAsByte<EMarqueeMask>* MaskType);
	void PB_SetMarqueeImage(class UTexture2D** Image);
	void PB_SetCustomMarqueeImage(class UTexture2D** Image);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_SetIsMarquee(bool* IsMarquee);
	void PB_GetIsCustomMarquee(bool* IsMarquee);
	void PB_SetIsCustomMarquee(bool* IsMarquee);
	void PB_SetFillFromCenterSpacing(float* Spacing);
	void PB_SetFillType(TEnumAsByte<EProgressBarFillType>* FillType);
	void PB_SetBlendMask(class UTexture2D** BlendMask);
	void PB_SetFillColorGradientType(TEnumAsByte<EGradientTypes>* GradientType);
	void PB_SetBackgroundBlurStrength(float* BlurStrength);
	void PB_SetBackgroundBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling);
	void PB_SetBackgroundColorMask(class UTexture2D** Mask);
	void PB_SetFillColorMask(class UObject** Mask);
	void PB_SetFillColorBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling);
	void PB_SetFillColorGradientPower(float* GradientPower);
	void PB_GetBackgroundColor(struct FLinearColor* Color);
	void PB_SetBackgroundColor(struct FLinearColor* Color);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_SetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_SetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_SetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_GetInterpTimeTarget(float* TargetInterpTime);
	void PB_SetInterpTimeTarget(float* TargetInterpTime);
	void PB_GetInterpTimeCurrent(float* CurrentInterpTime);
	void PB_SetInterpTimeCurrent(float* CurrentInterpTime);
	void PB_GetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod);
	void PB_SetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod);
	void PB_GetUseTargetPercent(bool* UseTargetPercent);
	void PB_SetUseTargetPercent(bool* UseTargetPercent);
	void PB_GetThickness(float* Thickness);
	void PB_SetThickness(float* Thickness);
	void PB_GetTargetPercent(float* TargetPercent);
	void PB_SetTargetPercent(float* TargetPercent);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_SetFillColor(struct FLinearColor* Color);
	void PB_GetPercent(float* Percent);
	void PB_SetPercent(float* Value);
	void PB_GetSize(struct FVector2D* Size);
	void PB_SetSize(struct FVector2D* Size);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

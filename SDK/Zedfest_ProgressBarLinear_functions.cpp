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

// Function ProgressBarLinear.ProgressBarLinear_C.Count_TargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Count_TargetPercent(float* Time, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Count_TargetPercent");

	UProgressBarLinear_C_Count_TargetPercent_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ProgressBarLinear.ProgressBarLinear_C.RemoveEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           IndexToRemove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::RemoveEntryIndex(int* IndexToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.RemoveEntryIndex");

	UProgressBarLinear_C_RemoveEntryIndex_Params params;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetEntryIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::GetEntryIndex(int* Index, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetEntryIndex");

	UProgressBarLinear_C_GetEntryIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsValidEntryIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           IndexToTest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsValidEntryIndex(int* IndexToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsValidEntryIndex");

	UProgressBarLinear_C_IsValidEntryIndex_Params params;
	params.IndexToTest = IndexToTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetLocalVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::SetLocalVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetLocalVariables");

	UProgressBarLinear_C_SetLocalVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.HasEffectChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::HasEffectChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.HasEffectChanged");

	UProgressBarLinear_C_HasEffectChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.NotEqualColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           A                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           B                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::NotEqualColor(struct FLinearColor* A, struct FLinearColor* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.NotEqualColor");

	UProgressBarLinear_C_NotEqualColor_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.HasAnyValueChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::HasAnyValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.HasAnyValueChanged");

	UProgressBarLinear_C_HasAnyValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsEffectProgressChangeColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_Effects*             Effect                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsEffectProgressChangeColor(struct FS_Effects* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsEffectProgressChangeColor");

	UProgressBarLinear_C_IsEffectProgressChangeColor_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSeparationSteps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Steps                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetSeparationSteps(int* Steps)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSeparationSteps");

	UProgressBarLinear_C_PB_GetSeparationSteps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Steps != nullptr)
		*Steps = params.Steps;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_AddEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects*             Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_AddEffect(struct FS_Effects* Effect, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_AddEffect");

	UProgressBarLinear_C_PB_AddEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>      Effects                        (Parm, OutParm, ZeroConstructor)

void UProgressBarLinear_C::PB_GetEffects(TArray<struct FS_Effects>* Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetEffects");

	UProgressBarLinear_C_PB_GetEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsCustomMarquee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMarquee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetIsCustomMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsCustomMarquee");

	UProgressBarLinear_C_PB_GetIsCustomMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMarquee != nullptr)
		*IsMarquee = params.IsMarquee;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsMarquee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMarquee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetIsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetIsMarquee");

	UProgressBarLinear_C_PB_GetIsMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMarquee != nullptr)
		*IsMarquee = params.IsMarquee;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseGradientFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseGradientFillColor           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetUseGradientFillColor(bool* UseGradientFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseGradientFillColor");

	UProgressBarLinear_C_PB_GetUseGradientFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseGradientFillColor != nullptr)
		*UseGradientFillColor = params.UseGradientFillColor;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetFillColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetFillColor");

	UProgressBarLinear_C_PB_GetFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Negative
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Negative");

	UProgressBarLinear_C_PB_GetTargetFillColor_Negative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Positive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetFillColor_Positive");

	UProgressBarLinear_C_PB_GetTargetFillColor_Positive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetInterpTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetInterpTimeTarget(float* TargetInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeTarget");

	UProgressBarLinear_C_PB_GetInterpTimeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetInterpTime != nullptr)
		*TargetInterpTime = params.TargetInterpTime;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeCurrent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentInterpTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetInterpTimeCurrent(float* CurrentInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetInterpTimeCurrent");

	UProgressBarLinear_C_PB_GetInterpTimeCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentInterpTime != nullptr)
		*CurrentInterpTime = params.CurrentInterpTime;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetProgressMethod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>   EProgressMethod                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetProgressMethod");

	UProgressBarLinear_C_PB_GetProgressMethod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EProgressMethod != nullptr)
		*EProgressMethod = params.EProgressMethod;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseTargetPercent               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetUseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetUseTargetPercent");

	UProgressBarLinear_C_PB_GetUseTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseTargetPercent != nullptr)
		*UseTargetPercent = params.UseTargetPercent;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetPercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetTargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetTargetPercent");

	UProgressBarLinear_C_PB_GetTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetPercent != nullptr)
		*TargetPercent = params.TargetPercent;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetPercent");

	UProgressBarLinear_C_PB_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_GetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_GetSize");

	UProgressBarLinear_C_PB_GetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetEffectOverlays
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UOverlay*>        Array                          (Parm, OutParm, ZeroConstructor)

void UProgressBarLinear_C::GetEffectOverlays(TArray<class UOverlay*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetEffectOverlays");

	UProgressBarLinear_C_GetEffectOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlaysCentered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEffectLayer>*     EffectLayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UOverlay*>        Overlays                       (Parm, OutParm, ZeroConstructor)

void UProgressBarLinear_C::FindEffectOverlaysCentered(TEnumAsByte<EEffectLayer>* EffectLayer, TArray<class UOverlay*>* Overlays)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlaysCentered");

	UProgressBarLinear_C_FindEffectOverlaysCentered_Params params;
	params.EffectLayer = EffectLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overlays != nullptr)
		*Overlays = params.Overlays;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_Effects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PaddingValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetCenterSpacing_Effects(float* PaddingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_Effects");

	UProgressBarLinear_C_SetCenterSpacing_Effects_Params params;
	params.PaddingValue = PaddingValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.ClearEffectLayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEffectLayer>*     EffectLayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::ClearEffectLayers(TEnumAsByte<EEffectLayer>* EffectLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.ClearEffectLayers");

	UProgressBarLinear_C_ClearEffectLayers_Params params;
	params.EffectLayer = EffectLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBlurEnabledDefault(bool* bInIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledDefault");

	UProgressBarLinear_C_SetBlurEnabledDefault_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledCentered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInIsEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBlurEnabledCentered(bool* bInIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBlurEnabledCentered");

	UProgressBarLinear_C_SetBlurEnabledCentered_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InStrength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBlurStrengthDefault(float* InStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthDefault");

	UProgressBarLinear_C_SetBlurStrengthDefault_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthCentered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InStrength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBlurStrengthCentered(float* InStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBlurStrengthCentered");

	UProgressBarLinear_C_SetBlurStrengthCentered_Params params;
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SendPercentToEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay**               EffectsOverlay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SendPercentToEffects(class UOverlay** EffectsOverlay, float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SendPercentToEffects");

	UProgressBarLinear_C_SendPercentToEffects_Params params;
	params.EffectsOverlay = EffectsOverlay;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEffectLayer>*     EffectLayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOverlay*                Overlay                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UProgressBarLinear_C::FindEffectOverlay(TEnumAsByte<EEffectLayer>* EffectLayer, class UOverlay** Overlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.FindEffectOverlay");

	UProgressBarLinear_C_FindEffectOverlay_Params params;
	params.EffectLayer = EffectLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overlay != nullptr)
		*Overlay = params.Overlay;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Count_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Count_Percent(float* Time, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Count_Percent");

	UProgressBarLinear_C_Count_Percent_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_CurrentPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Transfer_CurrentPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Transfer_CurrentPercent");

	UProgressBarLinear_C_Transfer_CurrentPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_UseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Transfer_UseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Transfer_UseTargetPercent");

	UProgressBarLinear_C_Transfer_UseTargetPercent_Params params;
	params.UseTargetPercent = UseTargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Transfer_TargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Transfer_TargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Transfer_TargetPercent");

	UProgressBarLinear_C_Transfer_TargetPercent_Params params;
	params.TargetPercent = TargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBlendMask(class UTexture** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBlendMask");

	UProgressBarLinear_C_SetBlendMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeTopOrBottom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsFillTypeTopOrBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeTopOrBottom");

	UProgressBarLinear_C_IsFillTypeTopOrBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetFillFromCenterSpacing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProgressBarLinear_C::GetFillFromCenterSpacing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetFillFromCenterSpacing");

	UProgressBarLinear_C_GetFillFromCenterSpacing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_BG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PaddingValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetCenterSpacing_BG(float* PaddingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing_BG");

	UProgressBarLinear_C_SetCenterSpacing_BG_Params params;
	params.PaddingValue = PaddingValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetSize_BGBrushLeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetSize_BGBrushLeftRight(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetSize_BGBrushLeftRight");

	UProgressBarLinear_C_SetSize_BGBrushLeftRight_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSizeCentered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UProgressBarLinear_C::FindThicknessSizeCentered(float* Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSizeCentered");

	UProgressBarLinear_C_FindThicknessSizeCentered_Params params;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetCenterSpacingSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProgressBarLinear_C::GetCenterSpacingSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetCenterSpacingSize");

	UProgressBarLinear_C_GetCenterSpacingSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PaddingValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetCenterSpacing(float* PaddingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetCenterSpacing");

	UProgressBarLinear_C_SetCenterSpacing_Params params;
	params.PaddingValue = PaddingValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWB_Container_Linear_C*> Array                          (Parm, OutParm, ZeroConstructor)

void UProgressBarLinear_C::GetChildren(TArray<class UWB_Container_Linear_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetChildren");

	UProgressBarLinear_C_GetChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeFillFromCenter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsFillTypeFillFromCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsFillTypeFillFromCenter");

	UProgressBarLinear_C_IsFillTypeFillFromCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.GetInterpolationTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UProgressBarLinear_C::GetInterpolationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.GetInterpolationTime");

	UProgressBarLinear_C_GetInterpolationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UProgressBarLinear_C::FindThicknessSize(float* Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.FindThicknessSize");

	UProgressBarLinear_C_FindThicknessSize_Params params;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodInterpolated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsProgressMethodInterpolated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodInterpolated");

	UProgressBarLinear_C_IsProgressMethodInterpolated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodStatic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UProgressBarLinear_C::IsProgressMethodStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.IsProgressMethodStatic");

	UProgressBarLinear_C_IsProgressMethodStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSize");

	UProgressBarLinear_C_PB_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetPercent(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetPercent");

	UProgressBarLinear_C_PB_SetPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColor");

	UProgressBarLinear_C_PB_SetFillColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetTargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetPercent");

	UProgressBarLinear_C_PB_SetTargetPercent_Params params;
	params.TargetPercent = TargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetThickness(float* Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetThickness");

	UProgressBarLinear_C_PB_SetThickness_Params params;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseTargetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetUseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseTargetPercent");

	UProgressBarLinear_C_PB_SetUseTargetPercent_Params params;
	params.UseTargetPercent = UseTargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetProgressMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>*  EProgressMethod                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetProgressMethod(TEnumAsByte<EProgressMethod>* EProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetProgressMethod");

	UProgressBarLinear_C_PB_SetProgressMethod_Params params;
	params.EProgressMethod = EProgressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentInterpTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetInterpTimeCurrent(float* CurrentInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeCurrent");

	UProgressBarLinear_C_PB_SetInterpTimeCurrent_Params params;
	params.CurrentInterpTime = CurrentInterpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetInterpTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetInterpTimeTarget(float* TargetInterpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetInterpTimeTarget");

	UProgressBarLinear_C_PB_SetInterpTimeTarget_Params params;
	params.TargetInterpTime = TargetInterpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Positive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetTargetFillColor_Positive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Positive");

	UProgressBarLinear_C_PB_SetTargetFillColor_Positive_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Negative
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetTargetFillColor_Negative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetTargetFillColor_Negative");

	UProgressBarLinear_C_PB_SetTargetFillColor_Negative_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseGradientFillColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseGradientFillColor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetUseGradientFillColor(bool* UseGradientFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetUseGradientFillColor");

	UProgressBarLinear_C_PB_SetUseGradientFillColor_Params params;
	params.UseGradientFillColor = UseGradientFillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetBackgroundColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColor");

	UProgressBarLinear_C_PB_SetBackgroundColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         GradientPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillColorGradientPower(float* GradientPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientPower");

	UProgressBarLinear_C_PB_SetFillColorGradientPower_Params params;
	params.GradientPower = GradientPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillColorBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorBrushTiling");

	UProgressBarLinear_C_PB_SetFillColorBrushTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillColorMask(class UObject** Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorMask");

	UProgressBarLinear_C_PB_SetFillColorMask_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColorMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetBackgroundColorMask(class UTexture2D** Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundColorMask");

	UProgressBarLinear_C_PB_SetBackgroundColorMask_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBrushTiling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetBackgroundBrushTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBrushTiling");

	UProgressBarLinear_C_PB_SetBackgroundBrushTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBlurStrength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BlurStrength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetBackgroundBlurStrength(float* BlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBackgroundBlurStrength");

	UProgressBarLinear_C_PB_SetBackgroundBlurStrength_Params params;
	params.BlurStrength = BlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGradientTypes>*   GradientType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillColorGradientType(TEnumAsByte<EGradientTypes>* GradientType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillColorGradientType");

	UProgressBarLinear_C_PB_SetFillColorGradientType_Params params;
	params.GradientType = GradientType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBlendMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             BlendMask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetBlendMask(class UTexture2D** BlendMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetBlendMask");

	UProgressBarLinear_C_PB_SetBlendMask_Params params;
	params.BlendMask = BlendMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillType");

	UProgressBarLinear_C_PB_SetFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillFromCenterSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetFillFromCenterSpacing(float* Spacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetFillFromCenterSpacing");

	UProgressBarLinear_C_PB_SetFillFromCenterSpacing_Params params;
	params.Spacing = Spacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsCustomMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetIsCustomMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsCustomMarquee");

	UProgressBarLinear_C_PB_SetIsCustomMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetIsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetIsMarquee");

	UProgressBarLinear_C_PB_SetIsMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetCustomMarqueeImage(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeImage");

	UProgressBarLinear_C_PB_SetCustomMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeMaskType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMask>*     MaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetCustomMarqueeMaskType(TEnumAsByte<EMarqueeMask>* MaskType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetCustomMarqueeMaskType");

	UProgressBarLinear_C_PB_SetCustomMarqueeMaskType_Params params;
	params.MaskType = MaskType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetMarqueeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetMarqueeImage(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetMarqueeImage");

	UProgressBarLinear_C_PB_SetMarqueeImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationSteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Steps                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetSeparationSteps(int* Steps)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationSteps");

	UProgressBarLinear_C_PB_SetSeparationSteps_Params params;
	params.Steps = Steps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationStepsSpacing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetSeparationStepsSpacing(float* Spacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationStepsSpacing");

	UProgressBarLinear_C_PB_SetSeparationStepsSpacing_Params params;
	params.Spacing = Spacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationAbsoluteFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AbsoluteFillMethod             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetSeparationAbsoluteFill(bool* AbsoluteFillMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetSeparationAbsoluteFill");

	UProgressBarLinear_C_PB_SetSeparationAbsoluteFill_Params params;
	params.AbsoluteFillMethod = AbsoluteFillMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffects
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Effects>*     Effects                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UProgressBarLinear_C::PB_SetEffects(TArray<struct FS_Effects>* Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffects");

	UProgressBarLinear_C_PB_SetEffects_Params params;
	params.Effects = Effects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffectEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetEffectEnabled(int* Index, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetEffectEnabled");

	UProgressBarLinear_C_PB_SetEffectEnabled_Params params;
	params.Index = Index;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_SetAllEffectsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_SetAllEffectsEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_SetAllEffectsEnabled");

	UProgressBarLinear_C_PB_SetAllEffectsEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PB_RemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PB_RemoveEffect(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PB_RemoveEffect");

	UProgressBarLinear_C_PB_RemoveEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::UpdatePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdatePercent");

	UProgressBarLinear_C_UpdatePercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateInterpolation
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::UpdateInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdateInterpolation");

	UProgressBarLinear_C_UpdateInterpolation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GradientPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetFillColor(struct FLinearColor* Color, float* GradientPower, TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetFillColor");

	UProgressBarLinear_C_SetFillColor_Params params;
	params.Color = Color;
	params.GradientPower = GradientPower;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetSize");

	UProgressBarLinear_C_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseGradient                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetUseGradient(bool* UseGradient)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetUseGradient");

	UProgressBarLinear_C_SetUseGradient_Params params;
	params.UseGradient = UseGradient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetTargetPercent(bool* UseTargetPercent, float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetTargetPercent");

	UProgressBarLinear_C_SetTargetPercent_Params params;
	params.UseTargetPercent = UseTargetPercent;
	params.TargetPercent = TargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorPositive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetTargetFillColorPositive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorPositive");

	UProgressBarLinear_C_SetTargetFillColorPositive_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetTargetFillColorNegative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetTargetFillColorNegative");

	UProgressBarLinear_C_SetTargetFillColorNegative_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             BackgroundColorMask            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* In_Brush_Tiling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBackgroundColor(class UTexture2D** BackgroundColorMask, TEnumAsByte<ESlateBrushTileType>* In_Brush_Tiling, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColor");

	UProgressBarLinear_C_SetBackgroundColor_Params params;
	params.BackgroundColorMask = BackgroundColorMask;
	params.In_Brush_Tiling = In_Brush_Tiling;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>*  ProgressMethod                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetProgressMethod(TEnumAsByte<EProgressMethod>* ProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetProgressMethod");

	UProgressBarLinear_C_SetProgressMethod_Params params;
	params.ProgressMethod = ProgressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetPercentInterpolated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetPercentInterpolated(float* NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetPercentInterpolated");

	UProgressBarLinear_C_SetPercentInterpolated_Params params;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetFillColorMask(class UObject** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetFillColorMask");

	UProgressBarLinear_C_SetFillColorMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGradientTypes>*   GradientType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetGradientMask(TEnumAsByte<EGradientTypes>* GradientType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetGradientMask");

	UProgressBarLinear_C_SetGradientMask_Params params;
	params.GradientType = GradientType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* In_Brush_Tiling                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBackgroundColorMask(class UTexture2D** Brush, TEnumAsByte<ESlateBrushTileType>* In_Brush_Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundColorMask");

	UProgressBarLinear_C_SetBackgroundColorMask_Params params;
	params.Brush = Brush;
	params.In_Brush_Tiling = In_Brush_Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetOverallBlendMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             BlendMask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetOverallBlendMask(class UTexture2D** BlendMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetOverallBlendMask");

	UProgressBarLinear_C_SetOverallBlendMask_Params params;
	params.BlendMask = BlendMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsMarquee                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarqueeMethod>*   MarqueeMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::UpdateCustomMarquee(bool* bIsMarquee, TEnumAsByte<EMarqueeMethod>* MarqueeMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarquee");

	UProgressBarLinear_C_UpdateCustomMarquee_Params params;
	params.bIsMarquee = bIsMarquee;
	params.MarqueeMethod = MarqueeMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::UpdateCustomMarqueeSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeSpeed");

	UProgressBarLinear_C_UpdateCustomMarqueeSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMask>*     MaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Mask                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* MaskTiling                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::UpdateCustomMarqueeMask(TEnumAsByte<EMarqueeMask>* MaskType, class UTexture2D** Mask, TEnumAsByte<ESlateBrushTileType>* MaskTiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeMask");

	UProgressBarLinear_C_UpdateCustomMarqueeMask_Params params;
	params.MaskType = MaskType;
	params.Mask = Mask;
	params.MaskTiling = MaskTiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_IsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_IsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_IsMarquee");

	UProgressBarLinear_C_SetDefaultMarquee_IsMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_Image(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Image");

	UProgressBarLinear_C_SetDefaultMarquee_Image_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_ImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_ImageSize(struct FVector2D* Image_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_ImageSize");

	UProgressBarLinear_C_SetDefaultMarquee_ImageSize_Params params;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_Tint(struct FLinearColor* Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tint");

	UProgressBarLinear_C_SetDefaultMarquee_Tint_Params params;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_DrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_DrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_DrawAs");

	UProgressBarLinear_C_SetDefaultMarquee_DrawAs_Params params;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetDefaultMarquee_Tiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetDefaultMarquee_Tiling");

	UProgressBarLinear_C_SetDefaultMarquee_Tiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::UpdateCustomMarqueeColor(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.UpdateCustomMarqueeColor");

	UProgressBarLinear_C_UpdateCustomMarqueeColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddSegments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumSegments                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Separation_AddSegments(int* NumSegments, float* Spacing, struct FVector2D* Size, struct FLinearColor* FillColor, TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddSegments");

	UProgressBarLinear_C_Separation_AddSegments_Params params;
	params.NumSegments = NumSegments;
	params.Spacing = Spacing;
	params.Size = Size;
	params.FillColor = FillColor;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Separation_AddBackground(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Separation_AddBackground");

	UProgressBarLinear_C_Separation_AddBackground_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Separation_SetUseAbsoluteFillValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAbsoluteFill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Separation_SetUseAbsoluteFillValue(bool* bAbsoluteFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Separation_SetUseAbsoluteFillValue");

	UProgressBarLinear_C_Separation_SetUseAbsoluteFillValue_Params params;
	params.bAbsoluteFill = bAbsoluteFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBarFillType");

	UProgressBarLinear_C_SetBarFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetCurrentCustomMarqueePercent
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::SetCurrentCustomMarqueePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetCurrentCustomMarqueePercent");

	UProgressBarLinear_C_SetCurrentCustomMarqueePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.CreateEffects
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::CreateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.CreateEffects");

	UProgressBarLinear_C_CreateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.AddEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Effects*             Effect                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UProgressBarLinear_C::AddEffect(struct FS_Effects* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.AddEffect");

	UProgressBarLinear_C_AddEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Reset");

	UProgressBarLinear_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseBackgroundBlur              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BackgroundBlurStrength         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::SetBackgroundBlur(bool* UseBackgroundBlur, float* BackgroundBlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.SetBackgroundBlur");

	UProgressBarLinear_C_SetBackgroundBlur_Params params;
	params.UseBackgroundBlur = UseBackgroundBlur;
	params.BackgroundBlurStrength = BackgroundBlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Tick");

	UProgressBarLinear_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.AddEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::AddEntry(float* NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.AddEntry");

	UProgressBarLinear_C_AddEntry_Params params;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.InitNextEntry
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::InitNextEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.InitNextEntry");

	UProgressBarLinear_C_InitNextEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentEntry                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::ExecuteEntry(float* CurrentEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.ExecuteEntry");

	UProgressBarLinear_C_ExecuteEntry_Params params;
	params.CurrentEntry = CurrentEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::Reconstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Reconstruct");

	UProgressBarLinear_C_Reconstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressBarLinear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.Construct");

	UProgressBarLinear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.PreConstruct");

	UProgressBarLinear_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::StopTriggerProgressChangeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.StopTriggerProgressChangeColor");

	UProgressBarLinear_C_StopTriggerProgressChangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::StartTriggerProgressChangeColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.StartTriggerProgressChangeColor");

	UProgressBarLinear_C_StartTriggerProgressChangeColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.HandlePausedQueue
// (BlueprintCallable, BlueprintEvent)

void UProgressBarLinear_C::HandlePausedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.HandlePausedQueue");

	UProgressBarLinear_C_HandlePausedQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.ExecuteUbergraph_ProgressBarLinear
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::ExecuteUbergraph_ProgressBarLinear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.ExecuteUbergraph_ProgressBarLinear");

	UProgressBarLinear_C_ExecuteUbergraph_ProgressBarLinear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressBarLinear.ProgressBarLinear_C.OnPercentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressBarLinear_C::OnPercentChanged__DelegateSignature(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProgressBarLinear.ProgressBarLinear_C.OnPercentChanged__DelegateSignature");

	UProgressBarLinear_C_OnPercentChanged__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

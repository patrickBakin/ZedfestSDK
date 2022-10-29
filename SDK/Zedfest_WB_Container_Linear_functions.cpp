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

// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_OnTopMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Mirror                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Set_Mirror_OV_OnTopMarquee(bool* Mirror)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_OnTopMarquee");

	UWB_Container_Linear_C_Set_Mirror_OV_OnTopMarquee_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_TargetPB_Marquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Mirror                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Set_Mirror_OV_TargetPB_Marquee(bool* Mirror)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_TargetPB_Marquee");

	UWB_Container_Linear_C_Set_Mirror_OV_TargetPB_Marquee_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_BasePB_Marquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Mirror                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Set_Mirror_OV_BasePB_Marquee(bool* Mirror)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Set_Mirror_OV_BasePB_Marquee");

	UWB_Container_Linear_C_Set_Mirror_OV_BasePB_Marquee_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Handle_SetUseSeparation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bUseSeparation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Handle_SetUseSeparation(bool* bUseSeparation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Handle_SetUseSeparation");

	UWB_Container_Linear_C_Handle_SetUseSeparation_Params params;
	params.bUseSeparation = bUseSeparation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_DefaultMarquee_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Set_DefaultMarquee_Visibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Set_DefaultMarquee_Visibility");

	UWB_Container_Linear_C_Set_DefaultMarquee_Visibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Set_MarqueeMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMask>*     MaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             CustomMask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Set_MarqueeMask(TEnumAsByte<EMarqueeMask>* MaskType, class UTexture2D** CustomMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Set_MarqueeMask");

	UWB_Container_Linear_C_Set_MarqueeMask_Params params;
	params.MaskType = MaskType;
	params.CustomMask = CustomMask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Hide_AllMarquees
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::Hide_AllMarquees()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Hide_AllMarquees");

	UWB_Container_Linear_C_Hide_AllMarquees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Interp_BasePB_Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsChanging                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Interp_BasePB_Color(struct FLinearColor* Target, float* InterpSpeed, bool* bIsChanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Interp_BasePB_Color");

	UWB_Container_Linear_C_Interp_BasePB_Color_Params params;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;
	params.bIsChanging = bIsChanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorY_OV_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MirrorY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetMirrorY_OV_Target(bool* MirrorY)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorY_OV_Target");

	UWB_Container_Linear_C_SetMirrorY_OV_Target_Params params;
	params.MirrorY = MirrorY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorX_OV_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MirrorX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetMirrorX_OV_Target(bool* MirrorX)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetMirrorX_OV_Target");

	UWB_Container_Linear_C_SetMirrorX_OV_Target_Params params;
	params.MirrorX = MirrorX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Current_Size_Y                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::GetSizeY(float* Current_Size_Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetSizeY");

	UWB_Container_Linear_C_GetSizeY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Size_Y != nullptr)
		*Current_Size_Y = params.Current_Size_Y;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent_Separated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::GetPercent_Separated(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetPercent_Separated");

	UWB_Container_Linear_C_GetPercent_Separated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetAbsoluteTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Container_Linear_C::GetAbsoluteTargetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetAbsoluteTargetPercent");

	UWB_Container_Linear_C_GetAbsoluteTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.FindHighestPercentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Container_Linear_C::FindHighestPercentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.FindHighestPercentValue");

	UWB_Container_Linear_C_FindHighestPercentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.IsMarqueeMethod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMarqueeMethod>*   Method                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Container_Linear_C::IsMarqueeMethod(TEnumAsByte<EMarqueeMethod>* Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.IsMarqueeMethod");

	UWB_Container_Linear_C_IsMarqueeMethod_Params params;
	params.Method = Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.FindMarquee
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWB_Marquee_Linear_C*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWB_Marquee_Linear_C* UWB_Container_Linear_C::FindMarquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.FindMarquee");

	UWB_Container_Linear_C_FindMarquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateStaticPercent
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::UpdateStaticPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.UpdateStaticPercent");

	UWB_Container_Linear_C_UpdateStaticPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodStatic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Container_Linear_C::IsProgressMethodStatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodStatic");

	UWB_Container_Linear_C_IsProgressMethodStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodInterpolate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Container_Linear_C::IsProgressMethodInterpolate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.IsProgressMethodInterpolate");

	UWB_Container_Linear_C_IsProgressMethodInterpolate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetTargetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::GetTargetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetTargetPercent");

	UWB_Container_Linear_C_GetTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetPercentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWB_Container_Linear_C::FindTargetPercentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.FindTargetPercentValue");

	UWB_Container_Linear_C_FindTargetPercentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetFillColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWB_Container_Linear_C::FindTargetFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.FindTargetFillColor");

	UWB_Container_Linear_C_FindTargetFillColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.IsNegativeFillValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWB_Container_Linear_C::IsNegativeFillValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.IsNegativeFillValue");

	UWB_Container_Linear_C_IsNegativeFillValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetSizeX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Current_Size_X                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::GetSizeX(float* Current_Size_X)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetSizeX");

	UWB_Container_Linear_C_GetSizeX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Size_X != nullptr)
		*Current_Size_X = params.Current_Size_X;
}


// Function WB_Container_Linear.WB_Container_Linear_C.FindTargetProgressBarPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::FindTargetProgressBarPosition(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.FindTargetProgressBarPosition");

	UWB_Container_Linear_C_FindTargetProgressBarPosition_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.GetPercent");

	UWB_Container_Linear_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetPercent");

	UWB_Container_Linear_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GradientPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetFillColor(struct FLinearColor* InColor, float* GradientPower, TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetFillColor");

	UWB_Container_Linear_C_SetFillColor_Params params;
	params.InColor = InColor;
	params.GradientPower = GradientPower;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetSize");

	UWB_Container_Linear_C_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseGradient                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetUseGradient(bool* UseGradient)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetUseGradient");

	UWB_Container_Linear_C_SetUseGradient_Params params;
	params.UseGradient = UseGradient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetTargetPercent(float* TargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetTargetPercent");

	UWB_Container_Linear_C_SetTargetPercent_Params params;
	params.TargetPercent = TargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorPositive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetTargetFillColorPositive(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorPositive");

	UWB_Container_Linear_C_SetTargetFillColorPositive_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorNegative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetTargetFillColorNegative(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetTargetFillColorNegative");

	UWB_Container_Linear_C_SetTargetFillColorNegative_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetUseTargetPercent(bool* UseTargetPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetUseTargetPercent");

	UWB_Container_Linear_C_SetUseTargetPercent_Params params;
	params.UseTargetPercent = UseTargetPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateTargetPercent
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::UpdateTargetPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.UpdateTargetPercent");

	UWB_Container_Linear_C_UpdateTargetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::UpdatePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.UpdatePercent");

	UWB_Container_Linear_C_UpdatePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressMethod>*  ProgressMethod                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetProgressMethod(TEnumAsByte<EProgressMethod>* ProgressMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetProgressMethod");

	UWB_Container_Linear_C_SetProgressMethod_Params params;
	params.ProgressMethod = ProgressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetFillColorMask(class UObject** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetFillColorMask");

	UWB_Container_Linear_C_SetFillColorMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             GradientTexture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetGradientMask(class UTexture2D** GradientTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetGradientMask");

	UWB_Container_Linear_C_SetGradientMask_Params params;
	params.GradientTexture = GradientTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsMarquee                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarqueeMethod>*   MarqueeMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetCustomMarqueeAppearance(bool* bIsMarquee, TEnumAsByte<EMarqueeMethod>* MarqueeMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeAppearance");

	UWB_Container_Linear_C_SetCustomMarqueeAppearance_Params params;
	params.bIsMarquee = bIsMarquee;
	params.MarqueeMethod = MarqueeMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetCustomMarqueeSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeSpeed");

	UWB_Container_Linear_C_SetCustomMarqueeSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMask>*     MaskType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             CustomMask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* MaskTiling                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetCustomMarqueeMask(TEnumAsByte<EMarqueeMask>* MaskType, class UTexture2D** CustomMask, TEnumAsByte<ESlateBrushTileType>* MaskTiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeMask");

	UWB_Container_Linear_C_SetCustomMarqueeMask_Params params;
	params.MaskType = MaskType;
	params.CustomMask = CustomMask;
	params.MaskTiling = MaskTiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Current
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::SetCustomMarqueePercent_Current()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Current");

	UWB_Container_Linear_C_SetCustomMarqueePercent_Current_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetCustomMarqueePercent_Target(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_Target");

	UWB_Container_Linear_C_SetCustomMarqueePercent_Target_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_CurrentAndTarget
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::SetCustomMarqueePercent_CurrentAndTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueePercent_CurrentAndTarget");

	UWB_Container_Linear_C_SetCustomMarqueePercent_CurrentAndTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_IsMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMarquee                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_IsMarquee(bool* IsMarquee)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_IsMarquee");

	UWB_Container_Linear_C_SetDefaultMarquee_IsMarquee_Params params;
	params.IsMarquee = IsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_Image(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Image");

	UWB_Container_Linear_C_SetDefaultMarquee_Image_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_ImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Image_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_ImageSize(struct FVector2D* Image_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_ImageSize");

	UWB_Container_Linear_C_SetDefaultMarquee_ImageSize_Params params;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_Tint(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tint");

	UWB_Container_Linear_C_SetDefaultMarquee_Tint_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_DrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushDrawType>* Draw_As                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_DrawAs(TEnumAsByte<ESlateBrushDrawType>* Draw_As)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_DrawAs");

	UWB_Container_Linear_C_SetDefaultMarquee_DrawAs_Params params;
	params.Draw_As = Draw_As;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetDefaultMarquee_Tiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetDefaultMarquee_Tiling");

	UWB_Container_Linear_C_SetDefaultMarquee_Tiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetCustomMarqueeColor(struct FLinearColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetCustomMarqueeColor");

	UWB_Container_Linear_C_SetCustomMarqueeColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseSeparation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bUseSeparation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetUseSeparation(bool* bUseSeparation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetUseSeparation");

	UWB_Container_Linear_C_SetUseSeparation_Params params;
	params.bUseSeparation = bUseSeparation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.AddSegments
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumSegments                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Spacing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsFillFromCenter              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::AddSegments(int* NumSegments, float* Spacing, struct FVector2D* Size, struct FLinearColor* FillColor, TEnumAsByte<EProgressBarFillType>* FillType, bool* bIsFillFromCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.AddSegments");

	UWB_Container_Linear_C_AddSegments_Params params;
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


// Function WB_Container_Linear.WB_Container_Linear_C.AddBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUseBackgroundBlur             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlurStrength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::AddBackground(struct FLinearColor* Color, bool* bUseBackgroundBlur, float* BlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.AddBackground");

	UWB_Container_Linear_C_AddBackground_Params params;
	params.Color = Color;
	params.bUseBackgroundBlur = bUseBackgroundBlur;
	params.BlurStrength = BlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateSeparationPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::UpdateSeparationPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.UpdateSeparationPercent");

	UWB_Container_Linear_C_UpdateSeparationPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetUseAbsoluteFillMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAbsoluteFill                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetUseAbsoluteFillMethod(bool* bAbsoluteFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetUseAbsoluteFillMethod");

	UWB_Container_Linear_C_SetUseAbsoluteFillMethod_Params params;
	params.bAbsoluteFill = bAbsoluteFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.SetBarFillType");

	UWB_Container_Linear_C_SetBarFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.UpdateMarqueeFillType
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::UpdateMarqueeFillType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.UpdateMarqueeFillType");

	UWB_Container_Linear_C_UpdateMarqueeFillType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           ProgressChangeColor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::StartTriggerProgressChangeColor(struct FLinearColor* ProgressChangeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.StartTriggerProgressChangeColor");

	UWB_Container_Linear_C_StartTriggerProgressChangeColor_Params params;
	params.ProgressChangeColor = ProgressChangeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)

void UWB_Container_Linear_C::StopTriggerProgressChangeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.StopTriggerProgressChangeColor");

	UWB_Container_Linear_C_StopTriggerProgressChangeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.Tick");

	UWB_Container_Linear_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.PreConstruct");

	UWB_Container_Linear_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Container_Linear.WB_Container_Linear_C.ExecuteUbergraph_WB_Container_Linear
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Container_Linear_C::ExecuteUbergraph_WB_Container_Linear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Container_Linear.WB_Container_Linear_C.ExecuteUbergraph_WB_Container_Linear");

	UWB_Container_Linear_C_ExecuteUbergraph_WB_Container_Linear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

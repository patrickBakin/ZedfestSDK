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

// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.FindFillSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWB_PB_Linear_Base_C::FindFillSize(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.FindFillSize");

	UWB_PB_Linear_Base_C_FindFillSize_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignRetainerGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::Rotate_DesignRetainerGradient(float* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignRetainerGradient");

	UWB_PB_Linear_Base_C_Rotate_DesignRetainerGradient_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::Rotate_DesignTimeGradient(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Rotate_DesignTimeGradient");

	UWB_PB_Linear_Base_C_Rotate_DesignTimeGradient_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Mirror_DesignTimeGradient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Mirror                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::Mirror_DesignTimeGradient(bool* Mirror)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Mirror_DesignTimeGradient");

	UWB_PB_Linear_Base_C_Mirror_DesignTimeGradient_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.GetPercent");

	UWB_PB_Linear_Base_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetPercent");

	UWB_PB_Linear_Base_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GradientPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetFillColor(struct FLinearColor* InColor, float* GradientPower, TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColor");

	UWB_PB_Linear_Base_C_SetFillColor_Params params;
	params.InColor = InColor;
	params.GradientPower = GradientPower;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetSize");

	UWB_PB_Linear_Base_C_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetGradientPercent(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientPercent");

	UWB_PB_Linear_Base_C_SetGradientPercent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseGradient                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetUseGradient(bool* UseGradient)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetUseGradient");

	UWB_PB_Linear_Base_C_SetUseGradient_Params params;
	params.UseGradient = UseGradient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetFillColorMask(class UObject** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetFillColorMask");

	UWB_PB_Linear_Base_C_SetFillColorMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             GradientTexture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetGradientMask(class UTexture2D** GradientTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetGradientMask");

	UWB_PB_Linear_Base_C_SetGradientMask_Params params;
	params.GradientTexture = GradientTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.UpdateProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsChanging                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::UpdateProgressChangeColor(struct FLinearColor* NewColor, float* InterpSpeed, bool* IsChanging)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.UpdateProgressChangeColor");

	UWB_PB_Linear_Base_C_UpdateProgressChangeColor_Params params;
	params.NewColor = NewColor;
	params.InterpSpeed = InterpSpeed;
	params.IsChanging = IsChanging;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* FillType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* FillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.SetBarFillType");

	UWB_PB_Linear_Base_C_SetBarFillType_Params params;
	params.FillType = FillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.PreConstruct");

	UWB_PB_Linear_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)

void UWB_PB_Linear_Base_C::Reconstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Reconstruct");

	UWB_PB_Linear_Base_C_Reconstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_PB_Linear_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.Construct");

	UWB_PB_Linear_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.ExecuteUbergraph_WB_PB_Linear_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Base_C::ExecuteUbergraph_WB_PB_Linear_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Base.WB_PB_Linear_Base_C.ExecuteUbergraph_WB_PB_Linear_Base");

	UWB_PB_Linear_Base_C_ExecuteUbergraph_WB_PB_Linear_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

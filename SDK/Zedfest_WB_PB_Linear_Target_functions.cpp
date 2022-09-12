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

// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.GetPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Target_C::GetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.GetPercent");

	UWB_PB_Linear_Target_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Target_C::SetFillColor(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetFillColor");

	UWB_PB_Linear_Target_C_SetFillColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EProgressBarFillType>* BarFillType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Target_C::SetBarFillType(TEnumAsByte<EProgressBarFillType>* BarFillType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetBarFillType");

	UWB_PB_Linear_Target_C_SetBarFillType_Params params;
	params.BarFillType = BarFillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Target_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetPercent");

	UWB_PB_Linear_Target_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetDefaultValues
// (BlueprintCallable, BlueprintEvent)

void UWB_PB_Linear_Target_C::SetDefaultValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetDefaultValues");

	UWB_PB_Linear_Target_C_SetDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.ExecuteUbergraph_WB_PB_Linear_Target
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_PB_Linear_Target_C::ExecuteUbergraph_WB_PB_Linear_Target(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.ExecuteUbergraph_WB_PB_Linear_Target");

	UWB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

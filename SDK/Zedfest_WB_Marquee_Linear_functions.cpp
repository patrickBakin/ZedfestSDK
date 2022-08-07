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

// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetMarqueeSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSize");

	UWB_Marquee_Linear_C_SetMarqueeSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetMarqueeMask(class UTexture2D** Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMask");

	UWB_Marquee_Linear_C_SetMarqueeMask_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateBrushTileType>* Tiling                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetMarqueeTiling(TEnumAsByte<ESlateBrushTileType>* Tiling)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeTiling");

	UWB_Marquee_Linear_C_SetMarqueeTiling_Params params;
	params.Tiling = Tiling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetMarqueeSpeed(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeSpeed");

	UWB_Marquee_Linear_C_SetMarqueeSpeed_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetPercent");

	UWB_Marquee_Linear_C_SetPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarqueeMethod>*   MarqueeMethod                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::SetMarqueeMethod(TEnumAsByte<EMarqueeMethod>* MarqueeMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.SetMarqueeMethod");

	UWB_Marquee_Linear_C_SetMarqueeMethod_Params params;
	params.MarqueeMethod = MarqueeMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Marquee_Linear.WB_Marquee_Linear_C.ExecuteUbergraph_WB_Marquee_Linear
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Marquee_Linear_C::ExecuteUbergraph_WB_Marquee_Linear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Marquee_Linear.WB_Marquee_Linear_C.ExecuteUbergraph_WB_Marquee_Linear");

	UWB_Marquee_Linear_C_ExecuteUbergraph_WB_Marquee_Linear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

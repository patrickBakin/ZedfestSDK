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

// Function WB_Image_Raw.WB_Image_Raw_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Image_Raw_C::SetColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image_Raw.WB_Image_Raw_C.SetColor");

	UWB_Image_Raw_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Image_Raw.WB_Image_Raw_C.SetBackgroundBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlurStrength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Image_Raw_C::SetBackgroundBlur(bool* IsEnabled, float* BlurStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image_Raw.WB_Image_Raw_C.SetBackgroundBlur");

	UWB_Image_Raw_C_SetBackgroundBlur_Params params;
	params.IsEnabled = IsEnabled;
	params.BlurStrength = BlurStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_Image_Raw.WB_Image_Raw_C.ExecuteUbergraph_WB_Image_Raw
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_Image_Raw_C::ExecuteUbergraph_WB_Image_Raw(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_Image_Raw.WB_Image_Raw_C.ExecuteUbergraph_WB_Image_Raw");

	UWB_Image_Raw_C_ExecuteUbergraph_WB_Image_Raw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

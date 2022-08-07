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

// Function WB_CrosshairBase.WB_CrosshairBase_C.AddCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CrosshairTypes>* CrosshairType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::AddCrosshair(TEnumAsByte<E_CrosshairTypes>* CrosshairType, TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.AddCrosshair");

	UWB_CrosshairBase_C_AddCrosshair_Params params;
	params.CrosshairType = CrosshairType;
	params.HitIndicatorType = HitIndicatorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         IndicationTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::CrosshairHit(float* IndicationTime, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairHit");

	UWB_CrosshairBase_C_CrosshairHit_Params params;
	params.IndicationTime = IndicationTime;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.UpdateCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCrosshairVisible              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitIndicatorVisible           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Crosshair_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::UpdateCrosshair(bool* bCrosshairVisible, bool* bHitIndicatorVisible, struct FLinearColor* Crosshair_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.UpdateCrosshair");

	UWB_CrosshairBase_C_UpdateCrosshair_Params params;
	params.bCrosshairVisible = bCrosshairVisible;
	params.bHitIndicatorVisible = bHitIndicatorVisible;
	params.Crosshair_Color = Crosshair_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CrosshairTypes>* CrosshairType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCrosshairVisible              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Crosshair_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitIndicatorVisible           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* CrosshairType, bool* bCrosshairVisible, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType, bool* bHitIndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayCrosshair");

	UWB_CrosshairBase_C_DisplayCrosshair_Params params;
	params.CrosshairType = CrosshairType;
	params.bCrosshairVisible = bCrosshairVisible;
	params.Crosshair_Color = Crosshair_Color;
	params.HitIndicatorType = HitIndicatorType;
	params.bHitIndicatorVisible = bHitIndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayHitIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         IndicationTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::DisplayHitIndicator(float* IndicationTime, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayHitIndicator");

	UWB_CrosshairBase_C_DisplayHitIndicator_Params params;
	params.IndicationTime = IndicationTime;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayRecoil
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bRecoil                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::DisplayRecoil(bool* bRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayRecoil");

	UWB_CrosshairBase_C_DisplayRecoil_Params params;
	params.bRecoil = bRecoil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplaySingleRecoil
// (BlueprintCallable, BlueprintEvent)

void UWB_CrosshairBase_C::DisplaySingleRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.DisplaySingleRecoil");

	UWB_CrosshairBase_C_DisplaySingleRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::CrosshairVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.CrosshairVisibility");

	UWB_CrosshairBase_C_CrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.ExecuteUbergraph_WB_CrosshairBase
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_CrosshairBase_C::ExecuteUbergraph_WB_CrosshairBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.ExecuteUbergraph_WB_CrosshairBase");

	UWB_CrosshairBase_C_ExecuteUbergraph_WB_CrosshairBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.SingleRecoil__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairBase_C::SingleRecoil__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.SingleRecoil__DelegateSignature");

	UWB_CrosshairBase_C_SingleRecoil__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayingRecoil__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairBase_C::DisplayingRecoil__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.DisplayingRecoil__DelegateSignature");

	UWB_CrosshairBase_C_DisplayingRecoil__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.RemoveHitIndication__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairBase_C::RemoveHitIndication__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.RemoveHitIndication__DelegateSignature");

	UWB_CrosshairBase_C_RemoveHitIndication__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_CrosshairBase.WB_CrosshairBase_C.HitIndication__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWB_CrosshairBase_C::HitIndication__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_CrosshairBase.WB_CrosshairBase_C.HitIndication__DelegateSignature");

	UWB_CrosshairBase_C_HitIndication__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

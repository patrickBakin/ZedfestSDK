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

// Function WB_ProHUD.WB_ProHUD_C.RemoveObjectiveNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ProHUD_C::RemoveObjectiveNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.RemoveObjectiveNotification");

	UWB_ProHUD_C_RemoveObjectiveNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayObjectiveNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TypeText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow3Line                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow4                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow5                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow6                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow7                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::DisplayObjectiveNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3Line, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayObjectiveNotification");

	UWB_ProHUD_C_DisplayObjectiveNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.TypeText = TypeText;
	params.HeadlineText = HeadlineText;
	params.TextRow3Line = TextRow3Line;
	params.TextRow4 = TextRow4;
	params.TextRow5 = TextRow5;
	params.TextRow6 = TextRow6;
	params.TextRow7 = TextRow7;
	params.BackgroundColor = BackgroundColor;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.RemoveIngameText
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ProHUD_C::RemoveIngameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.RemoveIngameText");

	UWB_ProHUD_C_RemoveIngameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayIngameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_ProHUD_C::DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayIngameText");

	UWB_ProHUD_C_DisplayIngameText_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::CrosshairVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.CrosshairVisibility");

	UWB_ProHUD_C_CrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ProHUD_C::RemoveGlobalNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.RemoveGlobalNotification");

	UWB_ProHUD_C_RemoveGlobalNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TypeText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow3Line                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow4                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow5                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow6                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow7                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3Line, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayGlobalNotification");

	UWB_ProHUD_C_DisplayGlobalNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.TypeText = TypeText;
	params.HeadlineText = HeadlineText;
	params.TextRow3Line = TextRow3Line;
	params.TextRow4 = TextRow4;
	params.TextRow5 = TextRow5;
	params.TextRow6 = TextRow6;
	params.TextRow7 = TextRow7;
	params.BackgroundColor = BackgroundColor;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ProHUD_C::DisplaySingleRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplaySingleRecoil");

	UWB_ProHUD_C_DisplaySingleRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bRecoil                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::DisplayRecoil(bool* bRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayRecoil");

	UWB_ProHUD_C_DisplayRecoil_Params params;
	params.bRecoil = bRecoil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.RemoveIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_ProHUD_C::RemoveIngameTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.RemoveIngameTutorial");

	UWB_ProHUD_C_RemoveIngameTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         IndicationTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::DisplayHitIndicator(float* IndicationTime, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayHitIndicator");

	UWB_ProHUD_C_DisplayHitIndicator_Params params;
	params.IndicationTime = IndicationTime;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CrosshairTypes>* CrosshairType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCrosshairVisible              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Crosshair_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHitIndicatorVisible           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* CrosshairType, bool* bCrosshairVisible, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicatorType, bool* bHitIndicatorVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayCrosshair");

	UWB_ProHUD_C_DisplayCrosshair_Params params;
	params.CrosshairType = CrosshairType;
	params.bCrosshairVisible = bCrosshairVisible;
	params.Crosshair_Color = Crosshair_Color;
	params.HitIndicatorType = HitIndicatorType;
	params.bHitIndicatorVisible = bHitIndicatorVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_ProHUD_C::DisplayIngameTutorial(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.DisplayIngameTutorial");

	UWB_ProHUD_C_DisplayIngameTutorial_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.HideCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::HideCrosshair(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.HideCrosshair");

	UWB_ProHUD_C_HideCrosshair_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_ProHUD.WB_ProHUD_C.ExecuteUbergraph_WB_ProHUD
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_ProHUD_C::ExecuteUbergraph_WB_ProHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_ProHUD.WB_ProHUD_C.ExecuteUbergraph_WB_ProHUD");

	UWB_ProHUD_C_ExecuteUbergraph_WB_ProHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

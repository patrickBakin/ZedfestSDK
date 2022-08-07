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

// Function W_CXP_HUD.W_CXP_HUD_C.GetScroller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              Scroller                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UW_CXP_HUD_C::GetScroller(class UScrollBox** Scroller)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetScroller");

	UW_CXP_HUD_C_GetScroller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scroller != nullptr)
		*Scroller = params.Scroller;
}


// Function W_CXP_HUD.W_CXP_HUD_C.PrestigeLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::PrestigeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.PrestigeLevel");

	UW_CXP_HUD_C_PrestigeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetSteamAvatar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UW_CXP_HUD_C::GetSteamAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetSteamAvatar");

	UW_CXP_HUD_C_GetSteamAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.ClassName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::ClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.ClassName");

	UW_CXP_HUD_C_ClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetXPBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UW_CXP_HUD_C::GetXPBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetXPBar");

	UW_CXP_HUD_C_GetXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetHexagonCurrency
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetHexagonCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetHexagonCurrency");

	UW_CXP_HUD_C_GetHexagonCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetEuroCurrency
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetEuroCurrency()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetEuroCurrency");

	UW_CXP_HUD_C_GetEuroCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetPlayerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetPlayerName");

	UW_CXP_HUD_C_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetText_4
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetText_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetText_4");

	UW_CXP_HUD_C_GetText_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetText_3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetText_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetText_3");

	UW_CXP_HUD_C_GetText_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetText_2");

	UW_CXP_HUD_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_HUD_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.GetText_1");

	UW_CXP_HUD_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_HUD.W_CXP_HUD_C.UpdateSkillWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HarvestingBar                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponBar                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AgilityBar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_HUD_C::UpdateSkillWidget(float* HarvestingBar, float* WeaponBar, float* AgilityBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.UpdateSkillWidget");

	UW_CXP_HUD_C_UpdateSkillWidget_Params params;
	params.HarvestingBar = HarvestingBar;
	params.WeaponBar = WeaponBar;
	params.AgilityBar = AgilityBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_HUD.W_CXP_HUD_C.SetXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NextLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentXP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NeededXP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPBar                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_HUD_C::SetXP(int* CurrentLevel, int* NextLevel, float* CurrentXP, float* NeededXP, float* XPBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.SetXP");

	UW_CXP_HUD_C_SetXP_Params params;
	params.CurrentLevel = CurrentLevel;
	params.NextLevel = NextLevel;
	params.CurrentXP = CurrentXP;
	params.NeededXP = NeededXP;
	params.XPBar = XPBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_HUD.W_CXP_HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_CXP_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.Construct");

	UW_CXP_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_HUD.W_CXP_HUD_C.ExecuteUbergraph_W_CXP_HUD
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_HUD_C::ExecuteUbergraph_W_CXP_HUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_HUD.W_CXP_HUD_C.ExecuteUbergraph_W_CXP_HUD");

	UW_CXP_HUD_C_ExecuteUbergraph_W_CXP_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

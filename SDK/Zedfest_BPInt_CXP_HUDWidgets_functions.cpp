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

// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.UpdateSkillWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HarvestingBar                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponBar                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AgilityBar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInt_CXP_HUDWidgets_C::UpdateSkillWidget(float* HarvestingBar, float* WeaponBar, float* AgilityBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.UpdateSkillWidget");

	UBPInt_CXP_HUDWidgets_C_UpdateSkillWidget_Params params;
	params.HarvestingBar = HarvestingBar;
	params.WeaponBar = WeaponBar;
	params.AgilityBar = AgilityBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.GetScroller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              Scroller                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPInt_CXP_HUDWidgets_C::GetScroller(class UScrollBox** Scroller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.GetScroller");

	UBPInt_CXP_HUDWidgets_C_GetScroller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scroller != nullptr)
		*Scroller = params.Scroller;
}


// Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.SetXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NextLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentXP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NeededXP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPBar                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPInt_CXP_HUDWidgets_C::SetXP(int* CurrentLevel, int* NextLevel, float* CurrentXP, float* NeededXP, float* XPBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPInt_CXP_HUDWidgets.BPInt_CXP_HUDWidgets_C.SetXP");

	UBPInt_CXP_HUDWidgets_C_SetXP_Params params;
	params.CurrentLevel = CurrentLevel;
	params.NextLevel = NextLevel;
	params.CurrentXP = CurrentXP;
	params.NeededXP = NeededXP;
	params.XPBar = XPBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

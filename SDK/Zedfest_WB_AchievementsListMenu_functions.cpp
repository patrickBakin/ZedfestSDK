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

// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achieved Achievements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWB_AchievementsListMenu_C::Number_of_Achieved_Achievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achieved Achievements");

	UWB_AchievementsListMenu_C_Number_of_Achieved_Achievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achievements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWB_AchievementsListMenu_C::Number_of_Achievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Number of Achievements");

	UWB_AchievementsListMenu_C_Number_of_Achievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_BFBF705E4EF02F6C48013EAB78BC8247
// (BlueprintCallable, BlueprintEvent)

void UWB_AchievementsListMenu_C::OnFailure_BFBF705E4EF02F6C48013EAB78BC8247()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_BFBF705E4EF02F6C48013EAB78BC8247");

	UWB_AchievementsListMenu_C_OnFailure_BFBF705E4EF02F6C48013EAB78BC8247_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247
// (BlueprintCallable, BlueprintEvent)

void UWB_AchievementsListMenu_C::OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247");

	UWB_AchievementsListMenu_C_OnSuccess_BFBF705E4EF02F6C48013EAB78BC8247_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_9509A55F42BF18A273D91D9FD061C6CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementsListMenu_C::OnFailure_9509A55F42BF18A273D91D9FD061C6CE(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnFailure_9509A55F42BF18A273D91D9FD061C6CE");

	UWB_AchievementsListMenu_C_OnFailure_9509A55F42BF18A273D91D9FD061C6CE_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_9509A55F42BF18A273D91D9FD061C6CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementsListMenu_C::OnSuccess_9509A55F42BF18A273D91D9FD061C6CE(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.OnSuccess_9509A55F42BF18A273D91D9FD061C6CE");

	UWB_AchievementsListMenu_C_OnSuccess_9509A55F42BF18A273D91D9FD061C6CE_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWB_AchievementsListMenu_C::BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWB_AchievementsListMenu_C_BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWB_AchievementsListMenu_C::BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWB_AchievementsListMenu_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Play Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forwards_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementsListMenu_C::Play_Animation(bool* Forwards_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Play Animation");

	UWB_AchievementsListMenu_C_Play_Animation_Params params;
	params.Forwards_ = Forwards_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AchievementsListMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.Construct");

	UWB_AchievementsListMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.ExecuteUbergraph_WB_AchievementsListMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementsListMenu_C::ExecuteUbergraph_WB_AchievementsListMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementsListMenu.WB_AchievementsListMenu_C.ExecuteUbergraph_WB_AchievementsListMenu");

	UWB_AchievementsListMenu_C_ExecuteUbergraph_WB_AchievementsListMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

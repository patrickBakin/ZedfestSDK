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

// Function WB_AchievementListed.WB_AchievementListed_C.MaxProgressionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWB_AchievementListed_C::MaxProgressionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementListed.WB_AchievementListed_C.MaxProgressionText");

	UWB_AchievementListed_C_MaxProgressionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_AchievementListed.WB_AchievementListed_C.CurrentProgressionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWB_AchievementListed_C::CurrentProgressionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementListed.WB_AchievementListed_C.CurrentProgressionText");

	UWB_AchievementListed_C_CurrentProgressionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WB_AchievementListed.WB_AchievementListed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AchievementListed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementListed.WB_AchievementListed_C.Construct");

	UWB_AchievementListed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementListed.WB_AchievementListed_C.ExecuteUbergraph_WB_AchievementListed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementListed_C::ExecuteUbergraph_WB_AchievementListed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementListed.WB_AchievementListed_C.ExecuteUbergraph_WB_AchievementListed");

	UWB_AchievementListed_C_ExecuteUbergraph_WB_AchievementListed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

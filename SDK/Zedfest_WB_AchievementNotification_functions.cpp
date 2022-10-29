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

// Function WB_AchievementNotification.WB_AchievementNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_AchievementNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementNotification.WB_AchievementNotification_C.Construct");

	UWB_AchievementNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WB_AchievementNotification.WB_AchievementNotification_C.ExecuteUbergraph_WB_AchievementNotification
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWB_AchievementNotification_C::ExecuteUbergraph_WB_AchievementNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_AchievementNotification.WB_AchievementNotification_C.ExecuteUbergraph_WB_AchievementNotification");

	UWB_AchievementNotification_C_ExecuteUbergraph_WB_AchievementNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

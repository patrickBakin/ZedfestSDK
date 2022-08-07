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

// Function WB_SecretAchievementsListed.WB_SecretAchievementsListed_C.Number of Secret Achievements Left Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWB_SecretAchievementsListed_C::Number_of_Secret_Achievements_Left_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WB_SecretAchievementsListed.WB_SecretAchievementsListed_C.Number of Secret Achievements Left Text");

	UWB_SecretAchievementsListed_C_Number_of_Secret_Achievements_Left_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

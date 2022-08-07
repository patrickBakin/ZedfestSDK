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

// Function BP_Grenade_Str8BarrelBomber_AI.BP_Grenade_Str8BarrelBomber_AI_C.ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_AI
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Str8BarrelBomber_AI_C::ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_AI(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Str8BarrelBomber_AI.BP_Grenade_Str8BarrelBomber_AI_C.ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_AI");

	ABP_Grenade_Str8BarrelBomber_AI_C_ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_AI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

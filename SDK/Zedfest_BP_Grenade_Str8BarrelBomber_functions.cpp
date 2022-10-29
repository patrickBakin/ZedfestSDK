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

// Function BP_Grenade_Str8BarrelBomber.BP_Grenade_Str8BarrelBomber_C.ExecuteUbergraph_BP_Grenade_Str8BarrelBomber
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_Str8BarrelBomber_C::ExecuteUbergraph_BP_Grenade_Str8BarrelBomber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_Str8BarrelBomber.BP_Grenade_Str8BarrelBomber_C.ExecuteUbergraph_BP_Grenade_Str8BarrelBomber");

	ABP_Grenade_Str8BarrelBomber_C_ExecuteUbergraph_BP_Grenade_Str8BarrelBomber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

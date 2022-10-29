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

// Function BP_Grenade_ExplShotGun_Lvl4.BP_Grenade_ExplShotGun_Lvl4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_ExplShotGun_Lvl4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_ExplShotGun_Lvl4.BP_Grenade_ExplShotGun_Lvl4_C.ReceiveBeginPlay");

	ABP_Grenade_ExplShotGun_Lvl4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_ExplShotGun_Lvl4.BP_Grenade_ExplShotGun_Lvl4_C.ExecuteUbergraph_BP_Grenade_ExplShotGun_Lvl4
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_ExplShotGun_Lvl4_C::ExecuteUbergraph_BP_Grenade_ExplShotGun_Lvl4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_ExplShotGun_Lvl4.BP_Grenade_ExplShotGun_Lvl4_C.ExecuteUbergraph_BP_Grenade_ExplShotGun_Lvl4");

	ABP_Grenade_ExplShotGun_Lvl4_C_ExecuteUbergraph_BP_Grenade_ExplShotGun_Lvl4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

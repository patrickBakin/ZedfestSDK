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

// Function BP_MissileProjectile.BP_MissileProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissileProjectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissileProjectile.BP_MissileProjectile_C.ReceiveTick");

	ABP_MissileProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissileProjectile.BP_MissileProjectile_C.ExecuteUbergraph_BP_MissileProjectile
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissileProjectile_C::ExecuteUbergraph_BP_MissileProjectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissileProjectile.BP_MissileProjectile_C.ExecuteUbergraph_BP_MissileProjectile");

	ABP_MissileProjectile_C_ExecuteUbergraph_BP_MissileProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

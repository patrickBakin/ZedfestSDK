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

// Function BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Boom_ExplosionActor_StickyProxyGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C.ReceiveBeginPlay");

	ABP_Boom_ExplosionActor_StickyProxyGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C.ExecuteUbergraph_BP_Boom_ExplosionActor_StickyProxyGrenade
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Boom_ExplosionActor_StickyProxyGrenade_C::ExecuteUbergraph_BP_Boom_ExplosionActor_StickyProxyGrenade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boom_ExplosionActor_StickyProxyGrenade.BP_Boom_ExplosionActor_StickyProxyGrenade_C.ExecuteUbergraph_BP_Boom_ExplosionActor_StickyProxyGrenade");

	ABP_Boom_ExplosionActor_StickyProxyGrenade_C_ExecuteUbergraph_BP_Boom_ExplosionActor_StickyProxyGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

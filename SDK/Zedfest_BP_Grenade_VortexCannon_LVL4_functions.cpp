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

// Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_VortexCannon_LVL4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.ReceiveBeginPlay");

	ABP_Grenade_VortexCannon_LVL4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_VortexCannon_LVL4_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.CustomEvent_1");

	ABP_Grenade_VortexCannon_LVL4_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.ExecuteUbergraph_BP_Grenade_VortexCannon_LVL4
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_VortexCannon_LVL4_C::ExecuteUbergraph_BP_Grenade_VortexCannon_LVL4(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL4.BP_Grenade_VortexCannon_LVL4_C.ExecuteUbergraph_BP_Grenade_VortexCannon_LVL4");

	ABP_Grenade_VortexCannon_LVL4_C_ExecuteUbergraph_BP_Grenade_VortexCannon_LVL4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

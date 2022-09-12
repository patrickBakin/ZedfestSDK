<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Grenade_VortexCannon_LVL5_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.ReceiveBeginPlay");

	ABP_Grenade_VortexCannon_LVL5_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Grenade_VortexCannon_LVL5_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.CustomEvent_1");

	ABP_Grenade_VortexCannon_LVL5_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.ExecuteUbergraph_BP_Grenade_VortexCannon_LVL5
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grenade_VortexCannon_LVL5_C::ExecuteUbergraph_BP_Grenade_VortexCannon_LVL5(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Grenade_VortexCannon_LVL5.BP_Grenade_VortexCannon_LVL5_C.ExecuteUbergraph_BP_Grenade_VortexCannon_LVL5");

	ABP_Grenade_VortexCannon_LVL5_C_ExecuteUbergraph_BP_Grenade_VortexCannon_LVL5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ObjectivePickup_Spawnpoint.BP_ObjectivePickup_Spawnpoint_C.ObjectiveSpawnIndicatorEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ObjectivePickup_Spawnpoint_C::ObjectiveSpawnIndicatorEvent(bool* TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObjectivePickup_Spawnpoint.BP_ObjectivePickup_Spawnpoint_C.ObjectiveSpawnIndicatorEvent");

	ABP_ObjectivePickup_Spawnpoint_C_ObjectiveSpawnIndicatorEvent_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObjectivePickup_Spawnpoint.BP_ObjectivePickup_Spawnpoint_C.ExecuteUbergraph_BP_ObjectivePickup_Spawnpoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ObjectivePickup_Spawnpoint_C::ExecuteUbergraph_BP_ObjectivePickup_Spawnpoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObjectivePickup_Spawnpoint.BP_ObjectivePickup_Spawnpoint_C.ExecuteUbergraph_BP_ObjectivePickup_Spawnpoint");

	ABP_ObjectivePickup_Spawnpoint_C_ExecuteUbergraph_BP_ObjectivePickup_Spawnpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

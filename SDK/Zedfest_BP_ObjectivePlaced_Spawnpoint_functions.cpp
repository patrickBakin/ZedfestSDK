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

// Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ObjectivePlaceIndicatorEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ObjectivePlaced_Spawnpoint_C::ObjectivePlaceIndicatorEvent(bool* TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ObjectivePlaceIndicatorEvent");

	ABP_ObjectivePlaced_Spawnpoint_C_ObjectivePlaceIndicatorEvent_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ObjectivePlaced_Spawnpoint_C::ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ObjectivePlaced_Spawnpoint.BP_ObjectivePlaced_Spawnpoint_C.ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint");

	ABP_ObjectivePlaced_Spawnpoint_C_ExecuteUbergraph_BP_ObjectivePlaced_Spawnpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodPoolMaster_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveTick");

	ABP_BloodPoolMaster_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BloodPoolMaster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ReceiveBeginPlay");

	ABP_BloodPoolMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ExecuteUbergraph_BP_BloodPoolMaster
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodPoolMaster_C::ExecuteUbergraph_BP_BloodPoolMaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodPoolMaster.BP_BloodPoolMaster_C.ExecuteUbergraph_BP_BloodPoolMaster");

	ABP_BloodPoolMaster_C_ExecuteUbergraph_BP_BloodPoolMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

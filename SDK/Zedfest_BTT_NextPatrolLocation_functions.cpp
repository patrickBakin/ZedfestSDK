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

// Function BTT_NextPatrolLocation.BTT_NextPatrolLocation_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_NextPatrolLocation_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NextPatrolLocation.BTT_NextPatrolLocation_C.ReceiveExecute");

	UBTT_NextPatrolLocation_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_NextPatrolLocation.BTT_NextPatrolLocation_C.ExecuteUbergraph_BTT_NextPatrolLocation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_NextPatrolLocation_C::ExecuteUbergraph_BTT_NextPatrolLocation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NextPatrolLocation.BTT_NextPatrolLocation_C.ExecuteUbergraph_BTT_NextPatrolLocation");

	UBTT_NextPatrolLocation_C_ExecuteUbergraph_BTT_NextPatrolLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

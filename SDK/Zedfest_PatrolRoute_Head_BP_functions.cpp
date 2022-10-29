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

// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.RotateNameToCamera
// (Public, BlueprintCallable, BlueprintEvent)

void APatrolRoute_Head_BP_C::RotateNameToCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.RotateNameToCamera");

	APatrolRoute_Head_BP_C_RotateNameToCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.SetPatrolRouteRef
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_Base_C**         PatrolRouteRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APatrolRoute_Head_BP_C::SetPatrolRouteRef(class ABP_NPC_Base_C** PatrolRouteRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.SetPatrolRouteRef");

	APatrolRoute_Head_BP_C_SetPatrolRouteRef_Params params;
	params.PatrolRouteRef = PatrolRouteRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APatrolRoute_Head_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ReceiveBeginPlay");

	APatrolRoute_Head_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ExecuteUbergraph_PatrolRoute_Head_BP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APatrolRoute_Head_BP_C::ExecuteUbergraph_PatrolRoute_Head_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolRoute_Head_BP.PatrolRoute_Head_BP_C.ExecuteUbergraph_PatrolRoute_Head_BP");

	APatrolRoute_Head_BP_C_ExecuteUbergraph_PatrolRoute_Head_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_AttackTargetRanged1_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveDeactivation");

	UBTS_AttackTargetRanged1_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_AttackTargetRanged1_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveActivation");

	UBTS_AttackTargetRanged1_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_AttackTargetRanged1_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ReceiveTick");

	UBTS_AttackTargetRanged1_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ExecuteUbergraph_BTS_AttackTargetRanged1
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_AttackTargetRanged1_C::ExecuteUbergraph_BTS_AttackTargetRanged1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_AttackTargetRanged1.BTS_AttackTargetRanged1_C.ExecuteUbergraph_BTS_AttackTargetRanged1");

	UBTS_AttackTargetRanged1_C_ExecuteUbergraph_BTS_AttackTargetRanged1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

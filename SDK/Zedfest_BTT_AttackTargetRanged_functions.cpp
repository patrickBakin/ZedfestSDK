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

// Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_AttackTargetRanged_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ReceiveExecute");

	UBTT_AttackTargetRanged_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ExecuteUbergraph_BTT_AttackTargetRanged
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_AttackTargetRanged_C::ExecuteUbergraph_BTT_AttackTargetRanged(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_AttackTargetRanged.BTT_AttackTargetRanged_C.ExecuteUbergraph_BTT_AttackTargetRanged");

	UBTT_AttackTargetRanged_C_ExecuteUbergraph_BTT_AttackTargetRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

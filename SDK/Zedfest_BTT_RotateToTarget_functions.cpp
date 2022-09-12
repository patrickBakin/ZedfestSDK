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

// Function BTT_RotateToTarget.BTT_RotateToTarget_C.GetBlackboardAsVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBlackboardKeySelector* BBKey                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 RetVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_RotateToTarget_C::GetBlackboardAsVector(struct FBlackboardKeySelector* BBKey, struct FVector* RetVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RotateToTarget.BTT_RotateToTarget_C.GetBlackboardAsVector");

	UBTT_RotateToTarget_C_GetBlackboardAsVector_Params params;
	params.BBKey = BBKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetVector != nullptr)
		*RetVector = params.RetVector;
}


// Function BTT_RotateToTarget.BTT_RotateToTarget_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RotateToTarget_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RotateToTarget.BTT_RotateToTarget_C.ReceiveExecute");

	UBTT_RotateToTarget_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_RotateToTarget.BTT_RotateToTarget_C.ExecuteUbergraph_BTT_RotateToTarget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_RotateToTarget_C::ExecuteUbergraph_BTT_RotateToTarget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_RotateToTarget.BTT_RotateToTarget_C.ExecuteUbergraph_BTT_RotateToTarget");

	UBTT_RotateToTarget_C_ExecuteUbergraph_BTT_RotateToTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

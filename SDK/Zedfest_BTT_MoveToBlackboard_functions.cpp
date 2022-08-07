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

// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.GetBlackboardValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FBlackboardKeySelector* Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  ActorValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::GetBlackboardValue(struct FBlackboardKeySelector* Key, class AActor** ActorValue, struct FVector* VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.GetBlackboardValue");

	UBTT_MoveToBlackboard_C_GetBlackboardValue_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorValue != nullptr)
		*ActorValue = params.ActorValue;
	if (VectorValue != nullptr)
		*VectorValue = params.VectorValue;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController**          AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96(TEnumAsByte<EPathFollowingResult>* Result, class AAIController** AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96");

	UBTT_MoveToBlackboard_C_OnMoveFinished_DE75453143ADBBBDCEEF64A07451FC96_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96
// (BlueprintCallable, BlueprintEvent)

void UBTT_MoveToBlackboard_C::OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96");

	UBTT_MoveToBlackboard_C_OnRequestFailed_DE75453143ADBBBDCEEF64A07451FC96_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_914C5A064B7524DE0195529892D972A7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController**          AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::OnMoveFinished_914C5A064B7524DE0195529892D972A7(TEnumAsByte<EPathFollowingResult>* Result, class AAIController** AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnMoveFinished_914C5A064B7524DE0195529892D972A7");

	UBTT_MoveToBlackboard_C_OnMoveFinished_914C5A064B7524DE0195529892D972A7_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_914C5A064B7524DE0195529892D972A7
// (BlueprintCallable, BlueprintEvent)

void UBTT_MoveToBlackboard_C::OnRequestFailed_914C5A064B7524DE0195529892D972A7()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnRequestFailed_914C5A064B7524DE0195529892D972A7");

	UBTT_MoveToBlackboard_C_OnRequestFailed_914C5A064B7524DE0195529892D972A7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveExecute");

	UBTT_MoveToBlackboard_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnQueryFinishedEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper** QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>*  QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, TEnumAsByte<EEnvQueryStatus>* QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.OnQueryFinishedEvent_Event_1");

	UBTT_MoveToBlackboard_C_OnQueryFinishedEvent_Event_1_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ReceiveAbort");

	UBTT_MoveToBlackboard_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UBTT_MoveToBlackboard_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.CustomEvent_1");

	UBTT_MoveToBlackboard_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ExecuteUbergraph_BTT_MoveToBlackboard
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_MoveToBlackboard_C::ExecuteUbergraph_BTT_MoveToBlackboard(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_MoveToBlackboard.BTT_MoveToBlackboard_C.ExecuteUbergraph_BTT_MoveToBlackboard");

	UBTT_MoveToBlackboard_C_ExecuteUbergraph_BTT_MoveToBlackboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

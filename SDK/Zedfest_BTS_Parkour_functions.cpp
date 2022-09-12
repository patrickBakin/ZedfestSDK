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

// Function BTS_Parkour.BTS_Parkour_C.GetCharacterBaseZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Z                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::GetCharacterBaseZ(float* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.GetCharacterBaseZ");

	UBTS_Parkour_C_GetCharacterBaseZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Z != nullptr)
		*Z = params.Z;
}


// Function BTS_Parkour.BTS_Parkour_C.GetMovementVectors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 NearFront                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FarFront                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::GetMovementVectors(struct FVector* NearFront, struct FVector* FarFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.GetMovementVectors");

	UBTS_Parkour_C_GetMovementVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearFront != nullptr)
		*NearFront = params.NearFront;
	if (FarFront != nullptr)
		*FarFront = params.FarFront;
}


// Function BTS_Parkour.BTS_Parkour_C.GetJumpVectors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LowVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HighVector                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NearFront                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FarFront                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::GetJumpVectors(struct FVector* LowVector, struct FVector* HighVector, struct FVector* NearFront, struct FVector* FarFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.GetJumpVectors");

	UBTS_Parkour_C_GetJumpVectors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LowVector != nullptr)
		*LowVector = params.LowVector;
	if (HighVector != nullptr)
		*HighVector = params.HighVector;
	if (NearFront != nullptr)
		*NearFront = params.NearFront;
	if (FarFront != nullptr)
		*FarFront = params.FarFront;
}


// Function BTS_Parkour.BTS_Parkour_C.GetCurrentTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 RetLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::GetCurrentTarget(struct FVector* RetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.GetCurrentTarget");

	UBTS_Parkour_C_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RetLoc != nullptr)
		*RetLoc = params.RetLoc;
}


// Function BTS_Parkour.BTS_Parkour_C.OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0(TEnumAsByte<EPathFollowingResult>* MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0");

	UBTS_Parkour_C_OnFail_74CFA8FB4DF01A91560AB3824ABAD3F0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0(TEnumAsByte<EPathFollowingResult>* MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0");

	UBTS_Parkour_C_OnSuccess_74CFA8FB4DF01A91560AB3824ABAD3F0_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnCheckCrouch
// (BlueprintCallable, BlueprintEvent)

void UBTS_Parkour_C::OnCheckCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnCheckCrouch");

	UBTS_Parkour_C_OnCheckCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.ReceiveTick");

	UBTS_Parkour_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnEndJump
// (BlueprintCallable, BlueprintEvent)

void UBTS_Parkour_C::OnEndJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnEndJump");

	UBTS_Parkour_C_OnEndJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnEndCrouch
// (BlueprintCallable, BlueprintEvent)

void UBTS_Parkour_C::OnEndCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnEndCrouch");

	UBTS_Parkour_C_OnEndCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnJump
// (BlueprintCallable, BlueprintEvent)

void UBTS_Parkour_C::OnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnJump");

	UBTS_Parkour_C_OnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnVaultOrClimb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                FrontHitLoc                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::OnVaultOrClimb(struct FVector* FrontHitLoc, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnVaultOrClimb");

	UBTS_Parkour_C_OnVaultOrClimb_Params params;
	params.FrontHitLoc = FrontHitLoc;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.QueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper** QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>*  QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::QueryFinished(class UEnvQueryInstanceBlueprintWrapper** QueryInstance, TEnumAsByte<EEnvQueryStatus>* QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.QueryFinished");

	UBTS_Parkour_C_QueryFinished_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.OnCheckParkour
// (BlueprintCallable, BlueprintEvent)

void UBTS_Parkour_C::OnCheckParkour()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.OnCheckParkour");

	UBTS_Parkour_C_OnCheckParkour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.ReceiveActivation");

	UBTS_Parkour_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_Parkour.BTS_Parkour_C.ExecuteUbergraph_BTS_Parkour
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_Parkour_C::ExecuteUbergraph_BTS_Parkour(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_Parkour.BTS_Parkour_C.ExecuteUbergraph_BTS_Parkour");

	UBTS_Parkour_C_ExecuteUbergraph_BTS_Parkour_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

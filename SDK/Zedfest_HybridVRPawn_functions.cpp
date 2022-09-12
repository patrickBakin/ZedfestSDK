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

// Function HybridVRPawn.HybridVRPawn_C.SetOverrideTurning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bOverrideTurning               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHybridVRPawn_C::SetOverrideTurning(bool* bOverrideTurning)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.SetOverrideTurning");

	AHybridVRPawn_C_SetOverrideTurning_Params params;
	params.bOverrideTurning = bOverrideTurning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.UpdateTeleportDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AHybridVRPawn_C::UpdateTeleportDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.UpdateTeleportDirection");

	AHybridVRPawn_C_UpdateTeleportDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.GetThumbstickFacingDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHybridVRPawn_C::GetThumbstickFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.GetThumbstickFacingDirection");

	AHybridVRPawn_C_GetThumbstickFacingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HybridVRPawn.HybridVRPawn_C.ShouldUpdateFacingDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldAdjust                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHybridVRPawn_C::ShouldUpdateFacingDirection(bool* ShouldAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.ShouldUpdateFacingDirection");

	AHybridVRPawn_C_ShouldUpdateFacingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldAdjust != nullptr)
		*ShouldAdjust = params.ShouldAdjust;
}


// Function HybridVRPawn.HybridVRPawn_C.GetTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundValidLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHybridVRPawn_C::GetTeleportDestination(bool* FoundValidLocation, struct FVector* Location, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.GetTeleportDestination");

	AHybridVRPawn_C_GetTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundValidLocation != nullptr)
		*FoundValidLocation = params.FoundValidLocation;
	if (Location != nullptr)
		*Location = params.Location;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_R_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_R_K2Node_InputKeyEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_R_K2Node_InputKeyEvent_9");

	AHybridVRPawn_C_InpActEvt_R_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");

	AHybridVRPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3");

	AHybridVRPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHybridVRPawn_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1");

	AHybridVRPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHybridVRPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.ReceiveBeginPlay");

	AHybridVRPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHybridVRPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.ReceiveTick");

	AHybridVRPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HybridVRPawn.HybridVRPawn_C.ExecuteUbergraph_HybridVRPawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHybridVRPawn_C::ExecuteUbergraph_HybridVRPawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HybridVRPawn.HybridVRPawn_C.ExecuteUbergraph_HybridVRPawn");

	AHybridVRPawn_C_ExecuteUbergraph_HybridVRPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

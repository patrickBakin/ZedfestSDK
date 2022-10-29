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

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.UpdateTeleportDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AHMDLocomotionPawn_C::UpdateTeleportDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.UpdateTeleportDirection");

	AHMDLocomotionPawn_C_UpdateTeleportDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetThumbstickFacingDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AHMDLocomotionPawn_C::GetThumbstickFacingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetThumbstickFacingDirection");

	AHMDLocomotionPawn_C_GetThumbstickFacingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ShouldUpdateFacingDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldAdjust                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHMDLocomotionPawn_C::ShouldUpdateFacingDirection(bool* ShouldAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.ShouldUpdateFacingDirection");

	AHMDLocomotionPawn_C_ShouldUpdateFacingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldAdjust != nullptr)
		*ShouldAdjust = params.ShouldAdjust;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundValidLocation             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHMDLocomotionPawn_C::GetTeleportDestination(bool* FoundValidLocation, struct FVector* Location, struct FVector* HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetTeleportDestination");

	AHMDLocomotionPawn_C_GetTeleportDestination_Params params;

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


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_R_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_R_K2Node_InputKeyEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_R_K2Node_InputKeyEvent_9");

	AHMDLocomotionPawn_C_InpActEvt_R_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AHMDLocomotionPawn_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1");

	AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHMDLocomotionPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveBeginPlay");

	AHMDLocomotionPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHMDLocomotionPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveTick");

	AHMDLocomotionPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ExecuteUbergraph_HMDLocomotionPawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHMDLocomotionPawn_C::ExecuteUbergraph_HMDLocomotionPawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HMDLocomotionPawn.HMDLocomotionPawn_C.ExecuteUbergraph_HMDLocomotionPawn");

	AHMDLocomotionPawn_C_ExecuteUbergraph_HMDLocomotionPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

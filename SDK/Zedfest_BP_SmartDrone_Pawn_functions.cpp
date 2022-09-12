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

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Update Face Selection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Update_Face_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Update Face Selection");

	ABP_SmartDrone_Pawn_C_Update_Face_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Mesh_Velocity
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Interpolate_Mesh_Velocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Mesh_Velocity");

	ABP_SmartDrone_Pawn_C_Interpolate_Mesh_Velocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Camera_ArmLength
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Interpolate_Camera_ArmLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Camera_ArmLength");

	ABP_SmartDrone_Pawn_C_Interpolate_Camera_ArmLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Input_LookUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::Input_LookUp(float* Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Input_LookUp");

	ABP_SmartDrone_Pawn_C_Input_LookUp_Params params;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachMesh_to_SpringArm
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::AttachMesh_to_SpringArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachMesh_to_SpringArm");

	ABP_SmartDrone_Pawn_C_AttachMesh_to_SpringArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Rotate_Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::Rotate_Character(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Rotate_Character");

	ABP_SmartDrone_Pawn_C_Rotate_Character_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Strafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::Move_Strafe(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Strafe");

	ABP_SmartDrone_Pawn_C_Move_Strafe_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.If_Moving_Stop_AttackAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Movement_Input                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::If_Moving_Stop_AttackAnimation(float* Movement_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.If_Moving_Stop_AttackAnimation");

	ABP_SmartDrone_Pawn_C_If_Moving_Stop_AttackAnimation_Params params;
	params.Movement_Input = Movement_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Forward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::Move_Forward(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Forward");

	ABP_SmartDrone_Pawn_C_Move_Forward_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Adjust_Walk_Speed
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Adjust_Walk_Speed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Adjust_Walk_Speed");

	ABP_SmartDrone_Pawn_C_Adjust_Walk_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Promote_AnimBP_to_Variable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Promote_AnimBP_to_Variable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Promote_AnimBP_to_Variable");

	ABP_SmartDrone_Pawn_C_Promote_AnimBP_to_Variable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Pawn_Jump
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Pawn_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Pawn_Jump");

	ABP_SmartDrone_Pawn_C_Pawn_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachPointLight_to_MeshBone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::AttachPointLight_to_MeshBone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachPointLight_to_MeshBone");

	ABP_SmartDrone_Pawn_C_AttachPointLight_to_MeshBone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.UserConstructionScript");

	ABP_SmartDrone_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_CameraToggle_K2Node_InputActionEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15");

	ABP_SmartDrone_Pawn_C_InpActEvt_CameraToggle_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14");

	ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13");

	ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Alt_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Fire_Alt_K2Node_InputActionEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Alt_K2Node_InputActionEvent_12");

	ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Alt_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Melee_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Melee_K2Node_InputActionEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Melee_K2Node_InputActionEvent_11");

	ABP_SmartDrone_Pawn_C_InpActEvt_Melee_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Fire_K2Node_InputActionEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_10");

	ABP_SmartDrone_Pawn_C_InpActEvt_Fire_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Fire_K2Node_InputActionEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_9");

	ABP_SmartDrone_Pawn_C_InpActEvt_Fire_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenFront_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_OpenFront_K2Node_InputActionEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenFront_K2Node_InputActionEvent_8");

	ABP_SmartDrone_Pawn_C_InpActEvt_OpenFront_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenSides_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_OpenSides_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenSides_K2Node_InputActionEvent_7");

	ABP_SmartDrone_Pawn_C_InpActEvt_OpenSides_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6");

	ABP_SmartDrone_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5");

	ABP_SmartDrone_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Run_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_4");

	ABP_SmartDrone_Pawn_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Run_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_3");

	ABP_SmartDrone_Pawn_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2");

	ABP_SmartDrone_Pawn_C_InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Increase_Speed_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SmartDrone_Pawn_C::InpActEvt_Increase_Speed_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Increase_Speed_K2Node_InputActionEvent_1");

	ABP_SmartDrone_Pawn_C_InpActEvt_Increase_Speed_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveBeginPlay");

	ABP_SmartDrone_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveTick");

	ABP_SmartDrone_Pawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_Reset_InactivityTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Event_Reset_InactivityTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_Reset_InactivityTimer");

	ABP_SmartDrone_Pawn_C_Event_Reset_InactivityTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Inactivity_Timer
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Inactivity_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Inactivity_Timer");

	ABP_SmartDrone_Pawn_C_Inactivity_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_PawnActive
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Event_PawnActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_PawnActive");

	ABP_SmartDrone_Pawn_C_Event_PawnActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Cancel_Attack_Anim
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Cancel_Attack_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Cancel_Attack_Anim");

	ABP_SmartDrone_Pawn_C_Cancel_Attack_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenSides
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Event_OpenSides()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenSides");

	ABP_SmartDrone_Pawn_C_Event_OpenSides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenFront
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Event_OpenFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenFront");

	ABP_SmartDrone_Pawn_C_Event_OpenFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_ForceTurn
// (BlueprintCallable, BlueprintEvent)

void ABP_SmartDrone_Pawn_C::Event_ForceTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_ForceTurn");

	ABP_SmartDrone_Pawn_C_Event_ForceTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Rotate_K2Node_InputAxisEvent_117
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_Rotate_K2Node_InputAxisEvent_117(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Rotate_K2Node_InputAxisEvent_117");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_Rotate_K2Node_InputAxisEvent_117_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_40(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_37
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_37(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_37");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_37_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25");

	ABP_SmartDrone_Pawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ExecuteUbergraph_BP_SmartDrone_Pawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartDrone_Pawn_C::ExecuteUbergraph_BP_SmartDrone_Pawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ExecuteUbergraph_BP_SmartDrone_Pawn");

	ABP_SmartDrone_Pawn_C_ExecuteUbergraph_BP_SmartDrone_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

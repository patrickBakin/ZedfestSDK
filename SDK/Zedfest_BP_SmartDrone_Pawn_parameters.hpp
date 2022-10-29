#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Update Face Selection
struct ABP_SmartDrone_Pawn_C_Update_Face_Selection_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Mesh_Velocity
struct ABP_SmartDrone_Pawn_C_Interpolate_Mesh_Velocity_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Interpolate_Camera_ArmLength
struct ABP_SmartDrone_Pawn_C_Interpolate_Camera_ArmLength_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Input_LookUp
struct ABP_SmartDrone_Pawn_C_Input_LookUp_Params
{
	float*                                             Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachMesh_to_SpringArm
struct ABP_SmartDrone_Pawn_C_AttachMesh_to_SpringArm_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Rotate_Character
struct ABP_SmartDrone_Pawn_C_Rotate_Character_Params
{
	float*                                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Strafe
struct ABP_SmartDrone_Pawn_C_Move_Strafe_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.If_Moving_Stop_AttackAnimation
struct ABP_SmartDrone_Pawn_C_If_Moving_Stop_AttackAnimation_Params
{
	float*                                             Movement_Input;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Move_Forward
struct ABP_SmartDrone_Pawn_C_Move_Forward_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Adjust_Walk_Speed
struct ABP_SmartDrone_Pawn_C_Adjust_Walk_Speed_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Promote_AnimBP_to_Variable
struct ABP_SmartDrone_Pawn_C_Promote_AnimBP_to_Variable_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Pawn_Jump
struct ABP_SmartDrone_Pawn_C_Pawn_Jump_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.AttachPointLight_to_MeshBone
struct ABP_SmartDrone_Pawn_C_AttachPointLight_to_MeshBone_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.UserConstructionScript
struct ABP_SmartDrone_Pawn_C_UserConstructionScript_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15
struct ABP_SmartDrone_Pawn_C_InpActEvt_CameraToggle_K2Node_InputActionEvent_15_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14
struct ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Missiles_K2Node_InputActionEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13
struct ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Missiles_K2Node_InputActionEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_Alt_K2Node_InputActionEvent_12
struct ABP_SmartDrone_Pawn_C_InpActEvt_Fire_Alt_K2Node_InputActionEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Melee_K2Node_InputActionEvent_11
struct ABP_SmartDrone_Pawn_C_InpActEvt_Melee_K2Node_InputActionEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_10
struct ABP_SmartDrone_Pawn_C_InpActEvt_Fire_K2Node_InputActionEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Fire_K2Node_InputActionEvent_9
struct ABP_SmartDrone_Pawn_C_InpActEvt_Fire_K2Node_InputActionEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenFront_K2Node_InputActionEvent_8
struct ABP_SmartDrone_Pawn_C_InpActEvt_OpenFront_K2Node_InputActionEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_OpenSides_K2Node_InputActionEvent_7
struct ABP_SmartDrone_Pawn_C_InpActEvt_OpenSides_K2Node_InputActionEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6
struct ABP_SmartDrone_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5
struct ABP_SmartDrone_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_4
struct ABP_SmartDrone_Pawn_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Run_K2Node_InputActionEvent_3
struct ABP_SmartDrone_Pawn_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2
struct ABP_SmartDrone_Pawn_C_InpActEvt_Decrease_Speed_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpActEvt_Increase_Speed_K2Node_InputActionEvent_1
struct ABP_SmartDrone_Pawn_C_InpActEvt_Increase_Speed_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveBeginPlay
struct ABP_SmartDrone_Pawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ReceiveTick
struct ABP_SmartDrone_Pawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_Reset_InactivityTimer
struct ABP_SmartDrone_Pawn_C_Event_Reset_InactivityTimer_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Inactivity_Timer
struct ABP_SmartDrone_Pawn_C_Inactivity_Timer_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_PawnActive
struct ABP_SmartDrone_Pawn_C_Event_PawnActive_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_DecreaseCamDistance_K2Node_InputAxisEvent_1123_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_IncreaseCamDistance_K2Node_InputAxisEvent_1112_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Cancel_Attack_Anim
struct ABP_SmartDrone_Pawn_C_Cancel_Attack_Anim_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenSides
struct ABP_SmartDrone_Pawn_C_Event_OpenSides_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_OpenFront
struct ABP_SmartDrone_Pawn_C_Event_OpenFront_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.Event_ForceTurn
struct ABP_SmartDrone_Pawn_C_Event_ForceTurn_Params
{
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_258_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_191_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Rotate_K2Node_InputAxisEvent_117
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_Rotate_K2Node_InputAxisEvent_117_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_304_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_40
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_40_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_37
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_37_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25
struct ABP_SmartDrone_Pawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_25_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartDrone_Pawn.BP_SmartDrone_Pawn_C.ExecuteUbergraph_BP_SmartDrone_Pawn
struct ABP_SmartDrone_Pawn_C_ExecuteUbergraph_BP_SmartDrone_Pawn_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

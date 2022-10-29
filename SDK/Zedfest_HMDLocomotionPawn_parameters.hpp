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

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.UpdateTeleportDirection
struct AHMDLocomotionPawn_C_UpdateTeleportDirection_Params
{
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetThumbstickFacingDirection
struct AHMDLocomotionPawn_C_GetThumbstickFacingDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ShouldUpdateFacingDirection
struct AHMDLocomotionPawn_C_ShouldUpdateFacingDirection_Params
{
	bool                                               ShouldAdjust;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.GetTeleportDestination
struct AHMDLocomotionPawn_C_GetTeleportDestination_Params
{
	bool                                               FoundValidLocation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_R_K2Node_InputKeyEvent_9
struct AHMDLocomotionPawn_C_InpActEvt_R_K2Node_InputKeyEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
struct AHMDLocomotionPawn_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveBeginPlay
struct AHMDLocomotionPawn_C_ReceiveBeginPlay_Params
{
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ReceiveTick
struct AHMDLocomotionPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HMDLocomotionPawn.HMDLocomotionPawn_C.ExecuteUbergraph_HMDLocomotionPawn
struct AHMDLocomotionPawn_C_ExecuteUbergraph_HMDLocomotionPawn_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.FindExitSocket
struct ABlueprint_Vehicle_C_FindExitSocket_Params
{
	class USceneComponent**                            CharacterMesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FVector                                     ExitLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExitVehicle
struct ABlueprint_Vehicle_C_ExitVehicle_Params
{
	class ACharacter**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InformationUpdating
struct ABlueprint_Vehicle_C_InformationUpdating_Params
{
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerPitchInput_(Custom)
struct ABlueprint_Vehicle_C_AddControllerPitchInput__Custom__Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.AddControllerYawInput_(Custom)
struct ABlueprint_Vehicle_C_AddControllerYawInput__Custom__Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_3
struct ABlueprint_Vehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_Jump_K2Node_InputActionEvent_2
struct ABlueprint_Vehicle_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpActEvt_InteractButton_K2Node_InputActionEvent_1
struct ABlueprint_Vehicle_C_InpActEvt_InteractButton_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.Exit Vehicle "Multicast"
struct ABlueprint_Vehicle_C_Exit_Vehicle__Multicast__Params
{
	class ACharacter**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Exit Vehicle "Server"
struct ABlueprint_Vehicle_C_RPC_Exit_Vehicle__Server__Params
{
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Server"
struct ABlueprint_Vehicle_C_RPC_Move_Forward__Server__Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.RPC Move Forward "Multicast"
struct ABlueprint_Vehicle_C_RPC_Move_Forward__Multicast__Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_75
struct ABlueprint_Vehicle_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_75_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ReceiveTick
struct ABlueprint_Vehicle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44
struct ABlueprint_Vehicle_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_44_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33
struct ABlueprint_Vehicle_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_33_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ABlueprint_Vehicle_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Blueprint_Vehicle.Blueprint_Vehicle_C.ExecuteUbergraph_Blueprint_Vehicle
struct ABlueprint_Vehicle_C_ExecuteUbergraph_Blueprint_Vehicle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

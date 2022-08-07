#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PC_DemoSpectator.PC_DemoSpectator_C.ToggleHUD
struct APC_DemoSpectator_C_ToggleHUD_Params
{
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.EnableVR
struct APC_DemoSpectator_C_EnableVR_Params
{
	bool*                                              InEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRMoveMode*                                       InVRMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Tab_K2Node_InputKeyEvent_2
struct APC_DemoSpectator_C_InpActEvt_Tab_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct APC_DemoSpectator_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.BP_ToggleMenu
struct APC_DemoSpectator_C_BP_ToggleMenu_Params
{
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.ReceiveBeginPlay
struct APC_DemoSpectator_C_ReceiveBeginPlay_Params
{
};

// Function PC_DemoSpectator.PC_DemoSpectator_C.ExecuteUbergraph_PC_DemoSpectator
struct APC_DemoSpectator_C_ExecuteUbergraph_PC_DemoSpectator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

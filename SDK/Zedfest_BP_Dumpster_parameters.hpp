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

// Function BP_Dumpster.BP_Dumpster_C.IsSwitchLeft
struct ABP_Dumpster_C_IsSwitchLeft_Params
{
	TScriptInterface<class UInterface>*                Interface;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.SpawnLevers
struct ABP_Dumpster_C_SpawnLevers_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.BoostSpring__FinishedFunc
struct ABP_Dumpster_C_BoostSpring__FinishedFunc_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.BoostSpring__UpdateFunc
struct ABP_Dumpster_C_BoostSpring__UpdateFunc_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.Timeline_0__FinishedFunc
struct ABP_Dumpster_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.Timeline_0__UpdateFunc
struct ABP_Dumpster_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.InteractDecrement
struct ABP_Dumpster_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.InteractSimple
struct ABP_Dumpster_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.TimeLineMulticast
struct ABP_Dumpster_C_TimeLineMulticast_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.ReceiveBeginPlay
struct ABP_Dumpster_C_ReceiveBeginPlay_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.InteractIncrement
struct ABP_Dumpster_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.ChangeLeversEvent
struct ABP_Dumpster_C_ChangeLeversEvent_Params
{
	bool*                                              Left_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.EnableHydraulicPressEvent
struct ABP_Dumpster_C_EnableHydraulicPressEvent_Params
{
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.StartHydraulicPress
struct ABP_Dumpster_C_StartHydraulicPress_Params
{
	int*                                               Code;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dumpster.BP_Dumpster_C.HydraulicPressComputerEvent
struct ABP_Dumpster_C_HydraulicPressComputerEvent_Params
{
	struct FString*                                    Zeds_Shredded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Dumpster.BP_Dumpster_C.SoundVfxEvent
struct ABP_Dumpster_C_SoundVfxEvent_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.PuzzleCompleted
struct ABP_Dumpster_C_PuzzleCompleted_Params
{
};

// Function BP_Dumpster.BP_Dumpster_C.ExecuteUbergraph_BP_Dumpster
struct ABP_Dumpster_C_ExecuteUbergraph_BP_Dumpster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.IsSwitchLeft
struct ABP_DeluxeButtons_C_IsSwitchLeft_Params
{
	TScriptInterface<class UInterface>*                Interface;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnLevers
struct ABP_DeluxeButtons_C_SpawnLevers_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__FinishedFunc
struct ABP_DeluxeButtons_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.Timeline_0__UpdateFunc
struct ABP_DeluxeButtons_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractSimple
struct ABP_DeluxeButtons_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractDecrement
struct ABP_DeluxeButtons_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveBeginPlay
struct ABP_DeluxeButtons_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ReceiveDestroyed
struct ABP_DeluxeButtons_C_ReceiveDestroyed_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.RemoveDeluxeButtons
struct ABP_DeluxeButtons_C_RemoveDeluxeButtons_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.InteractIncrement
struct ABP_DeluxeButtons_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ChangeLeversEvent1
struct ABP_DeluxeButtons_C_ChangeLeversEvent1_Params
{
	bool*                                              Left_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SetCodeText
struct ABP_DeluxeButtons_C_SetCodeText_Params
{
	bool*                                              Completed_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.SpawnDeluxeLeversEvent
struct ABP_DeluxeButtons_C_SpawnDeluxeLeversEvent_Params
{
};

// Function BP_DeluxeButtons.BP_DeluxeButtons_C.ExecuteUbergraph_BP_DeluxeButtons
struct ABP_DeluxeButtons_C_ExecuteUbergraph_BP_DeluxeButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

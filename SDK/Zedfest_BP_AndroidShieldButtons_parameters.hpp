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

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__FinishedFunc
struct ABP_AndroidShieldButtons_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.Timeline_0__UpdateFunc
struct ABP_AndroidShieldButtons_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractSimple
struct ABP_AndroidShieldButtons_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractDecrement
struct ABP_AndroidShieldButtons_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.InteractIncrement
struct ABP_AndroidShieldButtons_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveBeginPlay
struct ABP_AndroidShieldButtons_C_ReceiveBeginPlay_Params
{
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ReceiveDestroyed
struct ABP_AndroidShieldButtons_C_ReceiveDestroyed_Params
{
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.RemoveAndroidShieldButtons
struct ABP_AndroidShieldButtons_C_RemoveAndroidShieldButtons_Params
{
};

// Function BP_AndroidShieldButtons.BP_AndroidShieldButtons_C.ExecuteUbergraph_BP_AndroidShieldButtons
struct ABP_AndroidShieldButtons_C_ExecuteUbergraph_BP_AndroidShieldButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

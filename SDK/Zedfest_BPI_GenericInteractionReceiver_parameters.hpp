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

// Function BPI_GenericInteractionReceiver.BPI_GenericInteractionReceiver_C.InteractDecrement
struct UBPI_GenericInteractionReceiver_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractionReceiver.BPI_GenericInteractionReceiver_C.InteractIncrement
struct UBPI_GenericInteractionReceiver_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_GenericInteractionReceiver.BPI_GenericInteractionReceiver_C.InteractSimple
struct UBPI_GenericInteractionReceiver_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

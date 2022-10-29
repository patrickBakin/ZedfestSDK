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

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.InteractIncrement
struct ABP_GlitchFaceButtons_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.InteractDecrement
struct ABP_GlitchFaceButtons_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.InteractSimple
struct ABP_GlitchFaceButtons_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.ReceiveBeginPlay
struct ABP_GlitchFaceButtons_C_ReceiveBeginPlay_Params
{
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.ReceiveDestroyed
struct ABP_GlitchFaceButtons_C_ReceiveDestroyed_Params
{
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.ReceiveAnyDamage
struct ABP_GlitchFaceButtons_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.SetGlitchFaceItemHealth
struct ABP_GlitchFaceButtons_C_SetGlitchFaceItemHealth_Params
{
};

// Function BP_GlitchFaceButtons.BP_GlitchFaceButtons_C.ExecuteUbergraph_BP_GlitchFaceButtons
struct ABP_GlitchFaceButtons_C_ExecuteUbergraph_BP_GlitchFaceButtons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

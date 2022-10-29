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

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractIncrement
struct ABP_GlitchFaceHealthRemover_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractDecrement
struct ABP_GlitchFaceHealthRemover_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.InteractSimple
struct ABP_GlitchFaceHealthRemover_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveBeginPlay
struct ABP_GlitchFaceHealthRemover_C_ReceiveBeginPlay_Params
{
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveDestroyed
struct ABP_GlitchFaceHealthRemover_C_ReceiveDestroyed_Params
{
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ReceiveAnyDamage
struct ABP_GlitchFaceHealthRemover_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.SetGlitchFaceHealthRemoveHP
struct ABP_GlitchFaceHealthRemover_C_SetGlitchFaceHealthRemoveHP_Params
{
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.CustomEvent_1
struct ABP_GlitchFaceHealthRemover_C_CustomEvent_1_Params
{
};

// Function BP_GlitchFaceHealthRemover.BP_GlitchFaceHealthRemover_C.ExecuteUbergraph_BP_GlitchFaceHealthRemover
struct ABP_GlitchFaceHealthRemover_C_ExecuteUbergraph_BP_GlitchFaceHealthRemover_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

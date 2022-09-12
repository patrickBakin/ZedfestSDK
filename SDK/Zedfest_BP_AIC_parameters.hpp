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

// Function BP_AIC.BP_AIC_C.ReceiveBeginPlay
struct ABP_AIC_C_ReceiveBeginPlay_Params
{
};

// Function BP_AIC.BP_AIC_C.ReceiveTick
struct ABP_AIC_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIC.BP_AIC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
struct ABP_AIC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus*                                Stimulus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AIC.BP_AIC_C.ReceivePossess
struct ABP_AIC_C_ReceivePossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIC.BP_AIC_C.ReceiveUnPossess
struct ABP_AIC_C_ReceiveUnPossess_Params
{
	class APawn**                                      UnpossessedPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AIC.BP_AIC_C.ExecuteUbergraph_BP_AIC
struct ABP_AIC_C_ExecuteUbergraph_BP_AIC_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

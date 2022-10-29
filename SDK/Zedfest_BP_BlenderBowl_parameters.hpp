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

// Function BP_BlenderBowl.BP_BlenderBowl_C.IsSwitchLeft
struct ABP_BlenderBowl_C_IsSwitchLeft_Params
{
	TScriptInterface<class UInterface>*                Interface;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bLeft;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.SpawnLevers
struct ABP_BlenderBowl_C_SpawnLevers_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__FinishedFunc
struct ABP_BlenderBowl_C_BoostSpring__FinishedFunc_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BoostSpring__UpdateFunc
struct ABP_BlenderBowl_C_BoostSpring__UpdateFunc_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__FinishedFunc
struct ABP_BlenderBowl_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.Timeline_0__UpdateFunc
struct ABP_BlenderBowl_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractDecrement
struct ABP_BlenderBowl_C_InteractDecrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Decrement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractSimple
struct ABP_BlenderBowl_C_InteractSimple_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.TimeLineMulticast
struct ABP_BlenderBowl_C_TimeLineMulticast_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.ReceiveBeginPlay
struct ABP_BlenderBowl_C_ReceiveBeginPlay_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.InteractIncrement
struct ABP_BlenderBowl_C_InteractIncrement_Params
{
	TScriptInterface<class UBPI_GenericInteractor_C>*  Interactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UBPI_GenericInteractable_C>* Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.ChangeLeversEvent
struct ABP_BlenderBowl_C_ChangeLeversEvent_Params
{
	bool*                                              Left_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.EnableBlenderBowlEvent
struct ABP_BlenderBowl_C_EnableBlenderBowlEvent_Params
{
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.StartHydraulicPress
struct ABP_BlenderBowl_C_StartHydraulicPress_Params
{
	int*                                               Code;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BlenderBowlComputerEvent
struct ABP_BlenderBowl_C_BlenderBowlComputerEvent_Params
{
	struct FString*                                    Zeds_Whipped;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.SoundVfxEvent
struct ABP_BlenderBowl_C_SoundVfxEvent_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.PuzzleCompleted
struct ABP_BlenderBowl_C_PuzzleCompleted_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.FanTimer
struct ABP_BlenderBowl_C_FanTimer_Params
{
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_BlenderBowl_C_BndEvt__ST_MixerSpoon_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct ABP_BlenderBowl_C_BndEvt__ST_MixerSpoon1_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BlenderBowl_C_BndEvt__KillZedSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BlenderBowl.BP_BlenderBowl_C.ExecuteUbergraph_BP_BlenderBowl
struct ABP_BlenderBowl_C_ExecuteUbergraph_BP_BlenderBowl_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

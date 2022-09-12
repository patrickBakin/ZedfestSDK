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

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ReceiveBeginPlay
struct ABP_ShreddingMachine_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.FanTimer
struct ABP_ShreddingMachine_C_FanTimer_Params
{
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.EnableShreddingMachineEvent
struct ABP_ShreddingMachine_C_EnableShreddingMachineEvent_Params
{
	bool*                                              Finished_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.SoundVfxEvent
struct ABP_ShreddingMachine_C_SoundVfxEvent_Params
{
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ShredMachineComputerEvent
struct ABP_ShreddingMachine_C_ShredMachineComputerEvent_Params
{
	struct FString*                                    Zeds_Shredded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ShreddingMachine_C_BndEvt__ShredderKillBox_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
struct ABP_ShreddingMachine_C_BndEvt__ShredderBlade_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ShreddingMachine_C_BndEvt__TeleportPlayerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShreddingMachine.BP_ShreddingMachine_C.ExecuteUbergraph_BP_ShreddingMachine
struct ABP_ShreddingMachine_C_ExecuteUbergraph_BP_ShreddingMachine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

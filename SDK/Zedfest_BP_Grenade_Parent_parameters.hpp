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

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.UserConstructionScript
struct ABP_Grenade_Parent_C_UserConstructionScript_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.Timeline_0__FinishedFunc
struct ABP_Grenade_Parent_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.Timeline_0__UpdateFunc
struct ABP_Grenade_Parent_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.Timeline_1__FinishedFunc
struct ABP_Grenade_Parent_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.Timeline_1__UpdateFunc
struct ABP_Grenade_Parent_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.ReceiveHit
struct ABP_Grenade_Parent_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.ReceiveBeginPlay
struct ABP_Grenade_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Grenade_Parent_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Grenade_Parent.BP_Grenade_Parent_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
struct ABP_Grenade_Parent_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

<<<<<<< HEAD
// Function BP_Grenade_Parent.BP_Grenade_Parent_C.DeflectSoundEvent
struct ABP_Grenade_Parent_C_DeflectSoundEvent_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Grenade_Parent.BP_Grenade_Parent_C.ExecuteUbergraph_BP_Grenade_Parent
struct ABP_Grenade_Parent_C_ExecuteUbergraph_BP_Grenade_Parent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

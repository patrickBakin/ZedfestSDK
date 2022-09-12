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

// Function BP_NPC_Base.BP_NPC_Base_C.PerformMultiMeleeAttack
struct ABP_NPC_Base_C_PerformMultiMeleeAttack_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.DamageSystem
struct ABP_NPC_Base_C_DamageSystem_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnRep_Health
struct ABP_NPC_Base_C_OnRep_Health_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformRangedAttack
struct ABP_NPC_Base_C_PerformRangedAttack_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformMeleeAttack
struct ABP_NPC_Base_C_PerformMeleeAttack_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__FinishedFunc
struct ABP_NPC_Base_C_Timeline_Parkour__FinishedFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour__UpdateFunc
struct ABP_NPC_Base_C_Timeline_Parkour__UpdateFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__FinishedFunc
struct ABP_NPC_Base_C_Timeline_Parkour2__FinishedFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_Parkour2__UpdateFunc
struct ABP_NPC_Base_C_Timeline_Parkour2__UpdateFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__FinishedFunc
struct ABP_NPC_Base_C_Timeline_RotateTo__FinishedFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Timeline_RotateTo__UpdateFunc
struct ABP_NPC_Base_C_Timeline_RotateTo__UpdateFunc_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnMeleeAttack
struct ABP_NPC_Base_C_OnMeleeAttack_Params
{
	bool*                                              HitSuccess;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    HitCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnRangedAttack
struct ABP_NPC_Base_C_OnRangedAttack_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnDamaged
struct ABP_NPC_Base_C_OnDamaged_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnDeath
struct ABP_NPC_Base_C_OnDeath_Params
{
	bool*                                              Head_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnRagdoll
struct ABP_NPC_Base_C_OnRagdoll_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnParkour
struct ABP_NPC_Base_C_OnParkour_Params
{
	struct FVector*                                    TargetLoc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.OnRotateTo
struct ABP_NPC_Base_C_OnRotateTo_Params
{
	struct FRotator*                                   TargetRot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveBeginPlay
struct ABP_NPC_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.Nuked
struct ABP_NPC_Base_C_Nuked_Params
{
	class AActor**                                     Damage_Causer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.ReceivePointDamage
struct ABP_NPC_Base_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.Event_AI_DIE
struct ABP_NPC_Base_C_Event_AI_DIE_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.ReceiveRadialDamage
struct ABP_NPC_Base_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.EventZedOutline
struct ABP_NPC_Base_C_EventZedOutline_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage
struct ABP_NPC_Base_C_PerformSpecialDamage_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage2
struct ABP_NPC_Base_C_PerformSpecialDamage2_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.CustomMeleeAttack
struct ABP_NPC_Base_C_CustomMeleeAttack_Params
{
	float*                                             AnimTimeLeft;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage3
struct ABP_NPC_Base_C_PerformSpecialDamage3_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.ClientGravity
struct ABP_NPC_Base_C_ClientGravity_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage4
struct ABP_NPC_Base_C_PerformSpecialDamage4_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.PerformSpecialDamage1
struct ABP_NPC_Base_C_PerformSpecialDamage1_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.FlameThrowerEvent
struct ABP_NPC_Base_C_FlameThrowerEvent_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

<<<<<<< HEAD
// Function BP_NPC_Base.BP_NPC_Base_C.StunZedEvent
struct ABP_NPC_Base_C_StunZedEvent_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.StunZedAnimEvent
struct ABP_NPC_Base_C_StunZedAnimEvent_Params
{
};

// Function BP_NPC_Base.BP_NPC_Base_C.StompGroundEvent
struct ABP_NPC_Base_C_StompGroundEvent_Params
{
};

=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_NPC_Base.BP_NPC_Base_C.ExecuteUbergraph_BP_NPC_Base
struct ABP_NPC_Base_C_ExecuteUbergraph_BP_NPC_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

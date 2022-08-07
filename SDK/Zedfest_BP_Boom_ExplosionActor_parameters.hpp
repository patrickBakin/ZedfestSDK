#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetStuck
struct ABP_Boom_ExplosionActor_C_GetStuck_Params
{
	bool                                               Stuck_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetState
struct ABP_Boom_ExplosionActor_C_GetState_Params
{
	bool                                               GetState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.AdjustRotation
struct ABP_Boom_ExplosionActor_C_AdjustRotation_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.RunHitDetection
struct ABP_Boom_ExplosionActor_C_RunHitDetection_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SpawnClusters
struct ABP_Boom_ExplosionActor_C_SpawnClusters_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ArmExplosive
struct ABP_Boom_ExplosionActor_C_ArmExplosive_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetHitResults
struct ABP_Boom_ExplosionActor_C_GetHitResults_Params
{
	TArray<struct FVector>                             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              IsSimple;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percentile;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Simple
struct ABP_Boom_ExplosionActor_C_ObstructionCheck_Simple_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitMade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-Bones
struct ABP_Boom_ExplosionActor_C_ObstructionCheck_Bones_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSimpleTrace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitMade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percentile;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ObstructionCheck-SevenPoint
struct ABP_Boom_ExplosionActor_C_ObstructionCheck_SevenPoint_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSimpleTrace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitMade;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Percentile;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessHit
struct ABP_Boom_ExplosionActor_C_ProcessHit_Params
{
	class AActor**                                     ActorHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetStickyObject
struct ABP_Boom_ExplosionActor_C_SetStickyObject_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.InitializeProjectile
struct ABP_Boom_ExplosionActor_C_InitializeProjectile_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateProxyTrigger
struct ABP_Boom_ExplosionActor_C_ActivateProxyTrigger_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ProcessProxyTrigger
struct ABP_Boom_ExplosionActor_C_ProcessProxyTrigger_Params
{
	class AActor**                                     OverlappingActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceExplosion;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.CheckOwnerProximity
struct ABP_Boom_ExplosionActor_C_CheckOwnerProximity_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetAdjustedDamage
struct ABP_Boom_ExplosionActor_C_GetAdjustedDamage_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageSounds
struct ABP_Boom_ExplosionActor_C_ManageSounds_Params
{
	class USoundBase**                                 NewSound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FadeOut_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FadeIn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation**                          Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetMassImpact
struct ABP_Boom_ExplosionActor_C_GetMassImpact_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.GetExplosionForce
struct ABP_Boom_ExplosionActor_C_GetExplosionForce_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActorDelayed
struct ABP_Boom_ExplosionActor_C_ExplodeActorDelayed_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SelfDamageLoop
struct ABP_Boom_ExplosionActor_C_SelfDamageLoop_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManageParticles
struct ABP_Boom_ExplosionActor_C_ManageParticles_Params
{
	class UParticleSystem**                            ParticleEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DelayParticle_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplodeActor
struct ABP_Boom_ExplosionActor_C_ExplodeActor_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DamageActor
struct ABP_Boom_ExplosionActor_C_DamageActor_Params
{
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.UserConstructionScript
struct ABP_Boom_ExplosionActor_C_UserConstructionScript_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateParticles
struct ABP_Boom_ExplosionActor_C_ManipulateParticles_Params
{
	class UParticleSystem**                            ParticleEffect;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DelayParticle_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ManipulateSounds
struct ABP_Boom_ExplosionActor_C_ManipulateSounds_Params
{
	class USoundBase**                                 NewSound;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FadeOut_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FadeIn_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation**                          Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveEndPlay
struct ABP_Boom_ExplosionActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveBeginPlay
struct ABP_Boom_ExplosionActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ForceTrigger
struct ABP_Boom_ExplosionActor_C_ForceTrigger_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveHit
struct ABP_Boom_ExplosionActor_C_ReceiveHit_Params
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

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ActivateSticky
struct ABP_Boom_ExplosionActor_C_ActivateSticky_Params
{
	class AActor**                                     ParentActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.SetOwningPawn
struct ABP_Boom_ExplosionActor_C_SetOwningPawn_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveTick
struct ABP_Boom_ExplosionActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelBody
struct ABP_Boom_ExplosionActor_C_PropelBody_Params
{
	class UPrimitiveComponent**                        Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.PropelCharacter
struct ABP_Boom_ExplosionActor_C_PropelCharacter_Params
{
	class ACharacter**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LaunchVelocity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosionEffects
struct ABP_Boom_ExplosionActor_C_ExplosionEffects_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Boom_ExplosionActor_C_BndEvt__ProximityCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ReceiveAnyDamage
struct ABP_Boom_ExplosionActor_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExplosiveActorDamage
struct ABP_Boom_ExplosionActor_C_ExplosiveActorDamage_Params
{
	float*                                             BaseDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.DelayExplosion
struct ABP_Boom_ExplosionActor_C_DelayExplosion_Params
{
};

// Function BP_Boom_ExplosionActor.BP_Boom_ExplosionActor_C.ExecuteUbergraph_BP_Boom_ExplosionActor
struct ABP_Boom_ExplosionActor_C_ExecuteUbergraph_BP_Boom_ExplosionActor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

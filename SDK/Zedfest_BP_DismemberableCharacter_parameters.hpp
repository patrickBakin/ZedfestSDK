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

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.F_GetHitResult
struct ABP_DismemberableCharacter_C_F_GetHitResult_Params
{
	class UPrimitiveComponent**                        Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               CanRagdol_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              BodyVelocity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.SetupGibMaterials
struct ABP_DismemberableCharacter_C_SetupGibMaterials_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.IncreaseBloodLevel
struct ABP_DismemberableCharacter_C_IncreaseBloodLevel_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.InitialiseBoneRotations
struct ABP_DismemberableCharacter_C_InitialiseBoneRotations_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandlePhysicsHit
struct ABP_DismemberableCharacter_C_HandlePhysicsHit_Params
{
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HitByOther;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamage
struct ABP_DismemberableCharacter_C_HandleRadialDamage_Params
{
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.Dismember
struct ABP_DismemberableCharacter_C_Dismember_Params
{
	struct FDismemberInfo*                             DismemberInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Radial_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleDamage
struct ABP_DismemberableCharacter_C_HandleDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      HitBone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Radial_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.FindDismemberInfo
struct ABP_DismemberableCharacter_C_FindDismemberInfo_Params
{
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDismemberInfo                              DismemberInfo;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__FinishedFunc
struct ABP_DismemberableCharacter_C_CullTimeline__FinishedFunc_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.CullTimeline__UpdateFunc
struct ABP_DismemberableCharacter_C_CullTimeline__UpdateFunc_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceivePointDamage
struct ABP_DismemberableCharacter_C_ReceivePointDamage_Params
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

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.DismemberLimbMulticast
struct ABP_DismemberableCharacter_C_DismemberLimbMulticast_Params
{
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      HitBone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveBeginPlay
struct ABP_DismemberableCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveHit
struct ABP_DismemberableCharacter_C_ReceiveHit_Params
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

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.LimbCulling
struct ABP_DismemberableCharacter_C_LimbCulling_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ReceiveAnyDamage
struct ABP_DismemberableCharacter_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.BP_NPC_Ref
struct ABP_DismemberableCharacter_C_BP_NPC_Ref_Params
{
	class ABP_NPC_Base_C**                             BPNPCRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.EventDismember
struct ABP_DismemberableCharacter_C_EventDismember_Params
{
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.HandleRadialDamageMulticast
struct ABP_DismemberableCharacter_C_HandleRadialDamageMulticast_Params
{
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.RadialDismemberLimb
struct ABP_DismemberableCharacter_C_RadialDismemberLimb_Params
{
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      HitBone;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DismemberableCharacter.BP_DismemberableCharacter_C.ExecuteUbergraph_BP_DismemberableCharacter
struct ABP_DismemberableCharacter_C_ExecuteUbergraph_BP_DismemberableCharacter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

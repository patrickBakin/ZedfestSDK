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

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_Mesh
struct AMeleeWeaponBase_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentWeapon
struct AMeleeWeaponBase_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirection
struct AMeleeWeaponBase_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsDead
struct AMeleeWeaponBase_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCrouching
struct AMeleeWeaponBase_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsJumping
struct AMeleeWeaponBase_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsPlayAnim
struct AMeleeWeaponBase_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_PitchAndYaw
struct AMeleeWeaponBase_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_DeathAnimNumber
struct AMeleeWeaponBase_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsSprinting
struct AMeleeWeaponBase_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_HasCharWeaponsComponent
struct AMeleeWeaponBase_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CharacterWeaponsComponent
struct AMeleeWeaponBase_C_GetChar_CharacterWeaponsComponent_Params
{
<<<<<<< HEAD
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
=======
	class UAC_CharacterWeapons_C*                      CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_GetHUD
struct AMeleeWeaponBase_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentCamera
struct AMeleeWeaponBase_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCloaked
struct AMeleeWeaponBase_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentHealth
struct AMeleeWeaponBase_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsZooming
struct AMeleeWeaponBase_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirectionClient
struct AMeleeWeaponBase_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponIntFunction
struct AMeleeWeaponBase_C_WeaponIntFunction_Params
{
	int*                                               WeaponIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       WeaponsBoughtArray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              Free_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              WeaponUpgradeArray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.RechargeMeleeWeapon
struct AMeleeWeaponBase_C_RechargeMeleeWeapon_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.FS_TryToApplyDamage
struct AMeleeWeaponBase_C_FS_TryToApplyDamage_Params
{
	class AActor**                                     HitActor_L;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CanHitActor
struct AMeleeWeaponBase_C_F_CanHitActor_Params
{
	class AActor**                                     HitActor_L;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Was_Hit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_UpdateMeleeBoxesLocations
struct AMeleeWeaponBase_C_F_UpdateMeleeBoxesLocations_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_SaveMeleeTraceBoxesLocations
struct AMeleeWeaponBase_C_F_SaveMeleeTraceBoxesLocations_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateMeleeBoxesSpawnOffset
struct AMeleeWeaponBase_C_F_CalculateMeleeBoxesSpawnOffset_Params
{
	int*                                               Loop_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateOffsetBetweenMeleeBoxes
struct AMeleeWeaponBase_C_F_CalculateOffsetBetweenMeleeBoxes_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.F_GenerateMeleeTraceBoxes
struct AMeleeWeaponBase_C_F_GenerateMeleeTraceBoxes_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.UserConstructionScript
struct AMeleeWeaponBase_C_UserConstructionScript_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__FinishedFunc
struct AMeleeWeaponBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__UpdateFunc
struct AMeleeWeaponBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.PC_SetHUD
struct AMeleeWeaponBase_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.PC_CharInitialization
struct AMeleeWeaponBase_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_RefreshWeaponInHUD
struct AMeleeWeaponBase_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_Recoil
struct AMeleeWeaponBase_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.AnimBP_AnimationRequest
struct AMeleeWeaponBase_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.AmmoPickup
struct AMeleeWeaponBase_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_SetWeaponToInteract
struct AMeleeWeaponBase_C_WPN_SetWeaponToInteract_Params
{
<<<<<<< HEAD
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	class ABPA_ParentWeapon_C**                        WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_SwitchCamera
struct AMeleeWeaponBase_C_CWC_SwitchCamera_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_CantShoot
struct AMeleeWeaponBase_C_WPN_CantShoot_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ArmorPickupInterface
struct AMeleeWeaponBase_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StopMeleeTrace
struct AMeleeWeaponBase_C_StopMeleeTrace_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StartUseWeapon
struct AMeleeWeaponBase_C_StartUseWeapon_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StopUseWeapon
struct AMeleeWeaponBase_C_StopUseWeapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ReceiveBeginPlay
struct AMeleeWeaponBase_C_ReceiveBeginPlay_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.EA_WeaponSwing
struct AMeleeWeaponBase_C_EA_WeaponSwing_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.AttackEvent
struct AMeleeWeaponBase_C_AttackEvent_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ServerWeaponEffects
struct AMeleeWeaponBase_C_ServerWeaponEffects_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SkelMeshHit_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.MulticastWeaponEffects
struct AMeleeWeaponBase_C_MulticastWeaponEffects_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StartReload
struct AMeleeWeaponBase_C_StartReload_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.EventPlaySpecialAnim
struct AMeleeWeaponBase_C_EventPlaySpecialAnim_Params
{
	class UAnimMontage**                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StartZoom
struct AMeleeWeaponBase_C_StartZoom_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.MultiCastEquipMeleeSound
struct AMeleeWeaponBase_C_MultiCastEquipMeleeSound_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.EquipSound
struct AMeleeWeaponBase_C_EquipSound_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponTimerTick
struct AMeleeWeaponBase_C_WeaponTimerTick_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.CustomEvent
struct AMeleeWeaponBase_C_CustomEvent_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StopZoom
struct AMeleeWeaponBase_C_StopZoom_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StopSprintFromMeleeWeapon
struct AMeleeWeaponBase_C_StopSprintFromMeleeWeapon_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.StartMeleeWeaponRechargeTimerEvent
struct AMeleeWeaponBase_C_StartMeleeWeaponRechargeTimerEvent_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.SetRechargeBarVisibility
struct AMeleeWeaponBase_C_SetRechargeBarVisibility_Params
{
	bool*                                              Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.EventSetCanDoSpecialAnim
struct AMeleeWeaponBase_C_EventSetCanDoSpecialAnim_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ExecuteUbergraph_MeleeWeaponBase
struct AMeleeWeaponBase_C_ExecuteUbergraph_MeleeWeaponBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ChildStop__DelegateSignature
struct AMeleeWeaponBase_C_ChildStop__DelegateSignature_Params
{
};

// Function MeleeWeaponBase.MeleeWeaponBase_C.ChildUse__DelegateSignature
struct AMeleeWeaponBase_C_ChildUse__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

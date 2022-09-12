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

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_Mesh
struct AWeaponFirearmBase_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentWeapon
struct AWeaponFirearmBase_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirection
struct AWeaponFirearmBase_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsDead
struct AWeaponFirearmBase_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCrouching
struct AWeaponFirearmBase_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsJumping
struct AWeaponFirearmBase_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsPlayAnim
struct AWeaponFirearmBase_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_PitchAndYaw
struct AWeaponFirearmBase_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_DeathAnimNumber
struct AWeaponFirearmBase_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsSprinting
struct AWeaponFirearmBase_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_HasCharWeaponsComponent
struct AWeaponFirearmBase_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CharacterWeaponsComponent
struct AWeaponFirearmBase_C_GetChar_CharacterWeaponsComponent_Params
{
<<<<<<< HEAD
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
=======
	class UAC_CharacterWeapons_C*                      CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_GetHUD
struct AWeaponFirearmBase_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentCamera
struct AWeaponFirearmBase_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCloaked
struct AWeaponFirearmBase_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentHealth
struct AWeaponFirearmBase_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsZooming
struct AWeaponFirearmBase_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirectionClient
struct AWeaponFirearmBase_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponIntFunction
struct AWeaponFirearmBase_C_WeaponIntFunction_Params
{
	int*                                               WeaponIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       WeaponsBoughtArray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              Free_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              WeaponUpgradeArray;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATimeTimer
struct AWeaponFirearmBase_C_ReloadOneBulletAtATimeTimer_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire HealingGun
struct AWeaponFirearmBase_C_Can_Fire_HealingGun_Params
{
	bool                                               Can_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Fire HealingGun
struct AWeaponFirearmBase_C_Fire_HealingGun_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.CalcFinalDirection
struct AWeaponFirearmBase_C_CalcFinalDirection_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.CalculateMainDirection
struct AWeaponFirearmBase_C_CalculateMainDirection_Params
{
	class USceneComponent**                            SkeletalMeshTarget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Stop Reload Weapon
struct AWeaponFirearmBase_C_Stop_Reload_Weapon_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATime
struct AWeaponFirearmBase_C_ReloadOneBulletAtATime_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Reload Weapon
struct AWeaponFirearmBase_C_Reload_Weapon_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadAllBulletsAtOnce
struct AWeaponFirearmBase_C_ReloadAllBulletsAtOnce_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Fire Weapon
struct AWeaponFirearmBase_C_Fire_Weapon_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Reload
struct AWeaponFirearmBase_C_Can_Reload_Params
{
	bool                                               Can_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire
struct AWeaponFirearmBase_C_Can_Fire_Params
{
	bool                                               Can_;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Set Ammo In Gun
struct AWeaponFirearmBase_C_Set_Ammo_In_Gun_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Get Current Ammo In Gun
struct AWeaponFirearmBase_C_Get_Current_Ammo_In_Gun_Params
{
	int                                                Current_Ammo_in_Gun;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Decrease Ammo in Gun
struct AWeaponFirearmBase_C_Decrease_Ammo_in_Gun_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Increase Ammo in Gun
struct AWeaponFirearmBase_C_Increase_Ammo_in_Gun_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_2__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_2__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_3__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_3__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_4__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_4__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_5__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_5__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_6__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_6__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_7__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_7__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_8__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_8__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__FinishedFunc
struct AWeaponFirearmBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__UpdateFunc
struct AWeaponFirearmBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.PC_SetHUD
struct AWeaponFirearmBase_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.PC_CharInitialization
struct AWeaponFirearmBase_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_RefreshWeaponInHUD
struct AWeaponFirearmBase_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_Recoil
struct AWeaponFirearmBase_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.AnimBP_AnimationRequest
struct AWeaponFirearmBase_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.AmmoPickup
struct AWeaponFirearmBase_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_SetWeaponToInteract
struct AWeaponFirearmBase_C_WPN_SetWeaponToInteract_Params
{
<<<<<<< HEAD
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	class ABPA_ParentWeapon_C**                        WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_SwitchCamera
struct AWeaponFirearmBase_C_CWC_SwitchCamera_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_CantShoot
struct AWeaponFirearmBase_C_WPN_CantShoot_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ArmorPickupInterface
struct AWeaponFirearmBase_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopMeleeTrace
struct AWeaponFirearmBase_C_StopMeleeTrace_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ReceiveBeginPlay
struct AWeaponFirearmBase_C_ReceiveBeginPlay_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StartUseWeapon
struct AWeaponFirearmBase_C_StartUseWeapon_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopUseWeapon
struct AWeaponFirearmBase_C_StopUseWeapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StartReload
struct AWeaponFirearmBase_C_StartReload_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopReload
struct AWeaponFirearmBase_C_StopReload_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerWeaponEffects
struct AWeaponFirearmBase_C_ServerWeaponEffects_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.MulticastWeaponEffects
struct AWeaponFirearmBase_C_MulticastWeaponEffects_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerPlayReloadSound
struct AWeaponFirearmBase_C_ServerPlayReloadSound_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastPlayReloadSound
struct AWeaponFirearmBase_C_MultiCastPlayReloadSound_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.EquipSound
struct AWeaponFirearmBase_C_EquipSound_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastEquipSound
struct AWeaponFirearmBase_C_MultiCastEquipSound_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.EventSetWeaponIsCloaked
struct AWeaponFirearmBase_C_EventSetWeaponIsCloaked_Params
{
	bool*                                              Cloak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.AttachSecondWeapon
struct AWeaponFirearmBase_C_AttachSecondWeapon_Params
{
	bool*                                              Attach_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopReloadW
struct AWeaponFirearmBase_C_StopReloadW_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponTimerTick
struct AWeaponFirearmBase_C_WeaponTimerTick_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerHealingEffects
struct AWeaponFirearmBase_C_ServerHealingEffects_Params
{
	struct FVector*                                    EndLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ResetFireSound
struct AWeaponFirearmBase_C_ResetFireSound_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StartZoom
struct AWeaponFirearmBase_C_StartZoom_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopZoom
struct AWeaponFirearmBase_C_StopZoom_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StartWeaponReloadTimerEvent
struct AWeaponFirearmBase_C_StartWeaponReloadTimerEvent_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarPercentEvent
struct AWeaponFirearmBase_C_SetReloadBarPercentEvent_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarVisibility
struct AWeaponFirearmBase_C_SetReloadBarVisibility_Params
{
	bool*                                              Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.HealTargetAndSelfEvent
struct AWeaponFirearmBase_C_HealTargetAndSelfEvent_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Weapon Recoil
struct AWeaponFirearmBase_C_Weapon_Recoil_Params
{
	float*                                             Vertical_Recoil;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Horizontal_Recoil;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Gremadeweapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopWeaponSounds
struct AWeaponFirearmBase_C_StopWeaponSounds_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ShootAfterReload
struct AWeaponFirearmBase_C_ShootAfterReload_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponShootSpeed
struct AWeaponFirearmBase_C_WeaponShootSpeed_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ClearVisuals
struct AWeaponFirearmBase_C_ClearVisuals_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.Reset
struct AWeaponFirearmBase_C_Reset_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponEffects
struct AWeaponFirearmBase_C_WeaponEffects_Params
{
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StopStartPlasmaGun
struct AWeaponFirearmBase_C_StopStartPlasmaGun_Params
{
	bool*                                              Start_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.StartstopWeaponAnim1
struct AWeaponFirearmBase_C_StartstopWeaponAnim1_Params
{
	bool*                                              Start_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponFirearmBase.WeaponFirearmBase_C.ExecuteUbergraph_WeaponFirearmBase
struct AWeaponFirearmBase_C_ExecuteUbergraph_WeaponFirearmBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

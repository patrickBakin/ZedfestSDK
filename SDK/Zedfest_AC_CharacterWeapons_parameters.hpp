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

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_Mesh
struct UAC_CharacterWeapons_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_CurrentWeapon
struct UAC_CharacterWeapons_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_SpeedAndDirection
struct UAC_CharacterWeapons_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsDead
struct UAC_CharacterWeapons_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsCrouching
struct UAC_CharacterWeapons_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsJumping
struct UAC_CharacterWeapons_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsPlayAnim
struct UAC_CharacterWeapons_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_PitchAndYaw
struct UAC_CharacterWeapons_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_DeathAnimNumber
struct UAC_CharacterWeapons_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsSprinting
struct UAC_CharacterWeapons_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_HasCharWeaponsComponent
struct UAC_CharacterWeapons_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_CharacterWeaponsComponent
struct UAC_CharacterWeapons_C_GetChar_CharacterWeaponsComponent_Params
{
	class UAC_CharacterWeapons_C*                      CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CWC_GetHUD
struct UAC_CharacterWeapons_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_CurrentCamera
struct UAC_CharacterWeapons_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsCloaked
struct UAC_CharacterWeapons_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_CurrentHealth
struct UAC_CharacterWeapons_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_IsZooming
struct UAC_CharacterWeapons_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetChar_SpeedAndDirectionClient
struct UAC_CharacterWeapons_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.EquipAnimationRequest
struct UAC_CharacterWeapons_C_EquipAnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.UnEquipAnimationRequest
struct UAC_CharacterWeapons_C_UnEquipAnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CheckWeaponType
struct UAC_CharacterWeapons_C_CheckWeaponType_Params
{
	class ABPA_ParentWeapon_C**                        PickedWeapon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPickup;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.GetZoom
struct UAC_CharacterWeapons_C_GetZoom_Params
{
	int*                                               CurrentZoom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentZoomIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.HasZoom?
struct UAC_CharacterWeapons_C_HasZoom__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.SwitchFireMode
struct UAC_CharacterWeapons_C_SwitchFireMode_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.Fire
struct UAC_CharacterWeapons_C_Fire_Params
{
	bool*                                              Fire;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.Reload
struct UAC_CharacterWeapons_C_Reload_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.SwitchWeapon
struct UAC_CharacterWeapons_C_SwitchWeapon_Params
{
	int*                                               SwitchToWeaponIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CloakAllWeapons
struct UAC_CharacterWeapons_C_CloakAllWeapons_Params
{
	bool*                                              Cloak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.StopMeleeTrace
struct UAC_CharacterWeapons_C_StopMeleeTrace_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.ArmorPickupInterface
struct UAC_CharacterWeapons_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.HolsterWeapon
struct UAC_CharacterWeapons_C_HolsterWeapon_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.WPN_CantShoot
struct UAC_CharacterWeapons_C_WPN_CantShoot_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CWC_SwitchCamera
struct UAC_CharacterWeapons_C_CWC_SwitchCamera_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.WPN_SetWeaponToInteract
struct UAC_CharacterWeapons_C_WPN_SetWeaponToInteract_Params
{
	class ABPA_ParentWeapon_C**                        WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.AmmoPickup
struct UAC_CharacterWeapons_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.AnimBP_AnimationRequest
struct UAC_CharacterWeapons_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.WPN_Recoil
struct UAC_CharacterWeapons_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CWC_RefreshWeaponInHUD
struct UAC_CharacterWeapons_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.PC_CharInitialization
struct UAC_CharacterWeapons_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.PC_SetHUD
struct UAC_CharacterWeapons_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.UpdateWeaponInLocalHUD
struct UAC_CharacterWeapons_C_UpdateWeaponInLocalHUD_Params
{
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.CyclingWeapons
struct UAC_CharacterWeapons_C_CyclingWeapons_Params
{
	bool*                                              Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.SpawnWeapons
struct UAC_CharacterWeapons_C_SpawnWeapons_Params
{
	class ABP_Pawn_C**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AC_CharacterWeapons.AC_CharacterWeapons_C.ExecuteUbergraph_AC_CharacterWeapons
struct UAC_CharacterWeapons_C_ExecuteUbergraph_AC_CharacterWeapons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

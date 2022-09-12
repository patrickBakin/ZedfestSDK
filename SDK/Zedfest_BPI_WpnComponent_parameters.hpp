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

// Function BPI_WpnComponent.BPI_WpnComponent_C.StopMeleeTrace
struct UBPI_WpnComponent_C_StopMeleeTrace_Params
{
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirectionClient
struct UBPI_WpnComponent_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.ArmorPickupInterface
struct UBPI_WpnComponent_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsZooming
struct UBPI_WpnComponent_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_CantShoot
struct UBPI_WpnComponent_C_WPN_CantShoot_Params
{
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_SwitchCamera
struct UBPI_WpnComponent_C_CWC_SwitchCamera_Params
{
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_SetWeaponToInteract
struct UBPI_WpnComponent_C_WPN_SetWeaponToInteract_Params
{
<<<<<<< HEAD
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	class ABPA_ParentWeapon_C**                        WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentHealth
struct UBPI_WpnComponent_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.AmmoPickup
struct UBPI_WpnComponent_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCloaked
struct UBPI_WpnComponent_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentCamera
struct UBPI_WpnComponent_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_GetHUD
struct UBPI_WpnComponent_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CharacterWeaponsComponent
struct UBPI_WpnComponent_C_GetChar_CharacterWeaponsComponent_Params
{
<<<<<<< HEAD
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
=======
	class UAC_CharacterWeapons_C*                      CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.AnimBP_AnimationRequest
struct UBPI_WpnComponent_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_HasCharWeaponsComponent
struct UBPI_WpnComponent_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsSprinting
struct UBPI_WpnComponent_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_DeathAnimNumber
struct UBPI_WpnComponent_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_PitchAndYaw
struct UBPI_WpnComponent_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsPlayAnim
struct UBPI_WpnComponent_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsJumping
struct UBPI_WpnComponent_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCrouching
struct UBPI_WpnComponent_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsDead
struct UBPI_WpnComponent_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirection
struct UBPI_WpnComponent_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentWeapon
struct UBPI_WpnComponent_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_Mesh
struct UBPI_WpnComponent_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_Recoil
struct UBPI_WpnComponent_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_RefreshWeaponInHUD
struct UBPI_WpnComponent_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.PC_CharInitialization
struct UBPI_WpnComponent_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_WpnComponent.BPI_WpnComponent_C.PC_SetHUD
struct UBPI_WpnComponent_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

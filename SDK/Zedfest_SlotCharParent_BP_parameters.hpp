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

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_Mesh
struct ASlotCharParent_BP_C_GetChar_Mesh_Params
{
	class USkeletalMeshComponent*                      SkMesh;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_CurrentWeapon
struct ASlotCharParent_BP_C_GetChar_CurrentWeapon_Params
{
	class AWeaponFirearmBase_C*                        CurrentWeaponReference;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_SpeedAndDirection
struct ASlotCharParent_BP_C_GetChar_SpeedAndDirection_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsDead
struct ASlotCharParent_BP_C_GetChar_IsDead_Params
{
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsCrouching
struct ASlotCharParent_BP_C_GetChar_IsCrouching_Params
{
	bool                                               IsCrouching;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsJumping
struct ASlotCharParent_BP_C_GetChar_IsJumping_Params
{
	bool                                               IsJumping;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsPlayAnim
struct ASlotCharParent_BP_C_GetChar_IsPlayAnim_Params
{
	bool                                               IsPlayAnim;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_PitchAndYaw
struct ASlotCharParent_BP_C_GetChar_PitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_DeathAnimNumber
struct ASlotCharParent_BP_C_GetChar_DeathAnimNumber_Params
{
	int                                                NumberOfDeathAnim;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsSprinting
struct ASlotCharParent_BP_C_GetChar_IsSprinting_Params
{
	bool                                               IsSprinting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_HasCharWeaponsComponent
struct ASlotCharParent_BP_C_GetChar_HasCharWeaponsComponent_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_CharacterWeaponsComponent
struct ASlotCharParent_BP_C_GetChar_CharacterWeaponsComponent_Params
{
	int                                                CWC_Reference;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.CWC_GetHUD
struct ASlotCharParent_BP_C_CWC_GetHUD_Params
{
	class UW_WpnCompHUD_C*                             HUD_Reference;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_CurrentCamera
struct ASlotCharParent_BP_C_GetChar_CurrentCamera_Params
{
	class UCameraComponent*                            CurrentCamera;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WeaponCamActive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsCloaked
struct ASlotCharParent_BP_C_GetChar_IsCloaked_Params
{
	bool                                               Cloak;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_CurrentHealth
struct ASlotCharParent_BP_C_GetChar_CurrentHealth_Params
{
	float                                              CurrentHP;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_IsZooming
struct ASlotCharParent_BP_C_GetChar_IsZooming_Params
{
	bool                                               Zoom;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.GetChar_SpeedAndDirectionClient
struct ASlotCharParent_BP_C_GetChar_SpeedAndDirectionClient_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.PC_SetHUD
struct ASlotCharParent_BP_C_PC_SetHUD_Params
{
	class UW_WpnCompHUD_C**                            HUD_Reference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.PC_CharInitialization
struct ASlotCharParent_BP_C_PC_CharInitialization_Params
{
	class ABP_Base_HordeController_C**                 PCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UW_WpnCompHUD_C**                            WPNHUD;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.CWC_RefreshWeaponInHUD
struct ASlotCharParent_BP_C_CWC_RefreshWeaponInHUD_Params
{
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.WPN_Recoil
struct ASlotCharParent_BP_C_WPN_Recoil_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.AmmoPickup
struct ASlotCharParent_BP_C_AmmoPickup_Params
{
	TEnumAsByte<E_AddAmmoTypes>*                       Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountAmmo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponTypes>*                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ProjectileType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.WPN_SetWeaponToInteract
struct ASlotCharParent_BP_C_WPN_SetWeaponToInteract_Params
{
	int*                                               WeaponReference;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AutoPickUp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.CWC_SwitchCamera
struct ASlotCharParent_BP_C_CWC_SwitchCamera_Params
{
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.WPN_CantShoot
struct ASlotCharParent_BP_C_WPN_CantShoot_Params
{
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.ArmorPickupInterface
struct ASlotCharParent_BP_C_ArmorPickupInterface_Params
{
	class ABP_RubberArmor_C**                          PickupRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Autopickup_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.StopMeleeTrace
struct ASlotCharParent_BP_C_StopMeleeTrace_Params
{
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.ReceiveBeginPlay
struct ASlotCharParent_BP_C_ReceiveBeginPlay_Params
{
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetSkeletalMeshes
struct ASlotCharParent_BP_C_MenuSetSkeletalMeshes_Params
{
	class USkeletalMesh**                              Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bought_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.AnimBP_AnimationRequest
struct ASlotCharParent_BP_C_AnimBP_AnimationRequest_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetMainWeapon
struct ASlotCharParent_BP_C_MenuSetMainWeapon_Params
{
	class UClass**                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetWeaponSkin
struct ASlotCharParent_BP_C_MenuSetWeaponSkin_Params
{
	class UMaterialInstance**                          SkinMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bought_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetWeaponSkin1
struct ASlotCharParent_BP_C_MenuSetWeaponSkin1_Params
{
	class UMaterialInstance**                          SkinMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Bought_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetEmoteAnimMontage
struct ASlotCharParent_BP_C_MenuSetEmoteAnimMontage_Params
{
	class UAnimMontage**                               AnimMontage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.MenuSetMeleePreviewWeapon
struct ASlotCharParent_BP_C_MenuSetMeleePreviewWeapon_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SlotCharParent_BP.SlotCharParent_BP_C.ExecuteUbergraph_SlotCharParent_BP
struct ASlotCharParent_BP_C_ExecuteUbergraph_SlotCharParent_BP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

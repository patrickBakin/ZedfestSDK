#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_WpnComponent.BPI_WpnComponent_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_WpnComponent_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_WpnComponent.BPI_WpnComponent_C");
		return ptr;
	}


	void StopMeleeTrace();
	void GetChar_SpeedAndDirectionClient(float* Speed, float* Direction);
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void GetChar_IsZooming(bool* Zoom);
	void WPN_CantShoot();
	void CWC_SwitchCamera();
<<<<<<< HEAD
	void WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp);
=======
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void GetChar_CurrentHealth(float* CurrentHP);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void GetChar_IsCloaked(bool* Cloak);
	void GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive);
	void CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference);
<<<<<<< HEAD
	void GetChar_CharacterWeaponsComponent(int* CWC_Reference);
=======
	void GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void GetChar_HasCharWeaponsComponent(bool* Result);
	void GetChar_IsSprinting(bool* IsSprinting);
	void GetChar_DeathAnimNumber(int* NumberOfDeathAnim);
	void GetChar_PitchAndYaw(float* Pitch, float* Yaw);
	void GetChar_IsPlayAnim(bool* IsPlayAnim);
	void GetChar_IsJumping(bool* IsJumping);
	void GetChar_IsCrouching(bool* IsCrouching);
	void GetChar_IsDead(bool* IsDead);
	void GetChar_SpeedAndDirection(float* Speed, float* Direction);
	void GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference);
	void GetChar_Mesh(class USkeletalMeshComponent** SkMesh);
	void WPN_Recoil(float* Pitch, float* Yaw);
	void CWC_RefreshWeaponInHUD();
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

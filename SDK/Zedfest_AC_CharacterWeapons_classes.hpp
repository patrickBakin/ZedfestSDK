#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AC_CharacterWeapons.AC_CharacterWeapons_C
// 0x0070 (0x0168 - 0x00F8)
class UAC_CharacterWeapons_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CurrentWeaponIndex;                                       // 0x0100(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponIsLocked;                                           // 0x0104(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	class ABPA_ParentWeapon_C*                         CurrentWeaponReference;                                   // 0x0108(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABPA_ParentWeapon_C*>                 SpawnedWeapons;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FBPS_StoredWeapon>                   InitialWeapons;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HideWeaponsInHolster;                                     // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class ACharacter*                                  CharacterReference;                                       // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               L_HasSameWeapon;                                          // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                L_AmountAmmoToAdd;                                        // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisallowToPickSameWeaponType;                             // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                MaxWeaponLimit;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        WeaponIndexArray;                                         // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_Pawn_C*                                  CharRef2;                                                 // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AC_CharacterWeapons.AC_CharacterWeapons_C");
		return ptr;
	}


	void GetChar_Mesh(class USkeletalMeshComponent** SkMesh);
	void GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference);
	void GetChar_SpeedAndDirection(float* Speed, float* Direction);
	void GetChar_IsDead(bool* IsDead);
	void GetChar_IsCrouching(bool* IsCrouching);
	void GetChar_IsJumping(bool* IsJumping);
	void GetChar_IsPlayAnim(bool* IsPlayAnim);
	void GetChar_PitchAndYaw(float* Pitch, float* Yaw);
	void GetChar_DeathAnimNumber(int* NumberOfDeathAnim);
	void GetChar_IsSprinting(bool* IsSprinting);
	void GetChar_HasCharWeaponsComponent(bool* Result);
	void GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference);
	void CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive);
	void GetChar_IsCloaked(bool* Cloak);
	void GetChar_CurrentHealth(float* CurrentHP);
	void GetChar_IsZooming(bool* Zoom);
	void GetChar_SpeedAndDirectionClient(float* Speed, float* Direction);
	void EquipAnimationRequest(class UAnimMontage** Montage);
	void UnEquipAnimationRequest(class UAnimMontage** Montage);
	void CheckWeaponType(class ABPA_ParentWeapon_C** PickedWeapon, bool* CanPickup);
	float GetZoom(int* CurrentZoom, int* CurrentZoomIndex);
	bool HasZoom_();
	void SwitchFireMode();
	void Fire(bool* Fire);
	void Reload();
	void SwitchWeapon(int* SwitchToWeaponIndex);
	void CloakAllWeapons(bool* Cloak);
	void StopMeleeTrace();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void HolsterWeapon();
	void WPN_CantShoot();
	void CWC_SwitchCamera();
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void WPN_Recoil(float* Pitch, float* Yaw);
	void CWC_RefreshWeaponInHUD();
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void UpdateWeaponInLocalHUD();
	void CyclingWeapons(bool* Next);
	void SpawnWeapons(class ABP_Pawn_C** Character);
	void ExecuteUbergraph_AC_CharacterWeapons(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

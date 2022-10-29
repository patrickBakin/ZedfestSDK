#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlotCharParent_BP.SlotCharParent_BP_C
// 0x0018 (0x0768 - 0x0750)
class ASlotCharParent_BP_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AWeaponFirearmBase_C*                        SlotCharMainwpnREF;                                       // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMeleeWeaponBase_C*                          SlotCharMeleeWpnREF;                                      // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlotCharParent_BP.SlotCharParent_BP_C");
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
	void GetChar_CharacterWeaponsComponent(int* CWC_Reference);
	void CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive);
	void GetChar_IsCloaked(bool* Cloak);
	void GetChar_CurrentHealth(float* CurrentHP);
	void GetChar_IsZooming(bool* Zoom);
	void GetChar_SpeedAndDirectionClient(float* Speed, float* Direction);
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void CWC_RefreshWeaponInHUD();
	void WPN_Recoil(float* Pitch, float* Yaw);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp);
	void CWC_SwitchCamera();
	void WPN_CantShoot();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void StopMeleeTrace();
	void ReceiveBeginPlay();
	void MenuSetSkeletalMeshes(class USkeletalMesh** Mesh, bool* Bought_);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void MenuSetMainWeapon(class UClass** NewParam);
	void MenuSetWeaponSkin(class UMaterialInstance** SkinMaterial, bool* Bought_);
	void MenuSetWeaponSkin1(class UMaterialInstance** SkinMaterial, bool* Bought_);
	void MenuSetEmoteAnimMontage(class UAnimMontage** AnimMontage);
	void MenuSetMeleePreviewWeapon(class UClass** MeleeWeapon);
	void ExecuteUbergraph_SlotCharParent_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

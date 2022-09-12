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

// BlueprintGeneratedClass MeleeWeaponBase.MeleeWeaponBase_C
<<<<<<< HEAD
// 0x02A1 (0x0631 - 0x0390)
=======
// 0x029D (0x062D - 0x0390)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
class AMeleeWeaponBase_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TopMeleeTraceBox;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BottomMeleeTraceBox;                                      // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_30FB2D394B294A13CF9C089A8AB88B9D;   // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_30FB2D394B294A13CF9C089A8AB88B9D;   // 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMeleeWeaponData                            Melee_Weapon_Data;                                        // 0x03C8(0x00C0) (Edit, BlueprintVisible)
	class ACharacter*                                  OwnerCharacter;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  WeaponMateials;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              OffsetBetweenMeleeBoxes;                                  // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TracesPerSwing;                                           // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBoxComponent*>                       MeleeTraceBoxes;                                          // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             MeleeTracesStartLocations;                                // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              AlreadyHitActors;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              HitActors;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FHitResult                                  LastHit;                                                  // 0x04E8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HitActor_L;                                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMeleeSwing;                                             // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0579(0x0003) MISSED OFFSET
	float                                              UseRate;                                                  // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MissEmitterEffect;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitEmitterEffect;                                         // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHit_;                                                   // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0591(0x0007) MISSED OFFSET
	class UAnimMontage*                                SpecialAnimation;                                         // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ChildUse;                                                 // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChildStop;                                                // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  HoldLMBSound;                                             // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HitSTMeshSound;                                           // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HitCharSound;                                             // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        S;                                                        // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PlaySoundAndVfx;                                          // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutomaticHit_;                                            // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	class ABP_Horde_Gamestate_C*                       MeleeGameState;                                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                AnimArrayInt;                                             // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class ABP_Pawn_C*                                  BP_PawnRef;                                               // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // 0x0608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timer_To_Reload_Item;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RechargeTimerHandle;                                      // 0x0618(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RechargeLength;                                           // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanDoSpecialAnim_;                                        // 0x0624(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	int                                                WeaponInt1;                                               // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWeaponBought_;                                          // 0x062C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
<<<<<<< HEAD
	bool                                               Block_;                                                   // 0x062D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBlocking_;                                              // 0x062E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Parry_;                                                   // 0x062F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsZooming_;                                               // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeWeaponBase.MeleeWeaponBase_C");
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
<<<<<<< HEAD
	void GetChar_CharacterWeaponsComponent(int* CWC_Reference);
=======
	void GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive);
	void GetChar_IsCloaked(bool* Cloak);
	void GetChar_CurrentHealth(float* CurrentHP);
	void GetChar_IsZooming(bool* Zoom);
	void GetChar_SpeedAndDirectionClient(float* Speed, float* Direction);
	void WeaponIntFunction(int* WeaponIndex, bool* Free_, TArray<bool>* WeaponsBoughtArray, TArray<class UClass*>* WeaponUpgradeArray);
	void RechargeMeleeWeapon();
	void FS_TryToApplyDamage(class AActor** HitActor_L);
	void F_CanHitActor(class AActor** HitActor_L, bool* Was_Hit, bool* Hit);
	void F_UpdateMeleeBoxesLocations();
	void F_SaveMeleeTraceBoxesLocations();
	void F_CalculateMeleeBoxesSpawnOffset(int* Loop_Index, struct FTransform* SpawnLocation);
	void F_CalculateOffsetBetweenMeleeBoxes();
	void F_GenerateMeleeTraceBoxes();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void CWC_RefreshWeaponInHUD();
	void WPN_Recoil(float* Pitch, float* Yaw);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
<<<<<<< HEAD
	void WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp);
=======
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void CWC_SwitchCamera();
	void WPN_CantShoot();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void StopMeleeTrace();
	void StartUseWeapon();
	void StopUseWeapon(bool* IsShootWeapon_);
	void ReceiveBeginPlay();
	void EA_WeaponSwing();
	void AttackEvent();
	void ServerWeaponEffects(struct FVector* Location, bool* SkelMeshHit_, struct FRotator* Rotator);
	void MulticastWeaponEffects();
	void StartReload();
	void EventPlaySpecialAnim(class UAnimMontage** NewParam);
	void StartZoom();
	void MultiCastEquipMeleeSound();
	void EquipSound();
	void WeaponTimerTick();
	void CustomEvent();
	void StopZoom();
	void StopSprintFromMeleeWeapon();
	void StartMeleeWeaponRechargeTimerEvent();
	void SetRechargeBarVisibility(bool* Visible_);
	void EventSetCanDoSpecialAnim();
	void ExecuteUbergraph_MeleeWeaponBase(int* EntryPoint);
	void ChildStop__DelegateSignature();
	void ChildUse__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

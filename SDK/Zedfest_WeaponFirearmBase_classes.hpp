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

// BlueprintGeneratedClass WeaponFirearmBase.WeaponFirearmBase_C
// 0x03A2 (0x0732 - 0x0390)
class AWeaponFirearmBase_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             MinigunStop_Cue;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Silencer;                                                 // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_8_Horisontal_8015C52941078F5FBDAFA989CD691C5A;   // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_8_Vertical_8015C52941078F5FBDAFA989CD691C5A;     // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_8__Direction_8015C52941078F5FBDAFA989CD691C5A;   // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_9;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_7_NewTrack_0_78472CF743EAB3DC452A9DB36CAF0FF7;   // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_78472CF743EAB3DC452A9DB36CAF0FF7;   // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_6_Vertical_F357EDAE4240E7C4AE81BD930C45CC87;     // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_6__Direction_F357EDAE4240E7C4AE81BD930C45CC87;   // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_7;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_5_Vertical_85F496944F7E7B147AEB8C8AFFB75111;     // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_85F496944F7E7B147AEB8C8AFFB75111;   // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_4_Vertical_93807E84486FE7CDB6A07E92CC8C216A;     // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_93807E84486FE7CDB6A07E92CC8C216A;   // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_Horisontal_1D1249034C7D4321BEBED58121A763CE;   // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_Vertical_1D1249034C7D4321BEBED58121A763CE;     // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_1D1249034C7D4321BEBED58121A763CE;   // 0x0418(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_Horisontal_2FD344004174F3308658D18D7101B88C;   // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_Vertical_2FD344004174F3308658D18D7101B88C;     // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_2FD344004174F3308658D18D7101B88C;   // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_Horisontal_38334EC444AA5DA7B573069AA8E9CC02;   // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Vertical_38334EC444AA5DA7B573069AA8E9CC02;     // 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_38334EC444AA5DA7B573069AA8E9CC02;   // 0x0448(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_FFCFFAEC4F23F0A9601FC2B284C6C0AF;   // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_FFCFFAEC4F23F0A9601FC2B284C6C0AF;   // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWeaponsState                               Weapon_State;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, Net, IsPlainOldData)
	struct FWeaponsData                                Weapon_Data;                                              // 0x0470(0x00F0) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTimerHandle                                Reload_Timer_Handle;                                      // 0x0560(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class AItemBase_C*                                 Ammo_to_Reload;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Ammo_Index;                                               // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class ACharacter*                                  OwnerCharacter;                                           // 0x0578(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HomingMissileTarget;                                      // 0x0580(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponSpread;                                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class UClass*                                      Projectile;                                               // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashEffect;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  WeaponFireSound;                                          // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletsInShot;                                            // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class USoundBase*                                  ReloadSound;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 AmmoShells;                                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        AmmoShellComponent;                                       // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                AmmoShellComponentArray;                                  // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  WeaponMateials;                                           // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DoubleGuns_;                                              // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlipFlopIsA;                                              // 0x05E9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x05EA(0x0002) MISSED OFFSET
	float                                              ReloadLength;                                             // 0x05EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWeaponDeltaSeconds;                                // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHealingGun_;                                            // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ContiniousSound_;                                         // 0x05F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x05F6(0x0002) MISSED OFFSET
	class UAudioComponent*                             FireSound;                                                // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DamageBase;                                               // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAnimStartStop;                                      // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Zooming_;                                                 // 0x0605(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0606(0x0002) MISSED OFFSET
	class UAudioComponent*                             MinigunSound;                                             // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               StoppedUsingWeapon_;                                      // 0x0610(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              Timer_To_Reload_Item;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ReloadTimerHandle1o1;                                     // 0x0618(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UParticleSystemComponent*                    PlasmaGunEmitter;                                         // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_Horde_Gamestate_C*                       GameStateRef;                                             // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SingleShotDelayOn_;                                       // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0631(0x0007) MISSED OFFSET
	class ABP_Pawn_C*                                  BP_PawnRef;                                               // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimBP_Main_C*                              AnimBP_Ref;                                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalAmmo;                                                // 0x0648(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UClass*                                      AmmoType;                                                 // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponInt1;                                               // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWeaponBought_;                                          // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Shoot_;                                                   // 0x065D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x065E(0x0002) MISSED OFFSET
	struct FHitResult                                  LineTraceHitResult;                                       // 0x0660(0x0088) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	struct FTransform                                  BulletTransform;                                          // 0x06F0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UParticleSystem*                             TracerParticle;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Penetration_;                                             // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SyringeDamage_Heal_;                                      // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponFirearmBase.WeaponFirearmBase_C");
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
	void WeaponIntFunction(int* WeaponIndex, bool* Free_, TArray<bool>* WeaponsBoughtArray, TArray<class UClass*>* WeaponUpgradeArray);
	void ReloadOneBulletAtATimeTimer();
	void Can_Fire_HealingGun(bool* Can_);
	void Fire_HealingGun();
	void CalcFinalDirection(struct FVector* Location, struct FRotator* Rotation, struct FTransform* Result);
	void CalculateMainDirection(class USceneComponent** SkeletalMeshTarget, struct FVector* Location, struct FRotator* Rotation);
	void Stop_Reload_Weapon();
	void ReloadOneBulletAtATime();
	void Reload_Weapon();
	void ReloadAllBulletsAtOnce();
	void Fire_Weapon();
	void Can_Reload(bool* Can_);
	void Can_Fire(bool* Can_);
	void Set_Ammo_In_Gun(int* Amount);
	void Get_Current_Ammo_In_Gun(int* Current_Ammo_in_Gun);
	void Decrease_Ammo_in_Gun(int* Amount);
	void Increase_Ammo_in_Gun(int* Amount);
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void Timeline_8__FinishedFunc();
	void Timeline_8__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void CWC_RefreshWeaponInHUD();
	void WPN_Recoil(float* Pitch, float* Yaw);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
	void CWC_SwitchCamera();
	void WPN_CantShoot();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void StopMeleeTrace();
	void ReceiveBeginPlay();
	void StartUseWeapon();
	void StopUseWeapon(bool* IsShootWeapon_);
	void StartReload();
	void StopReload();
	void ServerWeaponEffects();
	void MulticastWeaponEffects();
	void ServerPlayReloadSound();
	void MultiCastPlayReloadSound();
	void EquipSound();
	void MultiCastEquipSound();
	void EventSetWeaponIsCloaked(bool* Cloak);
	void AttachSecondWeapon(bool* Attach_);
	void StopReloadW();
	void WeaponTimerTick();
	void ServerHealingEffects(struct FVector* EndLoc);
	void ResetFireSound();
	void StartZoom();
	void StopZoom();
	void StartWeaponReloadTimerEvent();
	void SetReloadBarPercentEvent();
	void SetReloadBarVisibility(bool* Visible_);
	void HealTargetAndSelfEvent();
	void Weapon_Recoil(float* Vertical_Recoil, float* Horizontal_Recoil, bool* Gremadeweapon_);
	void StopWeaponSounds();
	void ShootAfterReload();
	void WeaponShootSpeed();
	void ClearVisuals();
	void Reset();
	void WeaponEffects();
	void StopStartPlasmaGun(bool* Start_);
	void StartstopWeaponAnim1(bool* Start_);
	void ExecuteUbergraph_WeaponFirearmBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

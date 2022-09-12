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

// BlueprintGeneratedClass BPA_ParentWeapon.BPA_ParentWeapon_C
// 0x0230 (0x05C0 - 0x0390)
class ABPA_ParentWeapon_C : public AItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        Widget;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponSkMesh;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AutoPickUp;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FBPS_WeaponData                             WeaponData;                                               // 0x03B0(0x0168) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               IsReloading;                                              // 0x0518(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_FireModes>                           CurrentFireMode;                                          // 0x0519(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerPulled;                                            // 0x051A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnFireRateDelay;                                        // 0x051B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class ACharacter*                                  OwnerCharacter;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FireRateDelay;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJammed;                                                 // 0x052C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReduceAccuracyWhileMoving;                                // 0x052D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x052E(0x0002) MISSED OFFSET
	float                                              AccuracyPenaltyWhileMoving;                               // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UClass*                                      Projectile;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletsInShot;                                            // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponSpread;                                             // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bullet_Speed;                                             // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bullet_Ricochet;                                          // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	class USoundBase*                                  WeaponJammedSound;                                        // 0x0550(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  WeaponFireSound;                                          // 0x0558(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashEffect;                                        // 0x0560(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoAmmo;                                                   // 0x0568(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	int                                                CurrentAmmoInMagazine;                                    // 0x056C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAmmoInBackpack;                                    // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRoundInBurst;                                      // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ReloadTimer;                                              // 0x0578(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ReloadAnimDelay;                                          // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dropped;                                                  // 0x0584(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	float                                              Timer;                                                    // 0x0588(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_WeaponState>                         CurrentWeaponState;                                       // 0x058C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	struct FBPS_StoredWeapon                           WeaponStored;                                             // 0x0590(0x0014) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  WeaponMateials;                                           // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      HomingMissileTarget;                                      // 0x05B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPA_ParentWeapon.BPA_ParentWeapon_C");
		return ptr;
	}


	void Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type);
	void Set_Widget_Title(bool* Return_Value, struct FText* Title_Text);
	void Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text);
	void Set_Widget_Level(bool* Return_Value, struct FText* Level_Text);
	void Set_Widget_Amount(bool* Return_Value, int* Amount_Value);
	void Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color);
	void Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds);
	void Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings);
	void SetMode_Melee();
	void OnRep_CurrentAmmoInBackpack();
	void OnRep_CurrentAmmoInMagazine();
	void OnRep_CurrentFireMode();
	void OnRep_NoAmmo();
	void OnRep_IsJammed();
	void OnRep_IsReloading();
	void CantShoot();
	void CanReload_(bool* Return);
	void SetMode_FullAuto();
	void SetMode_Burst();
	void SetMode_SingleShot();
	void SwitchMode_Next();
	void CalcFinalDirection(struct FVector* Location, struct FRotator* Rotation, struct FTransform* Result);
	void CalcDamage(float* Damage, bool* IsCrit_);
	void ReloadEnd();
	void ReloadStart();
	void CalculateMainDirection(struct FVector* Location, struct FRotator* Rotation);
	void GetJamChance(bool* Return);
	void HasAmmoInMag_(bool* Return);
	void CanShoot_(bool* Return);
	void SpawnProjectile();
	void UserConstructionScript();
	void WeaponFire(bool* TriggerPulled);
	void WeaponAddAmmoToBackpack(int* AmountAmmoToAdd);
	void WeaponReload();
	void WeaponSwitchFireMode();
	void WeaponEffects();
	void WeaponEffectsSync();
	void SetWeaponIsDropped(bool* Dropped, class ACharacter** OwnerCharacter, bool* Delete_);
	void UpdateHUD_WeaponData(int* WeaponNumber);
	void SetWeaponIsCloaked(bool* Cloak);
	void BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void Current_Target(class APawn** Pawn);
	void Clear_Target();
	void Interact(struct FKey* Key, class APawn** Pawn);
	void CollisionAllTrue();
	void CollisionAllFalse();
	void Toggle_Widget(bool* Widget);
	void DestroyWeapon();
	void ExecuteUbergraph_BPA_ParentWeapon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

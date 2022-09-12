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

// BlueprintGeneratedClass InventoryData.InventoryData_C
// 0x0240 (0x0570 - 0x0330)
class AInventoryData_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box_For_drop_all;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_7DCB47284F3B928C377D2C852E9C3F99;   // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_7DCB47284F3B928C377D2C852E9C3F99;   // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Zoom_Zoom_Timer_557844344E4ED8677CC39EA0DA275883;         // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Zoom__Direction_557844344E4ED8677CC39EA0DA275883;         // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Zoom;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AItemBase_C*>                         Bar_Slots;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AItemBase_C*>                         Inventory_Slots;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APickupBase_C*                               Item_To_Pickup;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Bar_Selection;                                            // 0x0390(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Inventory_Selection;                                      // 0x0394(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Inventory_Bar_Selection;                                  // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class UInventoryManager_C*                         Inventory_Manager;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInventoryType>                        Selection_Type;                                           // 0x03A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	struct FTimerHandle                                Consumable_Handle;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              Timer_To_Consume_Item;                                    // 0x03B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Item_Index_Found;                                         // 0x03BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Can_Stack;                                                // 0x03C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FItemInfo                                   Item_Info_for_Pickup;                                     // 0x03C8(0x0058) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               Drop_all_;                                                // 0x0420(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class ALootChest_C*                                Loot_Chest_to_Open;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACraftingStation_C*                          Crafting_Station;                                         // 0x0430(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRandomStream                               Spread_Speed;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               Weapon_Zoom;                                              // 0x0440(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class AActor*                                      Hit_Actor;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Pawn_C*                                  CharRef;                                                  // 0x0450(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerPulled_;                                           // 0x0458(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleVariable;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AItemBase_C*                                 CurrentItemBase;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThrowablePulled_;                                         // 0x0470(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class AWeaponFirearmBase_C*                        MainWeaponVariable;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeaponFirearmBase_C*                        SecondaryWeaponVariable;                                  // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponInfo                                 WeaponInfo;                                               // 0x0488(0x0080) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class AMeleeWeaponBase_C*                          MeleeWeaponVariable;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AThrowablesBase_C*                           GrenadeWeaponVariable;                                    // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanThrowGrenade_;                                         // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0519(0x0003) MISSED OFFSET
	float                                              PitchTest;                                                // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawTest;                                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class AAmmoBase_C*                                 MainWeaponAmmo;                                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ThrowableAmount;                                          // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SmallMedicKitAmount;                                      // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BigMedicKitAmount;                                        // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponMagSizeMultiplier;                                  // 0x053C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AItemBase_C*>                         ItemArray;                                                // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AMedKit_C*                                   MedkitVariable;                                           // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ConsumablesFull_;                                         // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	float                                              AmmoAmountMultiplier;                                     // 0x055C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeWeaponDamageMultiplier;                              // 0x0560(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BonebreakerPerk34Selected;                                // 0x0564(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BonebreakerPerk36Selected;                                // 0x0565(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0566(0x0002) MISSED OFFSET
	class AFirstMedKit_C*                              ZedColaVariable;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryData.InventoryData_C");
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
	void StartReloadTimer();
	void PlaceSpecialItem();
	void DestroyInventoryOnly();
	void DisableZoomButton(bool* ButtonDown_);
	bool WeaponHasZoom_(float* Weapon_Zoom);
	void AnimationMontage(class UAnimMontage** Montage, float* PlayRate);
	bool Player_is_stopped();
	void Use_Weapon();
	void Open_Loot_Chest_();
	void Use_Crafting_Station();
	void Consume_Item();
	void Get_Trace_from_Actor_Eyes_View(struct FVector* Start, struct FVector* End);
	void Get_Camera_Trace(float* Range, struct FVector* Start, struct FVector* End);
	void Get_Weapon_Zoom(float* Zoom);
	void Spawn_Throwables(struct FThrowablesData* Throwables_Data, bool* Spawned_);
	void Stop_Reload();
	void Reload_Selected_Weapon();
	void Get_Ammo(class UClass** Ammo_Type, bool* Found_, class AItemBase_C** Ammo, int* Ammo_Index);
	bool Melee_Weapon_Trace(float* Weapon_Range, struct FHitResult* OutHit);
	void OnRep_Weapon_Zoom();
	void _Disable_Weapon_Zoom(bool* Enable_);
	void Spawn_Projectile(float* Weapon_Damage, float* Spread_With_Zoom, float* Spread_Without_Zoom, class UClass** Projectile, TEnumAsByte<EWeaponType>* Weapon_Type, float* Explosion_Range);
	void Stop_Use_Weapon(bool* IsShootWeapon_);
	void Find_Previous_Item(int* Found_Item_Index);
	void Find_Next_Item(int* Found_Item_Index);
	void Remove_Weapon_(int* Index);
	void Get_Weapon(int* Weapon_Index, bool* Got_It_, class AWeaponFirearmBase_C** weapon);
	void Open_Loot_Chest();
	void Split_Item();
	void Can_Split_Inventory_Item(bool* Can_);
	void Can_Split_Bar_Item(bool* Can_);
	struct FTransform Get_Drop_Location();
	void Full_Inventory_(bool* Full_);
	bool Find_Empty_Slot();
	void Find_Item_to_Stack(class UClass** Item, int* Amount, TEnumAsByte<EInventoryType>* Inventory_Type, int* InventoryAmount, bool* Found_);
	void Get_Consumable_Data_from_Selection(struct FConsumableData* Consumable_Data);
	void Cancel_Use(bool* WasInteractButtonClicked_);
	void Get_Timer_Use_From_Selection(float* Timer_To_Consume);
	void StartConsumeItem();
	void Get_Item_Category_From_Selection(TEnumAsByte<EItemCategory>* Category);
	void Selected_Item_to_Drop(TEnumAsByte<EInventoryType>* Inventory_Type);
	void Get_Inventory_Slots(TArray<class AItemBase_C*>* Inventory_Slots);
	void Drop_Item(class AItemBase_C** Item, int* Split_Amount, TEnumAsByte<EDropAction>* Drop_Type);
	void Destroy_Inventory();
	void Remove_Inventory_Item(int* Index, TEnumAsByte<ERemoveItemAction>* Action, TEnumAsByte<EInventoryType>* Inventory_Type);
	void Select_Previous_Slot();
	void Select_Next_Slot(bool* bItemDestroyed);
	void Select_Slot(TEnumAsByte<ESlotsIndex>* Slot, class ABP_Pawn_C** NewParam);
	void Move_Item_To(int* Old_Slot_Index, int* New_Slot_Index);
	void Swap_Item(int* FirstIndex, int* SecondIndex);
	void Select_Item(int* Index, TEnumAsByte<EInventoryType>* SelectionType);
	bool Has_Item_in_this_Inventory_Slot(int* Index, TEnumAsByte<EInventoryType>* Inventory_Type);
	void Pick_Item_Found();
	void Find_Item_or_Structure(struct FHitResult* HitResult, bool* ReturnValue);
	void Set_Inventory_Item(class AItemBase_C** New_Item, TEnumAsByte<EInventoryType>* Inventory_Type);
	void Get_Inventory_Item(int* Index, TEnumAsByte<EInventoryType>* Inventory_Type, class AItemBase_C** Item);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Zoom__FinishedFunc();
	void Zoom__UpdateFunc();
	void PMSBuyWeapon(class UClass** Primary, bool* Primary_);
	void PMSBuyConsumable(class UClass** Consumable);
	void PMS_SellWeapon(int* Index);
	void PMSBuyAmmo(class UClass** AmmoType, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection);
	void PMSBuyMeleeWeapon(class UClass** Melee);
	void PMSBuyThrowable(class UClass** Throwable);
	void PMSRefillThrowable(class UClass** Throwable, bool* FillUpFull_);
	void PMSBuySpecialItem(class UClass** SpecialItem);
	void DecreaseSpecialItemWithDelay();
	void SpawnFullGroundParticles();
	void SetWeapons_WeaponsOnly(class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon);
	void DestroyGroundParticlesAll();
	void SpawnGroundParticles();
	void InventoryTrace(struct FHitResult* HitResult, bool* ReturnValue);
	void Swap();
	void EventInventoryCloakWeapons(bool* Cloak);
	void Event_Player_Destroyed(class AActor** DestroyedActor);
	void SetConsumeBarVisibility(bool* Visible_);
	void SetConsumeBarPercentEvent();
	void ConsumeReloadTimer();
	void StartConsumeTimerEvent();
	void EventServerCalloutAnnouncement(class USoundBase** Sound);
	void TrajectoryEvent();
	void SetWeaponsInventory(class ABP_Pawn_C** CharReference, class UClass** PrimaryWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon, float* AmmoAmountMultiplier, int* ThrowableAmount, int* SmallMedicKitAmount, int* BigMedicKitAmount, float* WeaponMagSizeMultiplier, int* ClassIntSlot, float* MeleeWeaponDamageMultiplier, bool* BonebreakerPerk34Selected, bool* BonebreakerPerk36Selected, bool* FromLobby_);
	void Throw_Throwable();
	void TrajectoryReleased();
	void TrajectoryPressed();
	void SelectSlot1(TEnumAsByte<ESlotsIndex>* Slot);
	void Weapon_Zoom_Timer(bool* Enable_);
	void Event_to_Update_Inventory();
	void ReceiveBeginPlay();
	void StopMeleeTrace();
	void ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_);
	void WPN_CantShoot();
	void CWC_SwitchCamera();
<<<<<<< HEAD
	void WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp);
=======
	void WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp);
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	void AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType);
	void AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate);
	void WPN_Recoil(float* Pitch, float* Yaw);
	void CWC_RefreshWeaponInHUD();
	void PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD);
	void PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference);
	void SpawnThrowableEvent(class UClass** Grenade);
	void ExecuteUbergraph_InventoryData(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

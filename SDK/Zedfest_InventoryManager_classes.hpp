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

// BlueprintGeneratedClass InventoryManager.InventoryManager_C
// 0x005A (0x0152 - 0x00F8)
class UInventoryManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Current_Player_Health;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Player_Shield;                                    // 0x0104(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Defense;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Player_Health;                                        // 0x010C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Player_Shield;                                        // 0x0110(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class UMainInventory_C*                            Main_Inventory;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UW_WpnCompHUD_C*                             HUD;                                                      // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AInventoryData_C*                            Inventory_Data;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCameraComponent*                            Player_Camera;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         Sprint_Arm;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_Pawn_C*                                  PawnVariable;                                             // 0x0140(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               CharacterMeshVariable;                                    // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartWFullArmor_;                                         // 0x0150(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealthRegen;                                              // 0x0151(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryManager.InventoryManager_C");
		return ptr;
	}


	void Damage_System(float* Damage);
	void Decrease_Player_Shield(float* Amount);
	void Increase_Player_Shield(float* Amount);
	void Set_Player_Shield(float* Amount);
	void Get_Player_Shield(float* Player_Shield);
	void Get_Player_Health(float* Player_Health);
	void Set_Player_Health(float* Amount);
	void Decrease_Player_Health(float* Amount);
	void Increase_Player_Health(float* Amount);
	void Update_Inventory_View();
	void Server_Pick_Item_Found();
	void Server_Select_Next_Slot();
	void Server_Select_Previous_Slot();
	void Server_Select_Slot(TEnumAsByte<ESlotsIndex>* Slot);
	void Server_Move_Item_To(int* Old_Slot_Index, int* New_Slot_Index);
	void Server_Swap_Item(int* FirstSlotIndex, int* SecondSlotIndex);
	void Server_Select_Item(int* Index, TEnumAsByte<EInventoryType>* SelectionType);
	void Server_Drop_Selected_Item(TEnumAsByte<EInventoryType>* Inventory_Type);
	void Client_Update_Inventory_View();
	void Server_Cancel_Use();
	void Server_Split_Item();
	void Client_Send_Notification(struct FText* Menssage);
	void Server_Stop_Use_Weapon(bool* IsShootWeapon_, bool* IsDead_);
	void Send_Player_Camera_and_Sprint_Arm_to_Inventory_System(class UCameraComponent** Player_Camera, class USpringArmComponent** Sprint_Arm);
	void ReceiveBeginPlay();
	void Server_Reload_Selected_Weapon();
	void Server_Use_Weapon();
	void Server_Consume_Item();
	void Server_Use_Crafting_Station();
	void InventoryManagerWeapons(class ABP_Pawn_C** BP_Pawn, class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon, float* MaxPlayerHealth, float* MaxPlayerShield, float* RunSpeed, float* AmmoAmountMultiplier, int* ThrowableAmount, bool* StartWFullArmor_, int* SmallMedicKitAmount, int* BigMedicKitAmount, float* WeaponMagSizeMultiplier, float* AimRunSpeed, bool* Torpedo2Jumpcount, bool* HealthRegen, int* ClassIntSlot, float* MeleeWeaponDamageMultiplier, bool* BonebreakerPerk34Selected, bool* BonebreakerPerk36Selected, bool* FromLobby_, bool* DoctorPerk29Selected_, bool* NukerPerk12Selected_, bool* NukerPerk13Selected_, bool* NukerPerk15Selected_, int* C, bool* W_StorePerkSwitcher_);
	void Server_Use_Zoom_Button(bool* ButtonDown_);
	void ServerDropCurrentItem();
	void DamageBloodScreen(float* HP, bool* Increase_);
	void ServerPlaceSpecialItem();
	void CheatAddHealth(bool* Invincible_, float* Timer);
	void ClientUseWeapon();
	void ClientStopUseWeapon(bool* IsShootWeapon_);
	void InventoryManageWeaponsOnly(class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon);
	void HealthRegen1();
	void HealthRegenEvent();
	void ExecuteUbergraph_InventoryManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

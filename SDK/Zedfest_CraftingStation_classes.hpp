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

// BlueprintGeneratedClass CraftingStation.CraftingStation_C
// 0x008C (0x03BC - 0x0330)
class ACraftingStation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Slot_2_Drop;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Slot_3_Drop;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Slot_1_Drop;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Slot_0_Drop;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Crafting_Station_Mesh;                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlotData                                   CS_Inventory_Slots;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FCraftingStationData                        Crafting_Station_Data;                                    // 0x0370(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Weapon_Index;                                             // 0x0384(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AInventoryData_C*                            Inventory_Data;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AWeaponFirearmBase_C*                        Weapon_to_Upgrade;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CS_Handle;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              Timer_Elapsed_to_use_Crafting_Station;                    // 0x03A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Timer_to_use_Crafting_Station_is_Active_;                 // 0x03A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	TArray<struct FWeaponsToUp>                        Weapons_To_Upgrade;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index_Found;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CraftingStation.CraftingStation_C");
		return ptr;
	}


	void Check_if_CS_supports_this_Weapon(class UObject** Weapon_to_Check, bool* Supported_);
	void Stop_Timer_to_use_Crafting_Station();
	void StartUpgradeWeapon();
	void Start_Timer_to_use_Crafting_Station(int* Weapon_Index, class AInventoryData_C** Inventory_Data);
	void Send_Weapon_to_Crafting_Station(int* Weapon_Index, class AInventoryData_C** Inventory_Data);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_CraftingStation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass CSSlot.CSSlot_C
// 0x0040 (0x0370 - 0x0330)
class ACSSlot_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWeaponFirearmBase_C*                        Weapon_to_Upgrade;                                        // 0x0340(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ACraftingStation_C*                          Crafting_Station_Owner;                                   // 0x0348(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FTimerHandle                                Slot_Handle;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	float                                              Timer_Elapsed_to_Upgrade;                                 // 0x0358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timer_to_Upgrade;                                         // 0x035C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Index;                                                    // 0x0360(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UClass*                                      Weapon_Upgraded;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CSSlot.CSSlot_C");
		return ptr;
	}


	void OnRep_Timer_Elapsed_to_Upgrade();
	void Start_Timer_to_Upgrade();
	void SpawnWeaponUpgraded();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void MultiCast_Reset_Slot_Percent();
	void ExecuteUbergraph_CSSlot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass PickupWeapon.PickupWeapon_C
// 0x0018 (0x03A0 - 0x0388)
class APickupWeapon_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Weapon_Class;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FWeaponsState                               Weapon_State;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, Net, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PickupWeapon.PickupWeapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PickupWeapon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

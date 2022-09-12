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

// BlueprintGeneratedClass PickupWeapon.PickupWeapon_C
<<<<<<< HEAD
// 0x0018 (0x03A0 - 0x0388)
class APickupWeapon_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Weapon_Class;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FWeaponsState                               Weapon_State;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, Net, IsPlainOldData)
=======
// 0x0018 (0x0390 - 0x0378)
class APickupWeapon_C : public APickupBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Weapon_Class;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FWeaponsState                               Weapon_State;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, Net, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

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

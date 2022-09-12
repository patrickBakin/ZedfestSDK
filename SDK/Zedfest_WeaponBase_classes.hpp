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

// BlueprintGeneratedClass WeaponBase.WeaponBase_C
// 0x0000 (0x0390 - 0x0390)
class AWeaponBase_C : public AItemBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBase.WeaponBase_C");
		return ptr;
	}


	void StopWeaponSounds();
	void StopZoom();
	void StartZoom();
	void EquipSound();
	void StopReload();
	void StartReload();
	void StopUseWeapon(bool* IsShootWeapon_);
	void StartUseWeapon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

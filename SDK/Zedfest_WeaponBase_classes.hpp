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

#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BPS_StoredWeapon.BPS_StoredWeapon
// 0x0012
struct FBPS_StoredWeapon
{
	struct FName                                       WeaponID_3_15424A3E48F9CAB6D30953B6BEF67F85;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoInMag_6_635E0C174AD42BD4FB55D4BA1E078EC5;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAmmoInBP_7_04CC32F644BD925868AAA8BFD35F6638;       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_FireModes>                           CurrentFireMode_10_2FFE48A444584993DF8C75AAEF33ABEE;      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponState>                         CurrentWeaponState_13_2B1C38BE46898F911E915F98E7376018;   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

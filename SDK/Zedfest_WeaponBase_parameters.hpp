#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponBase.WeaponBase_C.StopWeaponSounds
struct AWeaponBase_C_StopWeaponSounds_Params
{
};

// Function WeaponBase.WeaponBase_C.StopZoom
struct AWeaponBase_C_StopZoom_Params
{
};

// Function WeaponBase.WeaponBase_C.StartZoom
struct AWeaponBase_C_StartZoom_Params
{
};

// Function WeaponBase.WeaponBase_C.EquipSound
struct AWeaponBase_C_EquipSound_Params
{
};

// Function WeaponBase.WeaponBase_C.StopReload
struct AWeaponBase_C_StopReload_Params
{
};

// Function WeaponBase.WeaponBase_C.StartReload
struct AWeaponBase_C_StartReload_Params
{
};

// Function WeaponBase.WeaponBase_C.StopUseWeapon
struct AWeaponBase_C_StopUseWeapon_Params
{
	bool*                                              IsShootWeapon_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.StartUseWeapon
struct AWeaponBase_C_StartUseWeapon_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

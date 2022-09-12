<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponBase.WeaponBase_C.StopWeaponSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StopWeaponSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StopWeaponSounds");

	AWeaponBase_C_StopWeaponSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StopZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StopZoom");

	AWeaponBase_C_StopZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StartZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StartZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StartZoom");

	AWeaponBase_C_StartZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.EquipSound
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::EquipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.EquipSound");

	AWeaponBase_C_EquipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StopReload
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StopReload");

	AWeaponBase_C_StopReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StartReload
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StartReload");

	AWeaponBase_C_StartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StopUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::StopUseWeapon(bool* IsShootWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StopUseWeapon");

	AWeaponBase_C_StopUseWeapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.StartUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::StartUseWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.StartUseWeapon");

	AWeaponBase_C_StartUseWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

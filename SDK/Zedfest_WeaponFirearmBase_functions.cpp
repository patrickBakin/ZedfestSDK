// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkMesh                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_Mesh(class USkeletalMeshComponent** SkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_Mesh");

	AWeaponFirearmBase_C_GetChar_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkMesh != nullptr)
		*SkMesh = params.SkMesh;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponFirearmBase_C*    CurrentWeaponReference         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentWeapon");

	AWeaponFirearmBase_C_GetChar_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeaponReference != nullptr)
		*CurrentWeaponReference = params.CurrentWeaponReference;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_SpeedAndDirection(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirection");

	AWeaponFirearmBase_C_GetChar_SpeedAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsDead");

	AWeaponFirearmBase_C_GetChar_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsCrouching(bool* IsCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCrouching");

	AWeaponFirearmBase_C_GetChar_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrouching != nullptr)
		*IsCrouching = params.IsCrouching;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJumping                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsJumping(bool* IsJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsJumping");

	AWeaponFirearmBase_C_GetChar_IsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJumping != nullptr)
		*IsJumping = params.IsJumping;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsPlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsPlayAnim(bool* IsPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsPlayAnim");

	AWeaponFirearmBase_C_GetChar_IsPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayAnim != nullptr)
		*IsPlayAnim = params.IsPlayAnim;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_PitchAndYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_PitchAndYaw(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_PitchAndYaw");

	AWeaponFirearmBase_C_GetChar_PitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_DeathAnimNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfDeathAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_DeathAnimNumber(int* NumberOfDeathAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_DeathAnimNumber");

	AWeaponFirearmBase_C_GetChar_DeathAnimNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfDeathAnim != nullptr)
		*NumberOfDeathAnim = params.NumberOfDeathAnim;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsSprinting(bool* IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsSprinting");

	AWeaponFirearmBase_C_GetChar_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSprinting != nullptr)
		*IsSprinting = params.IsSprinting;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_HasCharWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_HasCharWeaponsComponent(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_HasCharWeaponsComponent");

	AWeaponFirearmBase_C_GetChar_HasCharWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CharacterWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAC_CharacterWeapons_C*  CWC_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CharacterWeaponsComponent");

	AWeaponFirearmBase_C_GetChar_CharacterWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CWC_Reference != nullptr)
		*CWC_Reference = params.CWC_Reference;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C*         HUD_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponFirearmBase_C::CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_GetHUD");

	AWeaponFirearmBase_C_CWC_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Reference != nullptr)
		*HUD_Reference = params.HUD_Reference;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CurrentCamera                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WeaponCamActive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentCamera");

	AWeaponFirearmBase_C_GetChar_CurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (WeaponCamActive != nullptr)
		*WeaponCamActive = params.WeaponCamActive;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCloaked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cloak                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsCloaked");

	AWeaponFirearmBase_C_GetChar_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloak != nullptr)
		*Cloak = params.Cloak;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_CurrentHealth(float* CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_CurrentHealth");

	AWeaponFirearmBase_C_GetChar_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHP != nullptr)
		*CurrentHP = params.CurrentHP;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_IsZooming(bool* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_IsZooming");

	AWeaponFirearmBase_C_GetChar_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirectionClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::GetChar_SpeedAndDirectionClient(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.GetChar_SpeedAndDirectionClient");

	AWeaponFirearmBase_C_GetChar_SpeedAndDirectionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponIntFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   WeaponsBoughtArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Free_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          WeaponUpgradeArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeaponFirearmBase_C::WeaponIntFunction(int* WeaponIndex, bool* Free_, TArray<bool>* WeaponsBoughtArray, TArray<class UClass*>* WeaponUpgradeArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponIntFunction");

	AWeaponFirearmBase_C_WeaponIntFunction_Params params;
	params.WeaponIndex = WeaponIndex;
	params.Free_ = Free_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponsBoughtArray != nullptr)
		*WeaponsBoughtArray = params.WeaponsBoughtArray;
	if (WeaponUpgradeArray != nullptr)
		*WeaponUpgradeArray = params.WeaponUpgradeArray;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATimeTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ReloadOneBulletAtATimeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATimeTimer");

	AWeaponFirearmBase_C_ReloadOneBulletAtATimeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire HealingGun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Can_Fire_HealingGun(bool* Can_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire HealingGun");

	AWeaponFirearmBase_C_Can_Fire_HealingGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Fire HealingGun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::Fire_HealingGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Fire HealingGun");

	AWeaponFirearmBase_C_Fire_HealingGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.CalcFinalDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Result                         (Parm, OutParm, IsPlainOldData)

void AWeaponFirearmBase_C::CalcFinalDirection(struct FVector* Location, struct FRotator* Rotation, struct FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.CalcFinalDirection");

	AWeaponFirearmBase_C_CalcFinalDirection_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.CalculateMainDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        SkeletalMeshTarget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::CalculateMainDirection(class USceneComponent** SkeletalMeshTarget, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.CalculateMainDirection");

	AWeaponFirearmBase_C_CalculateMainDirection_Params params;
	params.SkeletalMeshTarget = SkeletalMeshTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Stop Reload Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::Stop_Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Stop Reload Weapon");

	AWeaponFirearmBase_C_Stop_Reload_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATime
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ReloadOneBulletAtATime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadOneBulletAtATime");

	AWeaponFirearmBase_C_ReloadOneBulletAtATime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Reload Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::Reload_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Reload Weapon");

	AWeaponFirearmBase_C_Reload_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadAllBulletsAtOnce
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ReloadAllBulletsAtOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ReloadAllBulletsAtOnce");

	AWeaponFirearmBase_C_ReloadAllBulletsAtOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Fire Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::Fire_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Fire Weapon");

	AWeaponFirearmBase_C_Fire_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Reload
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Can_Reload(bool* Can_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Can Reload");

	AWeaponFirearmBase_C_Can_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Can_Fire(bool* Can_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Can Fire");

	AWeaponFirearmBase_C_Can_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Set Ammo In Gun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Set_Ammo_In_Gun(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Set Ammo In Gun");

	AWeaponFirearmBase_C_Set_Ammo_In_Gun_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Get Current Ammo In Gun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Current_Ammo_in_Gun            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Get_Current_Ammo_In_Gun(int* Current_Ammo_in_Gun)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Get Current Ammo In Gun");

	AWeaponFirearmBase_C_Get_Current_Ammo_In_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Ammo_in_Gun != nullptr)
		*Current_Ammo_in_Gun = params.Current_Ammo_in_Gun;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Decrease Ammo in Gun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Decrease_Ammo_in_Gun(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Decrease Ammo in Gun");

	AWeaponFirearmBase_C_Decrease_Ammo_in_Gun_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Increase Ammo in Gun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Increase_Ammo_in_Gun(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Increase Ammo in Gun");

	AWeaponFirearmBase_C_Increase_Ammo_in_Gun_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_1__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_2__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_3__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_4__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_5__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_6__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_6__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_6__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_7__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_7__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_7__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_8__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_8__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_8__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_8__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_8__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__FinishedFunc");

	AWeaponFirearmBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AWeaponFirearmBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Timeline_0__UpdateFunc");

	AWeaponFirearmBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.PC_SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C**        HUD_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponFirearmBase_C::PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.PC_SetHUD");

	AWeaponFirearmBase_C_PC_SetHUD_Params params;
	params.HUD_Reference = HUD_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.PC_CharInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PCReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UW_WpnCompHUD_C**        WPNHUD                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponFirearmBase_C::PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.PC_CharInitialization");

	AWeaponFirearmBase_C_PC_CharInitialization_Params params;
	params.PCReference = PCReference;
	params.WPNHUD = WPNHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_RefreshWeaponInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::CWC_RefreshWeaponInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_RefreshWeaponInHUD");

	AWeaponFirearmBase_C_CWC_RefreshWeaponInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_Recoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::WPN_Recoil(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_Recoil");

	AWeaponFirearmBase_C_WPN_Recoil_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.AnimBP_AnimationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.AnimBP_AnimationRequest");

	AWeaponFirearmBase_C_AnimBP_AnimationRequest_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.AmmoPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AddAmmoTypes>*   Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponTypes>*    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ProjectileType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.AmmoPickup");

	AWeaponFirearmBase_C_AmmoPickup_Params params;
	params.Mode = Mode;
	params.WeaponID = WeaponID;
	params.AmountAmmo = AmountAmmo;
	params.WeaponType = WeaponType;
	params.ProjectileType = ProjectileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_SetWeaponToInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPA_ParentWeapon_C**    WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoPickUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_SetWeaponToInteract");

	AWeaponFirearmBase_C_WPN_SetWeaponToInteract_Params params;
	params.WeaponReference = WeaponReference;
	params.AutoPickUp = AutoPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::CWC_SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.CWC_SwitchCamera");

	AWeaponFirearmBase_C_CWC_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::WPN_CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WPN_CantShoot");

	AWeaponFirearmBase_C_WPN_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ArmorPickupInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RubberArmor_C**      PickupRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Autopickup_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ArmorPickupInterface");

	AWeaponFirearmBase_C_ArmorPickupInterface_Params params;
	params.PickupRef = PickupRef;
	params.Autopickup_ = Autopickup_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopMeleeTrace
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopMeleeTrace");

	AWeaponFirearmBase_C_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponFirearmBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ReceiveBeginPlay");

	AWeaponFirearmBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StartUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StartUseWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StartUseWeapon");

	AWeaponFirearmBase_C_StartUseWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::StopUseWeapon(bool* IsShootWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopUseWeapon");

	AWeaponFirearmBase_C_StopUseWeapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StartReload
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StartReload");

	AWeaponFirearmBase_C_StartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopReload
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopReload");

	AWeaponFirearmBase_C_StopReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerWeaponEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ServerWeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ServerWeaponEffects");

	AWeaponFirearmBase_C_ServerWeaponEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.MulticastWeaponEffects
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::MulticastWeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.MulticastWeaponEffects");

	AWeaponFirearmBase_C_MulticastWeaponEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerPlayReloadSound
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ServerPlayReloadSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ServerPlayReloadSound");

	AWeaponFirearmBase_C_ServerPlayReloadSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastPlayReloadSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::MultiCastPlayReloadSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastPlayReloadSound");

	AWeaponFirearmBase_C_MultiCastPlayReloadSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.EquipSound
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::EquipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.EquipSound");

	AWeaponFirearmBase_C_EquipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastEquipSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::MultiCastEquipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.MultiCastEquipSound");

	AWeaponFirearmBase_C_MultiCastEquipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.EventSetWeaponIsCloaked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Cloak                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::EventSetWeaponIsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.EventSetWeaponIsCloaked");

	AWeaponFirearmBase_C_EventSetWeaponIsCloaked_Params params;
	params.Cloak = Cloak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.AttachSecondWeapon
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Attach_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::AttachSecondWeapon(bool* Attach_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.AttachSecondWeapon");

	AWeaponFirearmBase_C_AttachSecondWeapon_Params params;
	params.Attach_ = Attach_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopReloadW
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StopReloadW()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopReloadW");

	AWeaponFirearmBase_C_StopReloadW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponTimerTick
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::WeaponTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponTimerTick");

	AWeaponFirearmBase_C_WeaponTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ServerHealingEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                EndLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::ServerHealingEffects(struct FVector* EndLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ServerHealingEffects");

	AWeaponFirearmBase_C_ServerHealingEffects_Params params;
	params.EndLoc = EndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ResetFireSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ResetFireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ResetFireSound");

	AWeaponFirearmBase_C_ResetFireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StartZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StartZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StartZoom");

	AWeaponFirearmBase_C_StartZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopZoom");

	AWeaponFirearmBase_C_StopZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StartWeaponReloadTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StartWeaponReloadTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StartWeaponReloadTimerEvent");

	AWeaponFirearmBase_C_StartWeaponReloadTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarPercentEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::SetReloadBarPercentEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarPercentEvent");

	AWeaponFirearmBase_C_SetReloadBarPercentEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarVisibility
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::SetReloadBarVisibility(bool* Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.SetReloadBarVisibility");

	AWeaponFirearmBase_C_SetReloadBarVisibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.HealTargetAndSelfEvent
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::HealTargetAndSelfEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.HealTargetAndSelfEvent");

	AWeaponFirearmBase_C_HealTargetAndSelfEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Weapon Recoil
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Vertical_Recoil                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Horizontal_Recoil              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Gremadeweapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::Weapon_Recoil(float* Vertical_Recoil, float* Horizontal_Recoil, bool* Gremadeweapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Weapon Recoil");

	AWeaponFirearmBase_C_Weapon_Recoil_Params params;
	params.Vertical_Recoil = Vertical_Recoil;
	params.Horizontal_Recoil = Horizontal_Recoil;
	params.Gremadeweapon_ = Gremadeweapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopWeaponSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::StopWeaponSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopWeaponSounds");

	AWeaponFirearmBase_C_StopWeaponSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ShootAfterReload
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ShootAfterReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ShootAfterReload");

	AWeaponFirearmBase_C_ShootAfterReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponShootSpeed
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::WeaponShootSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponShootSpeed");

	AWeaponFirearmBase_C_WeaponShootSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ClearVisuals
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::ClearVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ClearVisuals");

	AWeaponFirearmBase_C_ClearVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.Reset
// (BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.Reset");

	AWeaponFirearmBase_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponFirearmBase_C::WeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.WeaponEffects");

	AWeaponFirearmBase_C_WeaponEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StopStartPlasmaGun
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Start_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::StopStartPlasmaGun(bool* Start_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StopStartPlasmaGun");

	AWeaponFirearmBase_C_StopStartPlasmaGun_Params params;
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.StartstopWeaponAnim1
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Start_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::StartstopWeaponAnim1(bool* Start_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.StartstopWeaponAnim1");

	AWeaponFirearmBase_C_StartstopWeaponAnim1_Params params;
	params.Start_ = Start_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponFirearmBase.WeaponFirearmBase_C.ExecuteUbergraph_WeaponFirearmBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponFirearmBase_C::ExecuteUbergraph_WeaponFirearmBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponFirearmBase.WeaponFirearmBase_C.ExecuteUbergraph_WeaponFirearmBase");

	AWeaponFirearmBase_C_ExecuteUbergraph_WeaponFirearmBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BPI_WpnComponent.BPI_WpnComponent_C.StopMeleeTrace
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_WpnComponent_C::StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.StopMeleeTrace");

	UBPI_WpnComponent_C_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirectionClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_SpeedAndDirectionClient(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirectionClient");

	UBPI_WpnComponent_C_GetChar_SpeedAndDirectionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.ArmorPickupInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RubberArmor_C**      PickupRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Autopickup_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.ArmorPickupInterface");

	UBPI_WpnComponent_C_ArmorPickupInterface_Params params;
	params.PickupRef = PickupRef;
	params.Autopickup_ = Autopickup_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsZooming(bool* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsZooming");

	UBPI_WpnComponent_C_GetChar_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_WpnComponent_C::WPN_CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_CantShoot");

	UBPI_WpnComponent_C_WPN_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_WpnComponent_C::CWC_SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_SwitchCamera");

	UBPI_WpnComponent_C_CWC_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_SetWeaponToInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPA_ParentWeapon_C**    WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoPickUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_SetWeaponToInteract");

	UBPI_WpnComponent_C_WPN_SetWeaponToInteract_Params params;
	params.WeaponReference = WeaponReference;
	params.AutoPickUp = AutoPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_CurrentHealth(float* CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentHealth");

	UBPI_WpnComponent_C_GetChar_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHP != nullptr)
		*CurrentHP = params.CurrentHP;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.AmmoPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AddAmmoTypes>*   Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponTypes>*    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ProjectileType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.AmmoPickup");

	UBPI_WpnComponent_C_AmmoPickup_Params params;
	params.Mode = Mode;
	params.WeaponID = WeaponID;
	params.AmountAmmo = AmountAmmo;
	params.WeaponType = WeaponType;
	params.ProjectileType = ProjectileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCloaked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cloak                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCloaked");

	UBPI_WpnComponent_C_GetChar_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloak != nullptr)
		*Cloak = params.Cloak;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CurrentCamera                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WeaponCamActive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentCamera");

	UBPI_WpnComponent_C_GetChar_CurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (WeaponCamActive != nullptr)
		*WeaponCamActive = params.WeaponCamActive;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C*         HUD_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_WpnComponent_C::CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_GetHUD");

	UBPI_WpnComponent_C_CWC_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Reference != nullptr)
		*HUD_Reference = params.HUD_Reference;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CharacterWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAC_CharacterWeapons_C*  CWC_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CharacterWeaponsComponent");

	UBPI_WpnComponent_C_GetChar_CharacterWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CWC_Reference != nullptr)
		*CWC_Reference = params.CWC_Reference;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.AnimBP_AnimationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.AnimBP_AnimationRequest");

	UBPI_WpnComponent_C_AnimBP_AnimationRequest_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_HasCharWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_HasCharWeaponsComponent(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_HasCharWeaponsComponent");

	UBPI_WpnComponent_C_GetChar_HasCharWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsSprinting(bool* IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsSprinting");

	UBPI_WpnComponent_C_GetChar_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSprinting != nullptr)
		*IsSprinting = params.IsSprinting;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_DeathAnimNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfDeathAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_DeathAnimNumber(int* NumberOfDeathAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_DeathAnimNumber");

	UBPI_WpnComponent_C_GetChar_DeathAnimNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfDeathAnim != nullptr)
		*NumberOfDeathAnim = params.NumberOfDeathAnim;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_PitchAndYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_PitchAndYaw(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_PitchAndYaw");

	UBPI_WpnComponent_C_GetChar_PitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsPlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsPlayAnim(bool* IsPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsPlayAnim");

	UBPI_WpnComponent_C_GetChar_IsPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayAnim != nullptr)
		*IsPlayAnim = params.IsPlayAnim;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJumping                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsJumping(bool* IsJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsJumping");

	UBPI_WpnComponent_C_GetChar_IsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJumping != nullptr)
		*IsJumping = params.IsJumping;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsCrouching(bool* IsCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsCrouching");

	UBPI_WpnComponent_C_GetChar_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrouching != nullptr)
		*IsCrouching = params.IsCrouching;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_IsDead");

	UBPI_WpnComponent_C_GetChar_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_SpeedAndDirection(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_SpeedAndDirection");

	UBPI_WpnComponent_C_GetChar_SpeedAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponFirearmBase_C*    CurrentWeaponReference         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_CurrentWeapon");

	UBPI_WpnComponent_C_GetChar_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeaponReference != nullptr)
		*CurrentWeaponReference = params.CurrentWeaponReference;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkMesh                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_WpnComponent_C::GetChar_Mesh(class USkeletalMeshComponent** SkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.GetChar_Mesh");

	UBPI_WpnComponent_C_GetChar_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkMesh != nullptr)
		*SkMesh = params.SkMesh;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_Recoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_WpnComponent_C::WPN_Recoil(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.WPN_Recoil");

	UBPI_WpnComponent_C_WPN_Recoil_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_RefreshWeaponInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_WpnComponent_C::CWC_RefreshWeaponInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.CWC_RefreshWeaponInHUD");

	UBPI_WpnComponent_C_CWC_RefreshWeaponInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.PC_CharInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PCReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UW_WpnCompHUD_C**        WPNHUD                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_WpnComponent_C::PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.PC_CharInitialization");

	UBPI_WpnComponent_C_PC_CharInitialization_Params params;
	params.PCReference = PCReference;
	params.WPNHUD = WPNHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_WpnComponent.BPI_WpnComponent_C.PC_SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C**        HUD_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_WpnComponent_C::PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_WpnComponent.BPI_WpnComponent_C.PC_SetHUD");

	UBPI_WpnComponent_C_PC_SetHUD_Params params;
	params.HUD_Reference = HUD_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkMesh                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_Mesh(class USkeletalMeshComponent** SkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_Mesh");

	AMeleeWeaponBase_C_GetChar_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkMesh != nullptr)
		*SkMesh = params.SkMesh;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponFirearmBase_C*    CurrentWeaponReference         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentWeapon");

	AMeleeWeaponBase_C_GetChar_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeaponReference != nullptr)
		*CurrentWeaponReference = params.CurrentWeaponReference;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_SpeedAndDirection(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirection");

	AMeleeWeaponBase_C_GetChar_SpeedAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsDead");

	AMeleeWeaponBase_C_GetChar_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsCrouching(bool* IsCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCrouching");

	AMeleeWeaponBase_C_GetChar_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrouching != nullptr)
		*IsCrouching = params.IsCrouching;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJumping                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsJumping(bool* IsJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsJumping");

	AMeleeWeaponBase_C_GetChar_IsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJumping != nullptr)
		*IsJumping = params.IsJumping;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsPlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsPlayAnim(bool* IsPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsPlayAnim");

	AMeleeWeaponBase_C_GetChar_IsPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayAnim != nullptr)
		*IsPlayAnim = params.IsPlayAnim;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_PitchAndYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_PitchAndYaw(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_PitchAndYaw");

	AMeleeWeaponBase_C_GetChar_PitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_DeathAnimNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfDeathAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_DeathAnimNumber(int* NumberOfDeathAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_DeathAnimNumber");

	AMeleeWeaponBase_C_GetChar_DeathAnimNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfDeathAnim != nullptr)
		*NumberOfDeathAnim = params.NumberOfDeathAnim;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsSprinting(bool* IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsSprinting");

	AMeleeWeaponBase_C_GetChar_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSprinting != nullptr)
		*IsSprinting = params.IsSprinting;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_HasCharWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_HasCharWeaponsComponent(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_HasCharWeaponsComponent");

	AMeleeWeaponBase_C_GetChar_HasCharWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CharacterWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CWC_Reference                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_CharacterWeaponsComponent(int* CWC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CharacterWeaponsComponent");

	AMeleeWeaponBase_C_GetChar_CharacterWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CWC_Reference != nullptr)
		*CWC_Reference = params.CWC_Reference;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C*         HUD_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMeleeWeaponBase_C::CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_GetHUD");

	AMeleeWeaponBase_C_CWC_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Reference != nullptr)
		*HUD_Reference = params.HUD_Reference;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CurrentCamera                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WeaponCamActive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentCamera");

	AMeleeWeaponBase_C_GetChar_CurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (WeaponCamActive != nullptr)
		*WeaponCamActive = params.WeaponCamActive;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCloaked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cloak                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsCloaked");

	AMeleeWeaponBase_C_GetChar_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloak != nullptr)
		*Cloak = params.Cloak;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_CurrentHealth(float* CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_CurrentHealth");

	AMeleeWeaponBase_C_GetChar_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHP != nullptr)
		*CurrentHP = params.CurrentHP;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_IsZooming(bool* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_IsZooming");

	AMeleeWeaponBase_C_GetChar_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirectionClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::GetChar_SpeedAndDirectionClient(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.GetChar_SpeedAndDirectionClient");

	AMeleeWeaponBase_C_GetChar_SpeedAndDirectionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponIntFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<bool>                   WeaponsBoughtArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Free_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          WeaponUpgradeArray             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMeleeWeaponBase_C::WeaponIntFunction(int* WeaponIndex, bool* Free_, TArray<bool>* WeaponsBoughtArray, TArray<class UClass*>* WeaponUpgradeArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponIntFunction");

	AMeleeWeaponBase_C_WeaponIntFunction_Params params;
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


// Function MeleeWeaponBase.MeleeWeaponBase_C.RechargeMeleeWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::RechargeMeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.RechargeMeleeWeapon");

	AMeleeWeaponBase_C_RechargeMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.FS_TryToApplyDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 HitActor_L                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::FS_TryToApplyDamage(class AActor** HitActor_L)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.FS_TryToApplyDamage");

	AMeleeWeaponBase_C_FS_TryToApplyDamage_Params params;
	params.HitActor_L = HitActor_L;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CanHitActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 HitActor_L                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Was_Hit                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::F_CanHitActor(class AActor** HitActor_L, bool* Was_Hit, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_CanHitActor");

	AMeleeWeaponBase_C_F_CanHitActor_Params params;
	params.HitActor_L = HitActor_L;
	params.Was_Hit = Was_Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_UpdateMeleeBoxesLocations
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::F_UpdateMeleeBoxesLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_UpdateMeleeBoxesLocations");

	AMeleeWeaponBase_C_F_UpdateMeleeBoxesLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_SaveMeleeTraceBoxesLocations
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::F_SaveMeleeTraceBoxesLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_SaveMeleeTraceBoxesLocations");

	AMeleeWeaponBase_C_F_SaveMeleeTraceBoxesLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateMeleeBoxesSpawnOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Loop_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnLocation                  (Parm, OutParm, IsPlainOldData)

void AMeleeWeaponBase_C::F_CalculateMeleeBoxesSpawnOffset(int* Loop_Index, struct FTransform* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateMeleeBoxesSpawnOffset");

	AMeleeWeaponBase_C_F_CalculateMeleeBoxesSpawnOffset_Params params;
	params.Loop_Index = Loop_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateOffsetBetweenMeleeBoxes
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::F_CalculateOffsetBetweenMeleeBoxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_CalculateOffsetBetweenMeleeBoxes");

	AMeleeWeaponBase_C_F_CalculateOffsetBetweenMeleeBoxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.F_GenerateMeleeTraceBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::F_GenerateMeleeTraceBoxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.F_GenerateMeleeTraceBoxes");

	AMeleeWeaponBase_C_F_GenerateMeleeTraceBoxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.UserConstructionScript");

	AMeleeWeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMeleeWeaponBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__FinishedFunc");

	AMeleeWeaponBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMeleeWeaponBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.Timeline_0__UpdateFunc");

	AMeleeWeaponBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.PC_SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C**        HUD_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMeleeWeaponBase_C::PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.PC_SetHUD");

	AMeleeWeaponBase_C_PC_SetHUD_Params params;
	params.HUD_Reference = HUD_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.PC_CharInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PCReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UW_WpnCompHUD_C**        WPNHUD                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMeleeWeaponBase_C::PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.PC_CharInitialization");

	AMeleeWeaponBase_C_PC_CharInitialization_Params params;
	params.PCReference = PCReference;
	params.WPNHUD = WPNHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_RefreshWeaponInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::CWC_RefreshWeaponInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_RefreshWeaponInHUD");

	AMeleeWeaponBase_C_CWC_RefreshWeaponInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_Recoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::WPN_Recoil(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_Recoil");

	AMeleeWeaponBase_C_WPN_Recoil_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.AnimBP_AnimationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.AnimBP_AnimationRequest");

	AMeleeWeaponBase_C_AnimBP_AnimationRequest_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.AmmoPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AddAmmoTypes>*   Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponTypes>*    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ProjectileType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.AmmoPickup");

	AMeleeWeaponBase_C_AmmoPickup_Params params;
	params.Mode = Mode;
	params.WeaponID = WeaponID;
	params.AmountAmmo = AmountAmmo;
	params.WeaponType = WeaponType;
	params.ProjectileType = ProjectileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_SetWeaponToInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoPickUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::WPN_SetWeaponToInteract(int* WeaponReference, bool* AutoPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_SetWeaponToInteract");

	AMeleeWeaponBase_C_WPN_SetWeaponToInteract_Params params;
	params.WeaponReference = WeaponReference;
	params.AutoPickUp = AutoPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::CWC_SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.CWC_SwitchCamera");

	AMeleeWeaponBase_C_CWC_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::WPN_CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.WPN_CantShoot");

	AMeleeWeaponBase_C_WPN_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ArmorPickupInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RubberArmor_C**      PickupRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Autopickup_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ArmorPickupInterface");

	AMeleeWeaponBase_C_ArmorPickupInterface_Params params;
	params.PickupRef = PickupRef;
	params.Autopickup_ = Autopickup_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StopMeleeTrace
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StopMeleeTrace");

	AMeleeWeaponBase_C_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StartUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StartUseWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StartUseWeapon");

	AMeleeWeaponBase_C_StartUseWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StopUseWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::StopUseWeapon(bool* IsShootWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StopUseWeapon");

	AMeleeWeaponBase_C_StopUseWeapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMeleeWeaponBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ReceiveBeginPlay");

	AMeleeWeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.EA_WeaponSwing
// (BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::EA_WeaponSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.EA_WeaponSwing");

	AMeleeWeaponBase_C_EA_WeaponSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.AttackEvent
// (BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::AttackEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.AttackEvent");

	AMeleeWeaponBase_C_AttackEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ServerWeaponEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SkelMeshHit_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::ServerWeaponEffects(struct FVector* Location, bool* SkelMeshHit_, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ServerWeaponEffects");

	AMeleeWeaponBase_C_ServerWeaponEffects_Params params;
	params.Location = Location;
	params.SkelMeshHit_ = SkelMeshHit_;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.MulticastWeaponEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::MulticastWeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.MulticastWeaponEffects");

	AMeleeWeaponBase_C_MulticastWeaponEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StartReload
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StartReload");

	AMeleeWeaponBase_C_StartReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.EventPlaySpecialAnim
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::EventPlaySpecialAnim(class UAnimMontage** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.EventPlaySpecialAnim");

	AMeleeWeaponBase_C_EventPlaySpecialAnim_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StartZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StartZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StartZoom");

	AMeleeWeaponBase_C_StartZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.MultiCastEquipMeleeSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::MultiCastEquipMeleeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.MultiCastEquipMeleeSound");

	AMeleeWeaponBase_C_MultiCastEquipMeleeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.EquipSound
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::EquipSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.EquipSound");

	AMeleeWeaponBase_C_EquipSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponTimerTick
// (BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::WeaponTimerTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.WeaponTimerTick");

	AMeleeWeaponBase_C_WeaponTimerTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.CustomEvent");

	AMeleeWeaponBase_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StopZoom
// (Public, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StopZoom");

	AMeleeWeaponBase_C_StopZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StopSprintFromMeleeWeapon
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StopSprintFromMeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StopSprintFromMeleeWeapon");

	AMeleeWeaponBase_C_StopSprintFromMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.StartMeleeWeaponRechargeTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::StartMeleeWeaponRechargeTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.StartMeleeWeaponRechargeTimerEvent");

	AMeleeWeaponBase_C_StartMeleeWeaponRechargeTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.SetRechargeBarVisibility
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::SetRechargeBarVisibility(bool* Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.SetRechargeBarVisibility");

	AMeleeWeaponBase_C_SetRechargeBarVisibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.EventSetCanDoSpecialAnim
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::EventSetCanDoSpecialAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.EventSetCanDoSpecialAnim");

	AMeleeWeaponBase_C_EventSetCanDoSpecialAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ExecuteUbergraph_MeleeWeaponBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMeleeWeaponBase_C::ExecuteUbergraph_MeleeWeaponBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ExecuteUbergraph_MeleeWeaponBase");

	AMeleeWeaponBase_C_ExecuteUbergraph_MeleeWeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ChildStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::ChildStop__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ChildStop__DelegateSignature");

	AMeleeWeaponBase_C_ChildStop__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponBase.MeleeWeaponBase_C.ChildUse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMeleeWeaponBase_C::ChildUse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponBase.MeleeWeaponBase_C.ChildUse__DelegateSignature");

	AMeleeWeaponBase_C_ChildUse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

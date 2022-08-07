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

// Function InventoryData.InventoryData_C.GetChar_Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkMesh                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AInventoryData_C::GetChar_Mesh(class USkeletalMeshComponent** SkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_Mesh");

	AInventoryData_C_GetChar_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkMesh != nullptr)
		*SkMesh = params.SkMesh;
}


// Function InventoryData.InventoryData_C.GetChar_CurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponFirearmBase_C*    CurrentWeaponReference         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_CurrentWeapon");

	AInventoryData_C_GetChar_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeaponReference != nullptr)
		*CurrentWeaponReference = params.CurrentWeaponReference;
}


// Function InventoryData.InventoryData_C.GetChar_SpeedAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_SpeedAndDirection(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_SpeedAndDirection");

	AInventoryData_C_GetChar_SpeedAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function InventoryData.InventoryData_C.GetChar_IsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsDead");

	AInventoryData_C_GetChar_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function InventoryData.InventoryData_C.GetChar_IsCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsCrouching(bool* IsCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsCrouching");

	AInventoryData_C_GetChar_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrouching != nullptr)
		*IsCrouching = params.IsCrouching;
}


// Function InventoryData.InventoryData_C.GetChar_IsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJumping                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsJumping(bool* IsJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsJumping");

	AInventoryData_C_GetChar_IsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJumping != nullptr)
		*IsJumping = params.IsJumping;
}


// Function InventoryData.InventoryData_C.GetChar_IsPlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsPlayAnim(bool* IsPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsPlayAnim");

	AInventoryData_C_GetChar_IsPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayAnim != nullptr)
		*IsPlayAnim = params.IsPlayAnim;
}


// Function InventoryData.InventoryData_C.GetChar_PitchAndYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_PitchAndYaw(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_PitchAndYaw");

	AInventoryData_C_GetChar_PitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function InventoryData.InventoryData_C.GetChar_DeathAnimNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfDeathAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_DeathAnimNumber(int* NumberOfDeathAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_DeathAnimNumber");

	AInventoryData_C_GetChar_DeathAnimNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfDeathAnim != nullptr)
		*NumberOfDeathAnim = params.NumberOfDeathAnim;
}


// Function InventoryData.InventoryData_C.GetChar_IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsSprinting(bool* IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsSprinting");

	AInventoryData_C_GetChar_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSprinting != nullptr)
		*IsSprinting = params.IsSprinting;
}


// Function InventoryData.InventoryData_C.GetChar_HasCharWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_HasCharWeaponsComponent(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_HasCharWeaponsComponent");

	AInventoryData_C_GetChar_HasCharWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function InventoryData.InventoryData_C.GetChar_CharacterWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAC_CharacterWeapons_C*  CWC_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AInventoryData_C::GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_CharacterWeaponsComponent");

	AInventoryData_C_GetChar_CharacterWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CWC_Reference != nullptr)
		*CWC_Reference = params.CWC_Reference;
}


// Function InventoryData.InventoryData_C.CWC_GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C*         HUD_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AInventoryData_C::CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.CWC_GetHUD");

	AInventoryData_C_CWC_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Reference != nullptr)
		*HUD_Reference = params.HUD_Reference;
}


// Function InventoryData.InventoryData_C.GetChar_CurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CurrentCamera                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WeaponCamActive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_CurrentCamera");

	AInventoryData_C_GetChar_CurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (WeaponCamActive != nullptr)
		*WeaponCamActive = params.WeaponCamActive;
}


// Function InventoryData.InventoryData_C.GetChar_IsCloaked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cloak                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsCloaked");

	AInventoryData_C_GetChar_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloak != nullptr)
		*Cloak = params.Cloak;
}


// Function InventoryData.InventoryData_C.GetChar_CurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_CurrentHealth(float* CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_CurrentHealth");

	AInventoryData_C_GetChar_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHP != nullptr)
		*CurrentHP = params.CurrentHP;
}


// Function InventoryData.InventoryData_C.GetChar_IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_IsZooming(bool* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_IsZooming");

	AInventoryData_C_GetChar_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function InventoryData.InventoryData_C.GetChar_SpeedAndDirectionClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::GetChar_SpeedAndDirectionClient(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.GetChar_SpeedAndDirectionClient");

	AInventoryData_C_GetChar_SpeedAndDirectionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function InventoryData.InventoryData_C.StartReloadTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::StartReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.StartReloadTimer");

	AInventoryData_C_StartReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PlaceSpecialItem
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::PlaceSpecialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PlaceSpecialItem");

	AInventoryData_C_PlaceSpecialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.DestroyInventoryOnly
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::DestroyInventoryOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.DestroyInventoryOnly");

	AInventoryData_C_DestroyInventoryOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.DisableZoomButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ButtonDown_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::DisableZoomButton(bool* ButtonDown_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.DisableZoomButton");

	AInventoryData_C_DisableZoomButton_Params params;
	params.ButtonDown_ = ButtonDown_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.WeaponHasZoom?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          Weapon_Zoom                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool AInventoryData_C::WeaponHasZoom_(float* Weapon_Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.WeaponHasZoom?");

	AInventoryData_C_WeaponHasZoom__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon_Zoom != nullptr)
		*Weapon_Zoom = params.Weapon_Zoom;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.AnimationMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::AnimationMontage(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.AnimationMontage");

	AInventoryData_C_AnimationMontage_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Player is stopped
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryData_C::Player_is_stopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Player is stopped");

	AInventoryData_C_Player_is_stopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.Use Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Use_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Use Weapon");

	AInventoryData_C_Use_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Open Loot Chest 
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Open_Loot_Chest_()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Open Loot Chest ");

	AInventoryData_C_Open_Loot_Chest__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Use Crafting Station
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Use_Crafting_Station()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Use Crafting Station");

	AInventoryData_C_Use_Crafting_Station_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Consume Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Consume_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Consume Item");

	AInventoryData_C_Consume_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Trace from Actor Eyes View
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Trace_from_Actor_Eyes_View(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Trace from Actor Eyes View");

	AInventoryData_C_Get_Trace_from_Actor_Eyes_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function InventoryData.InventoryData_C.Get Camera Trace
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Camera_Trace(float* Range, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Camera Trace");

	AInventoryData_C_Get_Camera_Trace_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function InventoryData.InventoryData_C.Get Weapon Zoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Weapon_Zoom(float* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Weapon Zoom");

	AInventoryData_C_Get_Weapon_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function InventoryData.InventoryData_C.Spawn Throwables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FThrowablesData*        Throwables_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawned_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Spawn_Throwables(struct FThrowablesData* Throwables_Data, bool* Spawned_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Spawn Throwables");

	AInventoryData_C_Spawn_Throwables_Params params;
	params.Throwables_Data = Throwables_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawned_ != nullptr)
		*Spawned_ = params.Spawned_;
}


// Function InventoryData.InventoryData_C.Stop Reload
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Stop_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Stop Reload");

	AInventoryData_C_Stop_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Reload Selected Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Reload_Selected_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Reload Selected Weapon");

	AInventoryData_C_Reload_Selected_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Ammo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Ammo_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AItemBase_C*             Ammo                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Ammo_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Ammo(class UClass** Ammo_Type, bool* Found_, class AItemBase_C** Ammo, int* Ammo_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Ammo");

	AInventoryData_C_Get_Ammo_Params params;
	params.Ammo_Type = Ammo_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
	if (Ammo != nullptr)
		*Ammo = params.Ammo;
	if (Ammo_Index != nullptr)
		*Ammo_Index = params.Ammo_Index;
}


// Function InventoryData.InventoryData_C.Melee Weapon Trace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Weapon_Range                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryData_C::Melee_Weapon_Trace(float* Weapon_Range, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Melee Weapon Trace");

	AInventoryData_C_Melee_Weapon_Trace_Params params;
	params.Weapon_Range = Weapon_Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.OnRep_Weapon Zoom
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::OnRep_Weapon_Zoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.OnRep_Weapon Zoom");

	AInventoryData_C_OnRep_Weapon_Zoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C. Disable Weapon Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::_Disable_Weapon_Zoom(bool* Enable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C. Disable Weapon Zoom");

	AInventoryData_C__Disable_Weapon_Zoom_Params params;
	params.Enable_ = Enable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Spawn Projectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Weapon_Damage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Spread_With_Zoom               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Spread_Without_Zoom            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponType>*      Weapon_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Explosion_Range                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Spawn_Projectile(float* Weapon_Damage, float* Spread_With_Zoom, float* Spread_Without_Zoom, class UClass** Projectile, TEnumAsByte<EWeaponType>* Weapon_Type, float* Explosion_Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Spawn Projectile");

	AInventoryData_C_Spawn_Projectile_Params params;
	params.Weapon_Damage = Weapon_Damage;
	params.Spread_With_Zoom = Spread_With_Zoom;
	params.Spread_Without_Zoom = Spread_Without_Zoom;
	params.Projectile = Projectile;
	params.Weapon_Type = Weapon_Type;
	params.Explosion_Range = Explosion_Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Stop Use Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsShootWeapon_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Stop_Use_Weapon(bool* IsShootWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Stop Use Weapon");

	AInventoryData_C_Stop_Use_Weapon_Params params;
	params.IsShootWeapon_ = IsShootWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Find Previous Item
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Found_Item_Index               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Find_Previous_Item(int* Found_Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Find Previous Item");

	AInventoryData_C_Find_Previous_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Item_Index != nullptr)
		*Found_Item_Index = params.Found_Item_Index;
}


// Function InventoryData.InventoryData_C.Find Next Item
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Found_Item_Index               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Find_Next_Item(int* Found_Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Find Next Item");

	AInventoryData_C_Find_Next_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Item_Index != nullptr)
		*Found_Item_Index = params.Found_Item_Index;
}


// Function InventoryData.InventoryData_C.Remove Weapon 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Remove_Weapon_(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Remove Weapon ");

	AInventoryData_C_Remove_Weapon__Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Weapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Weapon_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Got_It_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AWeaponFirearmBase_C*    weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Weapon(int* Weapon_Index, bool* Got_It_, class AWeaponFirearmBase_C** weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Weapon");

	AInventoryData_C_Get_Weapon_Params params;
	params.Weapon_Index = Weapon_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Got_It_ != nullptr)
		*Got_It_ = params.Got_It_;
	if (weapon != nullptr)
		*weapon = params.weapon;
}


// Function InventoryData.InventoryData_C.Open Loot Chest
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Open_Loot_Chest()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Open Loot Chest");

	AInventoryData_C_Open_Loot_Chest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Split Item
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Split_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Split Item");

	AInventoryData_C_Split_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Can Split Inventory Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Can_Split_Inventory_Item(bool* Can_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Can Split Inventory Item");

	AInventoryData_C_Can_Split_Inventory_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
}


// Function InventoryData.InventoryData_C.Can Split Bar Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Can_Split_Bar_Item(bool* Can_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Can Split Bar Item");

	AInventoryData_C_Can_Split_Bar_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;
}


// Function InventoryData.InventoryData_C.Get Drop Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AInventoryData_C::Get_Drop_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Drop Location");

	AInventoryData_C_Get_Drop_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.Full Inventory?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Full_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Full_Inventory_(bool* Full_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Full Inventory?");

	AInventoryData_C_Full_Inventory__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full_ != nullptr)
		*Full_ = params.Full_;
}


// Function InventoryData.InventoryData_C.Find Empty Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryData_C::Find_Empty_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Find Empty Slot");

	AInventoryData_C_Find_Empty_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.Find Item to Stack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InventoryAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found_                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Find_Item_to_Stack(class UClass** Item, int* Amount, TEnumAsByte<EInventoryType>* Inventory_Type, int* InventoryAmount, bool* Found_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Find Item to Stack");

	AInventoryData_C_Find_Item_to_Stack_Params params;
	params.Item = Item;
	params.Amount = Amount;
	params.Inventory_Type = Inventory_Type;
	params.InventoryAmount = InventoryAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_ != nullptr)
		*Found_ = params.Found_;
}


// Function InventoryData.InventoryData_C.Get Consumable Data from Selection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FConsumableData         Consumable_Data                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Consumable_Data_from_Selection(struct FConsumableData* Consumable_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Consumable Data from Selection");

	AInventoryData_C_Get_Consumable_Data_from_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Consumable_Data != nullptr)
		*Consumable_Data = params.Consumable_Data;
}


// Function InventoryData.InventoryData_C.Cancel Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WasInteractButtonClicked_      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Cancel_Use(bool* WasInteractButtonClicked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Cancel Use");

	AInventoryData_C_Cancel_Use_Params params;
	params.WasInteractButtonClicked_ = WasInteractButtonClicked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Timer Use From Selection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Timer_To_Consume               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Timer_Use_From_Selection(float* Timer_To_Consume)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Timer Use From Selection");

	AInventoryData_C_Get_Timer_Use_From_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timer_To_Consume != nullptr)
		*Timer_To_Consume = params.Timer_To_Consume;
}


// Function InventoryData.InventoryData_C.StartConsumeItem
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::StartConsumeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.StartConsumeItem");

	AInventoryData_C_StartConsumeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Item Category From Selection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemCategory>     Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Item_Category_From_Selection(TEnumAsByte<EItemCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Item Category From Selection");

	AInventoryData_C_Get_Item_Category_From_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function InventoryData.InventoryData_C.Selected Item to Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Selected_Item_to_Drop(TEnumAsByte<EInventoryType>* Inventory_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Selected Item to Drop");

	AInventoryData_C_Selected_Item_to_Drop_Params params;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Inventory Slots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AItemBase_C*>     Inventory_Slots                (Parm, OutParm, ZeroConstructor)

void AInventoryData_C::Get_Inventory_Slots(TArray<class AItemBase_C*>* Inventory_Slots)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Inventory Slots");

	AInventoryData_C_Get_Inventory_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory_Slots != nullptr)
		*Inventory_Slots = params.Inventory_Slots;
}


// Function InventoryData.InventoryData_C.Drop Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemBase_C**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Split_Amount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDropAction>*      Drop_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Drop_Item(class AItemBase_C** Item, int* Split_Amount, TEnumAsByte<EDropAction>* Drop_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Drop Item");

	AInventoryData_C_Drop_Item_Params params;
	params.Item = Item;
	params.Split_Amount = Split_Amount;
	params.Drop_Type = Drop_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Destroy Inventory
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Destroy_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Destroy Inventory");

	AInventoryData_C_Destroy_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Remove Inventory Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERemoveItemAction>* Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Remove_Inventory_Item(int* Index, TEnumAsByte<ERemoveItemAction>* Action, TEnumAsByte<EInventoryType>* Inventory_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Remove Inventory Item");

	AInventoryData_C_Remove_Inventory_Item_Params params;
	params.Index = Index;
	params.Action = Action;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Select Previous Slot
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Select_Previous_Slot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Select Previous Slot");

	AInventoryData_C_Select_Previous_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Select Next Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bItemDestroyed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Select_Next_Slot(bool* bItemDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Select Next Slot");

	AInventoryData_C_Select_Next_Slot_Params params;
	params.bItemDestroyed = bItemDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Select Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlotsIndex>*      Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Pawn_C**             NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Select_Slot(TEnumAsByte<ESlotsIndex>* Slot, class ABP_Pawn_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Select Slot");

	AInventoryData_C_Select_Slot_Params params;
	params.Slot = Slot;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Move Item To
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Old_Slot_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           New_Slot_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Move_Item_To(int* Old_Slot_Index, int* New_Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Move Item To");

	AInventoryData_C_Move_Item_To_Params params;
	params.Old_Slot_Index = Old_Slot_Index;
	params.New_Slot_Index = New_Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Swap Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FirstIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SecondIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Swap_Item(int* FirstIndex, int* SecondIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Swap Item");

	AInventoryData_C_Swap_Item_Params params;
	params.FirstIndex = FirstIndex;
	params.SecondIndex = SecondIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Select Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Select_Item(int* Index, TEnumAsByte<EInventoryType>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Select Item");

	AInventoryData_C_Select_Item_Params params;
	params.Index = Index;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Has Item in this Inventory Slot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryData_C::Has_Item_in_this_Inventory_Slot(int* Index, TEnumAsByte<EInventoryType>* Inventory_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Has Item in this Inventory Slot");

	AInventoryData_C_Has_Item_in_this_Inventory_Slot_Params params;
	params.Index = Index;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InventoryData.InventoryData_C.Pick Item Found
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Pick_Item_Found()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Pick Item Found");

	AInventoryData_C_Pick_Item_Found_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Find Item or Structure
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          ReturnValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Find_Item_or_Structure(struct FHitResult* HitResult, bool* ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Find Item or Structure");

	AInventoryData_C_Find_Item_or_Structure_Params params;
	params.HitResult = HitResult;
	params.ReturnValue = ReturnValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Set Inventory Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemBase_C**            New_Item                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Set_Inventory_Item(class AItemBase_C** New_Item, TEnumAsByte<EInventoryType>* Inventory_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Set Inventory Item");

	AInventoryData_C_Set_Inventory_Item_Params params;
	params.New_Item = New_Item;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Get Inventory Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>*   Inventory_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AItemBase_C*             Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Get_Inventory_Item(int* Index, TEnumAsByte<EInventoryType>* Inventory_Type, class AItemBase_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Get Inventory Item");

	AInventoryData_C_Get_Inventory_Item_Params params;
	params.Index = Index;
	params.Inventory_Type = Inventory_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function InventoryData.InventoryData_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AInventoryData_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Timeline_0__FinishedFunc");

	AInventoryData_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AInventoryData_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Timeline_0__UpdateFunc");

	AInventoryData_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Zoom__FinishedFunc
// (BlueprintEvent)

void AInventoryData_C::Zoom__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Zoom__FinishedFunc");

	AInventoryData_C_Zoom__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Zoom__UpdateFunc
// (BlueprintEvent)

void AInventoryData_C::Zoom__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Zoom__UpdateFunc");

	AInventoryData_C_Zoom__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuyWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Primary_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuyWeapon(class UClass** Primary, bool* Primary_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuyWeapon");

	AInventoryData_C_PMSBuyWeapon_Params params;
	params.Primary = Primary;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuyConsumable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Consumable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuyConsumable(class UClass** Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuyConsumable");

	AInventoryData_C_PMSBuyConsumable_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMS_SellWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMS_SellWeapon(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMS_SellWeapon");

	AInventoryData_C_PMS_SellWeapon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuyAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 AmmoType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FillUpFull_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Bar_Selection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuyAmmo(class UClass** AmmoType, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuyAmmo");

	AInventoryData_C_PMSBuyAmmo_Params params;
	params.AmmoType = AmmoType;
	params.Amount = Amount;
	params.FillUpFull_ = FillUpFull_;
	params.WeaponName = WeaponName;
	params.Bar_Selection = Bar_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuyMeleeWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Melee                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuyMeleeWeapon(class UClass** Melee)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuyMeleeWeapon");

	AInventoryData_C_PMSBuyMeleeWeapon_Params params;
	params.Melee = Melee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuyThrowable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Throwable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuyThrowable(class UClass** Throwable)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuyThrowable");

	AInventoryData_C_PMSBuyThrowable_Params params;
	params.Throwable = Throwable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSRefillThrowable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Throwable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FillUpFull_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSRefillThrowable(class UClass** Throwable, bool* FillUpFull_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSRefillThrowable");

	AInventoryData_C_PMSRefillThrowable_Params params;
	params.Throwable = Throwable;
	params.FillUpFull_ = FillUpFull_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PMSBuySpecialItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 SpecialItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::PMSBuySpecialItem(class UClass** SpecialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PMSBuySpecialItem");

	AInventoryData_C_PMSBuySpecialItem_Params params;
	params.SpecialItem = SpecialItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.DecreaseSpecialItemWithDelay
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::DecreaseSpecialItemWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.DecreaseSpecialItemWithDelay");

	AInventoryData_C_DecreaseSpecialItemWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SpawnFullGroundParticles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::SpawnFullGroundParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SpawnFullGroundParticles");

	AInventoryData_C_SpawnFullGroundParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SetWeapons_WeaponsOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 MainWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SecondaryWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MeleeWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 GrenadeWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::SetWeapons_WeaponsOnly(class UClass** MainWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SetWeapons_WeaponsOnly");

	AInventoryData_C_SetWeapons_WeaponsOnly_Params params;
	params.MainWeapon = MainWeapon;
	params.SecondaryWeapon = SecondaryWeapon;
	params.MeleeWeapon = MeleeWeapon;
	params.GrenadeWeapon = GrenadeWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.DestroyGroundParticlesAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::DestroyGroundParticlesAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.DestroyGroundParticlesAll");

	AInventoryData_C_DestroyGroundParticlesAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SpawnGroundParticles
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::SpawnGroundParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SpawnGroundParticles");

	AInventoryData_C_SpawnGroundParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.InventoryTrace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          ReturnValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::InventoryTrace(struct FHitResult* HitResult, bool* ReturnValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.InventoryTrace");

	AInventoryData_C_InventoryTrace_Params params;
	params.HitResult = HitResult;
	params.ReturnValue = ReturnValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Swap
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Swap()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Swap");

	AInventoryData_C_Swap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.EventInventoryCloakWeapons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Cloak                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::EventInventoryCloakWeapons(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.EventInventoryCloakWeapons");

	AInventoryData_C_EventInventoryCloakWeapons_Params params;
	params.Cloak = Cloak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Event Player Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Event_Player_Destroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Event Player Destroyed");

	AInventoryData_C_Event_Player_Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SetConsumeBarVisibility
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::SetConsumeBarVisibility(bool* Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SetConsumeBarVisibility");

	AInventoryData_C_SetConsumeBarVisibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SetConsumeBarPercentEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::SetConsumeBarPercentEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SetConsumeBarPercentEvent");

	AInventoryData_C_SetConsumeBarPercentEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.ConsumeReloadTimer
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::ConsumeReloadTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.ConsumeReloadTimer");

	AInventoryData_C_ConsumeReloadTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.StartConsumeTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::StartConsumeTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.StartConsumeTimerEvent");

	AInventoryData_C_StartConsumeTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.EventServerCalloutAnnouncement
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::EventServerCalloutAnnouncement(class USoundBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.EventServerCalloutAnnouncement");

	AInventoryData_C_EventServerCalloutAnnouncement_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.TrajectoryEvent
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::TrajectoryEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.TrajectoryEvent");

	AInventoryData_C_TrajectoryEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SetWeaponsInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Pawn_C**             CharReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 PrimaryWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 SecondaryWeapon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MeleeWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 GrenadeWeapon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmmoAmountMultiplier           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ThrowableAmount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SmallMedicKitAmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BigMedicKitAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponMagSizeMultiplier        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClassIntSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MeleeWeaponDamageMultiplier    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BonebreakerPerk34Selected      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BonebreakerPerk36Selected      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FromLobby_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::SetWeaponsInventory(class ABP_Pawn_C** CharReference, class UClass** PrimaryWeapon, class UClass** SecondaryWeapon, class UClass** MeleeWeapon, class UClass** GrenadeWeapon, float* AmmoAmountMultiplier, int* ThrowableAmount, int* SmallMedicKitAmount, int* BigMedicKitAmount, float* WeaponMagSizeMultiplier, int* ClassIntSlot, float* MeleeWeaponDamageMultiplier, bool* BonebreakerPerk34Selected, bool* BonebreakerPerk36Selected, bool* FromLobby_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SetWeaponsInventory");

	AInventoryData_C_SetWeaponsInventory_Params params;
	params.CharReference = CharReference;
	params.PrimaryWeapon = PrimaryWeapon;
	params.SecondaryWeapon = SecondaryWeapon;
	params.MeleeWeapon = MeleeWeapon;
	params.GrenadeWeapon = GrenadeWeapon;
	params.AmmoAmountMultiplier = AmmoAmountMultiplier;
	params.ThrowableAmount = ThrowableAmount;
	params.SmallMedicKitAmount = SmallMedicKitAmount;
	params.BigMedicKitAmount = BigMedicKitAmount;
	params.WeaponMagSizeMultiplier = WeaponMagSizeMultiplier;
	params.ClassIntSlot = ClassIntSlot;
	params.MeleeWeaponDamageMultiplier = MeleeWeaponDamageMultiplier;
	params.BonebreakerPerk34Selected = BonebreakerPerk34Selected;
	params.BonebreakerPerk36Selected = BonebreakerPerk36Selected;
	params.FromLobby_ = FromLobby_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Throw Throwable
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Throw_Throwable()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Throw Throwable");

	AInventoryData_C_Throw_Throwable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.TrajectoryReleased
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::TrajectoryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.TrajectoryReleased");

	AInventoryData_C_TrajectoryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.TrajectoryPressed
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::TrajectoryPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.TrajectoryPressed");

	AInventoryData_C_TrajectoryPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SelectSlot1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlotsIndex>*      Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::SelectSlot1(TEnumAsByte<ESlotsIndex>* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SelectSlot1");

	AInventoryData_C_SelectSlot1_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Weapon Zoom Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::Weapon_Zoom_Timer(bool* Enable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Weapon Zoom Timer");

	AInventoryData_C_Weapon_Zoom_Timer_Params params;
	params.Enable_ = Enable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.Event to Update Inventory
// (BlueprintCallable, BlueprintEvent)

void AInventoryData_C::Event_to_Update_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.Event to Update Inventory");

	AInventoryData_C_Event_to_Update_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInventoryData_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.ReceiveBeginPlay");

	AInventoryData_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.StopMeleeTrace
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.StopMeleeTrace");

	AInventoryData_C_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.ArmorPickupInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RubberArmor_C**      PickupRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Autopickup_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.ArmorPickupInterface");

	AInventoryData_C_ArmorPickupInterface_Params params;
	params.PickupRef = PickupRef;
	params.Autopickup_ = Autopickup_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.WPN_CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::WPN_CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.WPN_CantShoot");

	AInventoryData_C_WPN_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.CWC_SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::CWC_SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.CWC_SwitchCamera");

	AInventoryData_C_CWC_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.WPN_SetWeaponToInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPA_ParentWeapon_C**    WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoPickUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.WPN_SetWeaponToInteract");

	AInventoryData_C_WPN_SetWeaponToInteract_Params params;
	params.WeaponReference = WeaponReference;
	params.AutoPickUp = AutoPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.AmmoPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AddAmmoTypes>*   Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponTypes>*    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ProjectileType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.AmmoPickup");

	AInventoryData_C_AmmoPickup_Params params;
	params.Mode = Mode;
	params.WeaponID = WeaponID;
	params.AmountAmmo = AmountAmmo;
	params.WeaponType = WeaponType;
	params.ProjectileType = ProjectileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.AnimBP_AnimationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.AnimBP_AnimationRequest");

	AInventoryData_C_AnimBP_AnimationRequest_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.WPN_Recoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::WPN_Recoil(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.WPN_Recoil");

	AInventoryData_C_WPN_Recoil_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.CWC_RefreshWeaponInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void AInventoryData_C::CWC_RefreshWeaponInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.CWC_RefreshWeaponInHUD");

	AInventoryData_C_CWC_RefreshWeaponInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PC_CharInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PCReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UW_WpnCompHUD_C**        WPNHUD                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AInventoryData_C::PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PC_CharInitialization");

	AInventoryData_C_PC_CharInitialization_Params params;
	params.PCReference = PCReference;
	params.WPNHUD = WPNHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.PC_SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C**        HUD_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AInventoryData_C::PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.PC_SetHUD");

	AInventoryData_C_PC_SetHUD_Params params;
	params.HUD_Reference = HUD_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.SpawnThrowableEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::SpawnThrowableEvent(class UClass** Grenade)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.SpawnThrowableEvent");

	AInventoryData_C_SpawnThrowableEvent_Params params;
	params.Grenade = Grenade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventoryData.InventoryData_C.ExecuteUbergraph_InventoryData
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AInventoryData_C::ExecuteUbergraph_InventoryData(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventoryData.InventoryData_C.ExecuteUbergraph_InventoryData");

	AInventoryData_C_ExecuteUbergraph_InventoryData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

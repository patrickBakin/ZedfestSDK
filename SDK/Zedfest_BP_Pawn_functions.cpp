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

// Function BP_Pawn.BP_Pawn_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Type");

	ABP_Pawn_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABP_Pawn_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Title");

	ABP_Pawn_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ABP_Pawn_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Sub Title");

	ABP_Pawn_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ABP_Pawn_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Level");

	ABP_Pawn_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Amount");

	ABP_Pawn_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Color");

	ABP_Pawn_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BP_Pawn.BP_Pawn_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABP_Pawn_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Widget Key Binds");

	ABP_Pawn_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BP_Pawn.BP_Pawn_C.Set Detail 1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_Pawn_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Detail 1");

	ABP_Pawn_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_Pawn.BP_Pawn_C.Set Detail 2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_Pawn_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Detail 2");

	ABP_Pawn_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_Pawn.BP_Pawn_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_Pawn_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Detail 3");

	ABP_Pawn_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_Pawn.BP_Pawn_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABP_Pawn_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Set Detail 4");

	ABP_Pawn_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirectionClient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_SpeedAndDirectionClient(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirectionClient");

	ABP_Pawn_C_GetChar_SpeedAndDirectionClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_Mesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkMesh                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::GetChar_Mesh(class USkeletalMeshComponent** SkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_Mesh");

	ABP_Pawn_C_GetChar_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkMesh != nullptr)
		*SkMesh = params.SkMesh;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponFirearmBase_C*    CurrentWeaponReference         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_CurrentWeapon(class AWeaponFirearmBase_C** CurrentWeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_CurrentWeapon");

	ABP_Pawn_C_GetChar_CurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeaponReference != nullptr)
		*CurrentWeaponReference = params.CurrentWeaponReference;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_SpeedAndDirection(float* Speed, float* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_SpeedAndDirection");

	ABP_Pawn_C_GetChar_SpeedAndDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsDead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsDead(bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsDead");

	ABP_Pawn_C_GetChar_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCrouching                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsCrouching(bool* IsCrouching)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsCrouching");

	ABP_Pawn_C_GetChar_IsCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCrouching != nullptr)
		*IsCrouching = params.IsCrouching;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsJumping                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsJumping(bool* IsJumping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsJumping");

	ABP_Pawn_C_GetChar_IsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsJumping != nullptr)
		*IsJumping = params.IsJumping;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsPlayAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsPlayAnim(bool* IsPlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsPlayAnim");

	ABP_Pawn_C_GetChar_IsPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlayAnim != nullptr)
		*IsPlayAnim = params.IsPlayAnim;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_PitchAndYaw
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_PitchAndYaw(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_PitchAndYaw");

	ABP_Pawn_C_GetChar_PitchAndYaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_DeathAnimNumber
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfDeathAnim              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_DeathAnimNumber(int* NumberOfDeathAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_DeathAnimNumber");

	ABP_Pawn_C_GetChar_DeathAnimNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumberOfDeathAnim != nullptr)
		*NumberOfDeathAnim = params.NumberOfDeathAnim;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSprinting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsSprinting(bool* IsSprinting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsSprinting");

	ABP_Pawn_C_GetChar_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSprinting != nullptr)
		*IsSprinting = params.IsSprinting;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_HasCharWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_HasCharWeaponsComponent(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_HasCharWeaponsComponent");

	ABP_Pawn_C_GetChar_HasCharWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_CharacterWeaponsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAC_CharacterWeapons_C*  CWC_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::GetChar_CharacterWeaponsComponent(class UAC_CharacterWeapons_C** CWC_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_CharacterWeaponsComponent");

	ABP_Pawn_C_GetChar_CharacterWeaponsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CWC_Reference != nullptr)
		*CWC_Reference = params.CWC_Reference;
}


// Function BP_Pawn.BP_Pawn_C.CWC_GetHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C*         HUD_Reference                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::CWC_GetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CWC_GetHUD");

	ABP_Pawn_C_CWC_GetHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUD_Reference != nullptr)
		*HUD_Reference = params.HUD_Reference;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CurrentCamera                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           WeaponCamActive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_CurrentCamera(class UCameraComponent** CurrentCamera, bool* WeaponCamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_CurrentCamera");

	ABP_Pawn_C_GetChar_CurrentCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCamera != nullptr)
		*CurrentCamera = params.CurrentCamera;
	if (WeaponCamActive != nullptr)
		*WeaponCamActive = params.WeaponCamActive;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsCloaked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cloak                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsCloaked");

	ABP_Pawn_C_GetChar_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cloak != nullptr)
		*Cloak = params.Cloak;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_CurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHP                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_CurrentHealth(float* CurrentHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_CurrentHealth");

	ABP_Pawn_C_GetChar_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHP != nullptr)
		*CurrentHP = params.CurrentHP;
}


// Function BP_Pawn.BP_Pawn_C.GetChar_IsZooming
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Zoom                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetChar_IsZooming(bool* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetChar_IsZooming");

	ABP_Pawn_C_GetChar_IsZooming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom != nullptr)
		*Zoom = params.Zoom;
}


// Function BP_Pawn.BP_Pawn_C.CheckSwimming
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CheckSwimming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CheckSwimming");

	ABP_Pawn_C_CheckSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.GetAngleOfSurface
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::GetAngleOfSurface(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetAngleOfSurface");

	ABP_Pawn_C_GetAngleOfSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_Pawn.BP_Pawn_C.UpdatingCharacterPhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::UpdatingCharacterPhysics(class UObject** InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.UpdatingCharacterPhysics");

	ABP_Pawn_C_UpdatingCharacterPhysics_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ShieldCurrent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ShieldCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ShieldCurrent");

	ABP_Pawn_C_OnRep_ShieldCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_KeyCard
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_KeyCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_KeyCard");

	ABP_Pawn_C_OnRep_KeyCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_IsDead
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_IsDead");

	ABP_Pawn_C_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CreateHeadText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CreateHeadText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CreateHeadText");

	ABP_Pawn_C_CreateHeadText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ClientPitch
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ClientPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ClientPitch");

	ABP_Pawn_C_OnRep_ClientPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingSpeed
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ClientMovingSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingSpeed");

	ABP_Pawn_C_OnRep_ClientMovingSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ClientMovingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ClientMovingDirection");

	ABP_Pawn_C_OnRep_ClientMovingDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_Ragdolling
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_Ragdolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_Ragdolling");

	ABP_Pawn_C_OnRep_Ragdolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_GrenadeCurrent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_GrenadeCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_GrenadeCurrent");

	ABP_Pawn_C_OnRep_GrenadeCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_Stamina
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_Stamina");

	ABP_Pawn_C_OnRep_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ArmorCurrent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ArmorCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ArmorCurrent");

	ABP_Pawn_C_OnRep_ArmorCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_ShowSniperScope
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_ShowSniperScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_ShowSniperScope");

	ABP_Pawn_C_OnRep_ShowSniperScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_HealthCurrent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_HealthCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_HealthCurrent");

	ABP_Pawn_C_OnRep_HealthCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnRep_Crouch Button Down
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnRep_Crouch_Button_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnRep_Crouch Button Down");

	ABP_Pawn_C_OnRep_Crouch_Button_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.F_GetFVectorAndRightVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RightVector                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::F_GetFVectorAndRightVector(struct FVector* ForwardVector, struct FVector* RightVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.F_GetFVectorAndRightVector");

	ABP_Pawn_C_F_GetFVectorAndRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
	if (RightVector != nullptr)
		*RightVector = params.RightVector;
}


// Function BP_Pawn.BP_Pawn_C.F_GetOverlapResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanRagdol_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::F_GetOverlapResult(class UObject** Object, class UPrimitiveComponent** Comp, bool* CanRagdol_, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.F_GetOverlapResult");

	ABP_Pawn_C_F_GetOverlapResult_Params params;
	params.Object = Object;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRagdol_ != nullptr)
		*CanRagdol_ = params.CanRagdol_;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function BP_Pawn.BP_Pawn_C.F_GetHitResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CanRagdol_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BodyVelocity                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::F_GetHitResult(class UPrimitiveComponent** Component, struct FHitResult* Hit, bool* CanRagdol_, struct FVector* Location, float* BodyVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.F_GetHitResult");

	ABP_Pawn_C_F_GetHitResult_Params params;
	params.Component = Component;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanRagdol_ != nullptr)
		*CanRagdol_ = params.CanRagdol_;
	if (Location != nullptr)
		*Location = params.Location;
	if (BodyVelocity != nullptr)
		*BodyVelocity = params.BodyVelocity;
}


// Function BP_Pawn.BP_Pawn_C.F_GetLookRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::F_GetLookRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.F_GetLookRotation");

	ABP_Pawn_C_F_GetLookRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_2__FinishedFunc");

	ABP_Pawn_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_2__UpdateFunc");

	ABP_Pawn_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_1__FinishedFunc");

	ABP_Pawn_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_1__UpdateFunc");

	ABP_Pawn_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_0__FinishedFunc");

	ABP_Pawn_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Pawn_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Timeline_0__UpdateFunc");

	ABP_Pawn_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_34(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_34");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_33(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_33");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_AimButton_K2Node_InputActionEvent_32(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_32");

	ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_AimButton_K2Node_InputActionEvent_31(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_31");

	ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_RagdollButton_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_RagdollButton_K2Node_InputActionEvent_30(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_RagdollButton_K2Node_InputActionEvent_30");

	ABP_Pawn_C_InpActEvt_RagdollButton_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_AimButton_K2Node_InputActionEvent_29(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_29");

	ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_AimButton_K2Node_InputActionEvent_28(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_AimButton_K2Node_InputActionEvent_28");

	ABP_Pawn_C_InpActEvt_AimButton_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_5299E62D49F62E94D70774B290F4BC51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnFailure_5299E62D49F62E94D70774B290F4BC51(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_5299E62D49F62E94D70774B290F4BC51");

	ABP_Pawn_C_OnFailure_5299E62D49F62E94D70774B290F4BC51_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_5299E62D49F62E94D70774B290F4BC51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnSuccess_5299E62D49F62E94D70774B290F4BC51(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_5299E62D49F62E94D70774B290F4BC51");

	ABP_Pawn_C_OnSuccess_5299E62D49F62E94D70774B290F4BC51_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_F7C563754A811AC42B68CFABEF895E3D
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnFailure_F7C563754A811AC42B68CFABEF895E3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_F7C563754A811AC42B68CFABEF895E3D");

	ABP_Pawn_C_OnFailure_F7C563754A811AC42B68CFABEF895E3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_F7C563754A811AC42B68CFABEF895E3D
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnSuccess_F7C563754A811AC42B68CFABEF895E3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_F7C563754A811AC42B68CFABEF895E3D");

	ABP_Pawn_C_OnSuccess_F7C563754A811AC42B68CFABEF895E3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27");

	ABP_Pawn_C_InpActEvt_PunchWeaponButton_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_26(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_26");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory6Button_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory6Button_K2Node_InputActionEvent_25(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory6Button_K2Node_InputActionEvent_25");

	ABP_Pawn_C_InpActEvt_Inventory6Button_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory5Button_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory5Button_K2Node_InputActionEvent_24(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory5Button_K2Node_InputActionEvent_24");

	ABP_Pawn_C_InpActEvt_Inventory5Button_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory4Button_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory4Button_K2Node_InputActionEvent_23(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory4Button_K2Node_InputActionEvent_23");

	ABP_Pawn_C_InpActEvt_Inventory4Button_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory3Button_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory3Button_K2Node_InputActionEvent_22(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory3Button_K2Node_InputActionEvent_22");

	ABP_Pawn_C_InpActEvt_Inventory3Button_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory2Button_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory2Button_K2Node_InputActionEvent_21(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory2Button_K2Node_InputActionEvent_21");

	ABP_Pawn_C_InpActEvt_Inventory2Button_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory1Button_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Inventory1Button_K2Node_InputActionEvent_20(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Inventory1Button_K2Node_InputActionEvent_20");

	ABP_Pawn_C_InpActEvt_Inventory1Button_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_19(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_19");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_18(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_18");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_DropWeapon_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_DropWeapon_K2Node_InputActionEvent_17(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_DropWeapon_K2Node_InputActionEvent_17");

	ABP_Pawn_C_InpActEvt_DropWeapon_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Previous Inventory Slot_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Previous_Inventory_Slot_K2Node_InputActionEvent_16(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Previous Inventory Slot_K2Node_InputActionEvent_16");

	ABP_Pawn_C_InpActEvt_Previous_Inventory_Slot_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Next Inventory Slot_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Next_Inventory_Slot_K2Node_InputActionEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Next Inventory Slot_K2Node_InputActionEvent_15");

	ABP_Pawn_C_InpActEvt_Next_Inventory_Slot_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14");

	ABP_Pawn_C_InpActEvt_HolsterWeaponButton_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_InteractButton_K2Node_InputActionEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_13");

	ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_InteractButton_K2Node_InputActionEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_12");

	ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Reload_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Reload_K2Node_InputActionEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Reload_K2Node_InputActionEvent_11");

	ABP_Pawn_C_InpActEvt_Reload_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_10");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_ShootButton_K2Node_InputActionEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_ShootButton_K2Node_InputActionEvent_9");

	ABP_Pawn_C_InpActEvt_ShootButton_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_InteractButton_K2Node_InputActionEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_8");

	ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_InteractButton_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_InteractButton_K2Node_InputActionEvent_7");

	ABP_Pawn_C_InpActEvt_InteractButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_ADDB7E9F409496263BBCF98304208275
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnFailure_ADDB7E9F409496263BBCF98304208275()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_ADDB7E9F409496263BBCF98304208275");

	ABP_Pawn_C_OnFailure_ADDB7E9F409496263BBCF98304208275_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_ADDB7E9F409496263BBCF98304208275
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnSuccess_ADDB7E9F409496263BBCF98304208275()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_ADDB7E9F409496263BBCF98304208275");

	ABP_Pawn_C_OnSuccess_ADDB7E9F409496263BBCF98304208275_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B");

	ABP_Pawn_C_OnFailure_7C311DC24CBEA4EAF648D99BEC01A75B_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B");

	ABP_Pawn_C_OnSuccess_7C311DC24CBEA4EAF648D99BEC01A75B_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D");

	ABP_Pawn_C_OnFailure_C5CF4D5E41B77CB35AD8F0826FEC5C8D_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D");

	ABP_Pawn_C_OnSuccess_C5CF4D5E41B77CB35AD8F0826FEC5C8D_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_D196E57F409502B9488A1D8EC0884901
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnFailure_D196E57F409502B9488A1D8EC0884901()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_D196E57F409502B9488A1D8EC0884901");

	ABP_Pawn_C_OnFailure_D196E57F409502B9488A1D8EC0884901_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_D196E57F409502B9488A1D8EC0884901
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnSuccess_D196E57F409502B9488A1D8EC0884901()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_D196E57F409502B9488A1D8EC0884901");

	ABP_Pawn_C_OnSuccess_D196E57F409502B9488A1D8EC0884901_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_92D3060B49438364A7B3209551BB9598
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnFailure_92D3060B49438364A7B3209551BB9598()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_92D3060B49438364A7B3209551BB9598");

	ABP_Pawn_C_OnFailure_92D3060B49438364A7B3209551BB9598_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_92D3060B49438364A7B3209551BB9598
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::OnSuccess_92D3060B49438364A7B3209551BB9598()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_92D3060B49438364A7B3209551BB9598");

	ABP_Pawn_C_OnSuccess_92D3060B49438364A7B3209551BB9598_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53");

	ABP_Pawn_C_OnFailure_BFF290744CDE8E9F28B9A192BAEB9B53_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53");

	ABP_Pawn_C_OnSuccess_BFF290744CDE8E9F28B9A192BAEB9B53_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Jump_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_6");

	ABP_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Jump_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Jump_K2Node_InputActionEvent_5");

	ABP_Pawn_C_InpActEvt_Jump_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Sprint_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_4");

	ABP_Pawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_3");

	ABP_Pawn_C_InpActEvt_Sprint_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Crouch_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_2");

	ABP_Pawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::InpActEvt_Crouch_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpActEvt_Crouch_K2Node_InputActionEvent_1");

	ABP_Pawn_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Pawn_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReceiveHit");

	ABP_Pawn_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Pawn_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Pawn_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ServerComponentHit
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Hit_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent**    Other_Comp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Pawn_C::ServerComponentHit(class UPrimitiveComponent** Hit_Component, class UPrimitiveComponent** Other_Comp, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ServerComponentHit");

	ABP_Pawn_C_ServerComponentHit_Params params;
	params.Hit_Component = Hit_Component;
	params.Other_Comp = Other_Comp;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PlayLandedSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::PlayLandedSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PlayLandedSound");

	ABP_Pawn_C_PlayLandedSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReceiveBeginPlay");

	ABP_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PC_CharInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Base_HordeController_C** PCReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UW_WpnCompHUD_C**        WPNHUD                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::PC_CharInitialization(class ABP_Base_HordeController_C** PCReference, class UW_WpnCompHUD_C** WPNHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PC_CharInitialization");

	ABP_Pawn_C_PC_CharInitialization_Params params;
	params.PCReference = PCReference;
	params.WPNHUD = WPNHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.HealthAddInstant
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::HealthAddInstant(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.HealthAddInstant");

	ABP_Pawn_C_HealthAddInstant_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DispenserHealth
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DispenserHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DispenserHealth");

	ABP_Pawn_C_DispenserHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventAddHP
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::EventAddHP(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventAddHP");

	ABP_Pawn_C_EventAddHP_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DestroyHeadText
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DestroyHeadText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DestroyHeadText");

	ABP_Pawn_C_DestroyHeadText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SetSkeletalMeshesAll(class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesAll");

	ABP_Pawn_C_SetSkeletalMeshesAll_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SetSkeletalMeshesServer(class USkeletalMesh** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SetSkeletalMeshesServer");

	ABP_Pawn_C_SetSkeletalMeshesServer_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.TimerEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::TimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.TimerEvent");

	ABP_Pawn_C_TimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.LobbyClosed
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::LobbyClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.LobbyClosed");

	ABP_Pawn_C_LobbyClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.LobbyCameraTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::LobbyCameraTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.LobbyCameraTimer");

	ABP_Pawn_C_LobbyCameraTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.LobbyCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::LobbyCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.LobbyCamera");

	ABP_Pawn_C_LobbyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomEvent_1");

	ABP_Pawn_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.HideVisibilityHeadTextSelf
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::HideVisibilityHeadTextSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.HideVisibilityHeadTextSelf");

	ABP_Pawn_C_HideVisibilityHeadTextSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.LobbyClosedServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::LobbyClosedServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.LobbyClosedServer");

	ABP_Pawn_C_LobbyClosedServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::OnDestroyed_Event_1(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnDestroyed_Event_1");

	ABP_Pawn_C_OnDestroyed_Event_1_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EnterFPMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::EnterFPMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EnterFPMode");

	ABP_Pawn_C_EnterFPMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SetFirstPersonEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FirstPerson_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SetFirstPersonEvent(bool* FirstPerson_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SetFirstPersonEvent");

	ABP_Pawn_C_SetFirstPersonEvent_Params params;
	params.FirstPerson_ = FirstPerson_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Pawn_C::BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Pawn_C_BndEvt__HeadFalling_K2Node_ComponentBoundEvent_648_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventRemoveHPOverTime
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::EventRemoveHPOverTime(float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventRemoveHPOverTime");

	ABP_Pawn_C_EventRemoveHPOverTime_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RemoveEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::RemoveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RemoveEvent");

	ABP_Pawn_C_RemoveEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DecreaseHpOverTimeClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Blur_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::DecreaseHpOverTimeClient(bool* Blur_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DecreaseHpOverTimeClient");

	ABP_Pawn_C_DecreaseHpOverTimeClient_Params params;
	params.Blur_ = Blur_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ExpandingGroundEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ExpandingGroundEvent(float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ExpandingGroundEvent");

	ABP_Pawn_C_ExpandingGroundEvent_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClimbLocation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ClimbLocation(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClimbLocation");

	ABP_Pawn_C_ClimbLocation_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClimbEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClimbEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClimbEnd");

	ABP_Pawn_C_ClimbEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClimbRelease
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClimbRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClimbRelease");

	ABP_Pawn_C_ClimbRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Server_HeadRotation
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::Server_HeadRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Server_HeadRotation");

	ABP_Pawn_C_Server_HeadRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopHomingTrace
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopHomingTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopHomingTrace");

	ABP_Pawn_C_StopHomingTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RagdollTick
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::RagdollTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RagdollTick");

	ABP_Pawn_C_RagdollTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          is_fatal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_start                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          recover_end                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature(bool* Init, bool* is_fatal, bool* recover_start, bool* recover_end)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature");

	ABP_Pawn_C_BndEvt__bp_ragdoll_component_K2Node_ComponentBoundEvent_1_ragdoll_updated_client__DelegateSignature_Params params;
	params.Init = Init;
	params.is_fatal = is_fatal;
	params.recover_start = recover_start;
	params.recover_end = recover_end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopZoomEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopZoomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopZoomEvent");

	ABP_Pawn_C_StopZoomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StartAimTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StartAimTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StartAimTimer");

	ABP_Pawn_C_StartAimTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ShootButtonHoldEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ShootButtonHoldEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ShootButtonHoldEvent");

	ABP_Pawn_C_ShootButtonHoldEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StartStopAim
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StartStopAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StartStopAim");

	ABP_Pawn_C_StartStopAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.MulticastAiming
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsAiming                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::MulticastAiming(bool* IsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.MulticastAiming");

	ABP_Pawn_C_MulticastAiming_Params params;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ServerAiming
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsAiming                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ServerAiming(bool* IsAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ServerAiming");

	ABP_Pawn_C_ServerAiming_Params params;
	params.IsAiming = IsAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopTurnsEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopTurnsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopTurnsEvent");

	ABP_Pawn_C_StopTurnsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomEvent");

	ABP_Pawn_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.TurnLeftEventOff
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::TurnLeftEventOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.TurnLeftEventOff");

	ABP_Pawn_C_TurnLeftEventOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.TurnRightEventOff
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::TurnRightEventOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.TurnRightEventOff");

	ABP_Pawn_C_TurnRightEventOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.TurnLeftEventOn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::TurnLeftEventOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.TurnLeftEventOn");

	ABP_Pawn_C_TurnLeftEventOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.TurnRightEventOn
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::TurnRightEventOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.TurnRightEventOn");

	ABP_Pawn_C_TurnRightEventOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomEvent_2");

	ABP_Pawn_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomEvent_12
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomEvent_12()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomEvent_12");

	ABP_Pawn_C_CustomEvent_12_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Custom Direction Event
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::Custom_Direction_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Custom Direction Event");

	ABP_Pawn_C_Custom_Direction_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomPitchEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomPitchEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomPitchEvent");

	ABP_Pawn_C_CustomPitchEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244");

	ABP_Pawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181");

	ABP_Pawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_48(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48");

	ABP_Pawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
// (BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_41(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41");

	ABP_Pawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SwitchingClassClientEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PerkSwitch_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SwitchingClassClientEvent(bool* PerkSwitch_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SwitchingClassClientEvent");

	ABP_Pawn_C_SwitchingClassClientEvent_Params params;
	params.PerkSwitch_ = PerkSwitch_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SwitchingClassFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PerkSwitch_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SwitchingClassFromStoreEvent(bool* PerkSwitch_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SwitchingClassFromStoreEvent");

	ABP_Pawn_C_SwitchingClassFromStoreEvent_Params params;
	params.PerkSwitch_ = PerkSwitch_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AddShieldClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::AddShieldClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AddShieldClient");

	ABP_Pawn_C_AddShieldClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RefillAmmoFromDispenserEtc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FillUpFull_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Bar_Selection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::RefillAmmoFromDispenserEtc(class UClass** Ammo, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RefillAmmoFromDispenserEtc");

	ABP_Pawn_C_RefillAmmoFromDispenserEtc_Params params;
	params.Ammo = Ammo;
	params.Amount = Amount;
	params.FillUpFull_ = FillUpFull_;
	params.WeaponName = WeaponName;
	params.Bar_Selection = Bar_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuySpecialItemFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 SpecialItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuySpecialItemFromStoreEvent(class UClass** SpecialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuySpecialItemFromStoreEvent");

	ABP_Pawn_C_BuySpecialItemFromStoreEvent_Params params;
	params.SpecialItem = SpecialItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AmmoSoundMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound_to_play                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Armor_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::AmmoSoundMulticast(class USoundBase** Sound_to_play, bool* Armor_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AmmoSoundMulticast");

	ABP_Pawn_C_AmmoSoundMulticast_Params params;
	params.Sound_to_play = Sound_to_play;
	params.Armor_ = Armor_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RefilFragsFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Throwable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FillUpFull_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::RefilFragsFromStoreEvent(class UClass** Throwable, bool* FillUpFull_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RefilFragsFromStoreEvent");

	ABP_Pawn_C_RefilFragsFromStoreEvent_Params params;
	params.Throwable = Throwable;
	params.FillUpFull_ = FillUpFull_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyMeleeFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuyMeleeFromStoreEvent(class UClass** weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyMeleeFromStoreEvent");

	ABP_Pawn_C_BuyMeleeFromStoreEvent_Params params;
	params.weapon = weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SellWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SellWeapon(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SellWeapon");

	ABP_Pawn_C_SellWeapon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyArmorFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::BuyArmorFromStoreEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyArmorFromStoreEvent");

	ABP_Pawn_C_BuyArmorFromStoreEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyFragsFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Throwable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuyFragsFromStoreEvent(class UClass** Throwable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyFragsFromStoreEvent");

	ABP_Pawn_C_BuyFragsFromStoreEvent_Params params;
	params.Throwable = Throwable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyAmmoFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Ammo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FillUpFull_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Bar_Selection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuyAmmoFromStoreEvent(class UClass** Ammo, int* Amount, bool* FillUpFull_, struct FString* WeaponName, int* Bar_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyAmmoFromStoreEvent");

	ABP_Pawn_C_BuyAmmoFromStoreEvent_Params params;
	params.Ammo = Ammo;
	params.Amount = Amount;
	params.FillUpFull_ = FillUpFull_;
	params.WeaponName = WeaponName;
	params.Bar_Selection = Bar_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyWeaponFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Primary_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuyWeaponFromStoreEvent(class UClass** weapon, bool* Primary_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyWeaponFromStoreEvent");

	ABP_Pawn_C_BuyWeaponFromStoreEvent_Params params;
	params.weapon = weapon;
	params.Primary_ = Primary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BuyHPFromStoreEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Armor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::BuyHPFromStoreEvent(class UClass** Armor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BuyHPFromStoreEvent");

	ABP_Pawn_C_BuyHPFromStoreEvent_Params params;
	params.Armor = Armor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::PlaceSpecialItemMulticast(struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemMulticast");

	ABP_Pawn_C_PlaceSpecialItemMulticast_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopMeleeTrace
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopMeleeTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopMeleeTrace");

	ABP_Pawn_C_StopMeleeTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ArmorPickupInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_RubberArmor_C**      PickupRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Autopickup_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ArmorPickupInterface(class ABP_RubberArmor_C** PickupRef, bool* Autopickup_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ArmorPickupInterface");

	ABP_Pawn_C_ArmorPickupInterface_Params params;
	params.PickupRef = PickupRef;
	params.Autopickup_ = Autopickup_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopSpecialItemEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopSpecialItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopSpecialItemEvent");

	ABP_Pawn_C_StopSpecialItemEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SpecialItemEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 SpecialItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SpecialItemEvent(class UClass** SpecialItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SpecialItemEvent");

	ABP_Pawn_C_SpecialItemEvent_Params params;
	params.SpecialItem = SpecialItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SpecialItemTrace
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SpecialItemTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SpecialItemTrace");

	ABP_Pawn_C_SpecialItemTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::PlaceSpecialItemServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PlaceSpecialItemServer");

	ABP_Pawn_C_PlaceSpecialItemServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.WPN_CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::WPN_CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.WPN_CantShoot");

	ABP_Pawn_C_WPN_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SlidePush
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SlidePush()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SlidePush");

	ABP_Pawn_C_SlidePush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClientGetUpFromSlide
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClientGetUpFromSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClientGetUpFromSlide");

	ABP_Pawn_C_ClientGetUpFromSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReceiveTick");

	ABP_Pawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CWC_SwitchCamera
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CWC_SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CWC_SwitchCamera");

	ABP_Pawn_C_CWC_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.GetUpFromSlideMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::GetUpFromSlideMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.GetUpFromSlideMulticast");

	ABP_Pawn_C_GetUpFromSlideMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SlidingEventMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SlidingEventMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SlidingEventMulticast");

	ABP_Pawn_C_SlidingEventMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SlidingEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SlidingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SlidingEvent");

	ABP_Pawn_C_SlidingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.WPN_SetWeaponToInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPA_ParentWeapon_C**    WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AutoPickUp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::WPN_SetWeaponToInteract(class ABPA_ParentWeapon_C** WeaponReference, bool* AutoPickUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.WPN_SetWeaponToInteract");

	ABP_Pawn_C_WPN_SetWeaponToInteract_Params params;
	params.WeaponReference = WeaponReference;
	params.AutoPickUp = AutoPickUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AmmoPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AddAmmoTypes>*   Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponTypes>*    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ProjectileType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::AmmoPickup(TEnumAsByte<E_AddAmmoTypes>* Mode, struct FName* WeaponID, int* AmountAmmo, TEnumAsByte<E_WeaponTypes>* WeaponType, class UClass** ProjectileType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AmmoPickup");

	ABP_Pawn_C_AmmoPickup_Params params;
	params.Mode = Mode;
	params.WeaponID = WeaponID;
	params.AmountAmmo = AmountAmmo;
	params.WeaponType = WeaponType;
	params.ProjectileType = ProjectileType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.WPN_Recoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::WPN_Recoil(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.WPN_Recoil");

	ABP_Pawn_C_WPN_Recoil_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CWC_RefreshWeaponInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CWC_RefreshWeaponInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CWC_RefreshWeaponInHUD");

	ABP_Pawn_C_CWC_RefreshWeaponInHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventMeleeSoundAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::EventMeleeSoundAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventMeleeSoundAll");

	ABP_Pawn_C_EventMeleeSoundAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.MeleeDamage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MeleeWithWeapon_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::MeleeDamage(bool* MeleeWithWeapon_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.MeleeDamage");

	ABP_Pawn_C_MeleeDamage_Params params;
	params.MeleeWithWeapon_ = MeleeWithWeapon_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PC_SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_WpnCompHUD_C**        HUD_Reference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::PC_SetHUD(class UW_WpnCompHUD_C** HUD_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PC_SetHUD");

	ABP_Pawn_C_PC_SetHUD_Params params;
	params.HUD_Reference = HUD_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Toggle Widget");

	ABP_Pawn_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.HolsterWhenDeadEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::HolsterWhenDeadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.HolsterWhenDeadEvent");

	ABP_Pawn_C_HolsterWhenDeadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CustomEvent_3");

	ABP_Pawn_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReviveMovementMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Walk_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ReviveMovementMode(bool* Walk_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReviveMovementMode");

	ABP_Pawn_C_ReviveMovementMode_Params params;
	params.Walk_ = Walk_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopInteractBarEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopInteractBarEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopInteractBarEvent");

	ABP_Pawn_C_StopInteractBarEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StartSprintEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StartSprintEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StartSprintEvent");

	ABP_Pawn_C_StartSprintEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClientInteract
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClientInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClientInteract");

	ABP_Pawn_C_ClientInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Server Interact
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_C::Server_Interact(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Server Interact");

	ABP_Pawn_C_Server_Interact_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DestroyPickupObjectRefEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DestroyPickupObjectRefEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DestroyPickupObjectRefEvent");

	ABP_Pawn_C_DestroyPickupObjectRefEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.PlaceraPickup
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent**   Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Pawn_C::PlaceraPickup(class UStaticMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.PlaceraPickup");

	ABP_Pawn_C_PlaceraPickup_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.KeyCardPickup
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_KeyCardPickup_C**    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::KeyCardPickup(class ABP_KeyCardPickup_C** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.KeyCardPickup");

	ABP_Pawn_C_KeyCardPickup_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SetFreeCamera
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FreeCameraOn_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SetFreeCamera(bool* FreeCameraOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SetFreeCamera");

	ABP_Pawn_C_SetFreeCamera_Params params;
	params.FreeCameraOn_ = FreeCameraOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Interact");

	ABP_Pawn_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Clear Target");

	ABP_Pawn_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Current Target");

	ABP_Pawn_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClientDeathStatisticsEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClientDeathStatisticsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClientDeathStatisticsEvent");

	ABP_Pawn_C_ClientDeathStatisticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DamageSoundMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DamageSoundMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DamageSoundMulticast");

	ABP_Pawn_C_DamageSoundMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DecreaseHPEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DecreaseHPEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DecreaseHPEvent");

	ABP_Pawn_C_DecreaseHPEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Pawn_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReceivePointDamage");

	ABP_Pawn_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReceiveRadialDamage");

	ABP_Pawn_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SaveCharacter
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SaveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SaveCharacter");

	ABP_Pawn_C_SaveCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Render Depth
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Dead_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Render_Depth(bool* Dead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Render Depth");

	ABP_Pawn_C_Render_Depth_Params params;
	params.Dead_ = Dead_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CommitSuicide
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CommitSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CommitSuicide");

	ABP_Pawn_C_CommitSuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RespawnChar
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::RespawnChar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RespawnChar");

	ABP_Pawn_C_RespawnChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DIEE
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::DIEE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DIEE");

	ABP_Pawn_C_DIEE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Pawn_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.OnLanded");

	ABP_Pawn_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RollForwardMulticastEvent
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::RollForwardMulticastEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RollForwardMulticastEvent");

	ABP_Pawn_C_RollForwardMulticastEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.RollForwardServerEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::RollForwardServerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.RollForwardServerEvent");

	ABP_Pawn_C_RollForwardServerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.JumpOnAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetJump                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::JumpOnAll(bool* SetJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.JumpOnAll");

	ABP_Pawn_C_JumpOnAll_Params params;
	params.SetJump = SetJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Jumping
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetJump                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Jumping(bool* SetJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Jumping");

	ABP_Pawn_C_Jumping_Params params;
	params.SetJump = SetJump;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.BeginSprintPowerUp
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::BeginSprintPowerUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.BeginSprintPowerUp");

	ABP_Pawn_C_BeginSprintPowerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CheckIfStandingStill
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::CheckIfStandingStill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CheckIfStandingStill");

	ABP_Pawn_C_CheckIfStandingStill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.StopSprintEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::StopSprintEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.StopSprintEvent");

	ABP_Pawn_C_StopSprintEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SprintingMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Sprint                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::SprintingMulticast(bool* Sprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SprintingMulticast");

	ABP_Pawn_C_SprintingMulticast_Params params;
	params.Sprint = Sprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ClientSprint
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::ClientSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ClientSprint");

	ABP_Pawn_C_ClientSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.SprintTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::SprintTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.SprintTimer");

	ABP_Pawn_C_SprintTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Sprinting
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetSprint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Sprinting(bool* SetSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Sprinting");

	ABP_Pawn_C_Sprinting_Params params;
	params.SetSprint = SetSprint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.UpdateStamina
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::UpdateStamina(float* Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.UpdateStamina");

	ABP_Pawn_C_UpdateStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InterruptTauntMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::InterruptTauntMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InterruptTauntMulticast");

	ABP_Pawn_C_InterruptTauntMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.InterruptTaunt
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Pawn_C::InterruptTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.InterruptTaunt");

	ABP_Pawn_C_InterruptTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.DeathPlayAnimClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           TauntAnim                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Dead_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::DeathPlayAnimClient(class UAnimMontage** TauntAnim, bool* Dead_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.DeathPlayAnimClient");

	ABP_Pawn_C_DeathPlayAnimClient_Params params;
	params.TauntAnim = TauntAnim;
	params.Dead_ = Dead_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnimClient
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           TauntAnim                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::EventPlayTauntAnimClient(class UAnimMontage** TauntAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnimClient");

	ABP_Pawn_C_EventPlayTauntAnimClient_Params params;
	params.TauntAnim = TauntAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnim
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           TauntAnim                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Stun_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::EventPlayTauntAnim(class UAnimMontage** TauntAnim, bool* Stun_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventPlayTauntAnim");

	ABP_Pawn_C_EventPlayTauntAnim_Params params;
	params.TauntAnim = TauntAnim;
	params.Stun_ = Stun_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AnimBP_AnimationRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::AnimBP_AnimationRequest(class UAnimMontage** Montage, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AnimBP_AnimationRequest");

	ABP_Pawn_C_AnimBP_AnimationRequest_Params params;
	params.Montage = Montage;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AnimOnClients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           AnimMont                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::AnimOnClients(class UAnimMontage** AnimMont, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AnimOnClients");

	ABP_Pawn_C_AnimOnClients_Params params;
	params.AnimMont = AnimMont;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.AnimOnServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage**           AnimMont                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::AnimOnServer(class UAnimMontage** AnimMont, float* PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.AnimOnServer");

	ABP_Pawn_C_AnimOnServer_Params params;
	params.AnimMont = AnimMont;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ReviveCrouching
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Finished_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ReviveCrouching(bool* Finished_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ReviveCrouching");

	ABP_Pawn_C_ReviveCrouching_Params params;
	params.Finished_ = Finished_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CrouchingMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Crouch                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::CrouchingMulticast(bool* Crouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CrouchingMulticast");

	ABP_Pawn_C_CrouchingMulticast_Params params;
	params.Crouch = Crouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.Crouching
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetCrouch                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::Crouching(bool* SetCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.Crouching");

	ABP_Pawn_C_Crouching_Params params;
	params.SetCrouch = SetCrouch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.CloakOnAllClients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ClassInt                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::CloakOnAllClients(int* ClassInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.CloakOnAllClients");

	ABP_Pawn_C_CloakOnAllClients_Params params;
	params.ClassInt = ClassInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.EventCloakServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ClassInt                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::EventCloakServer(int* ClassInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.EventCloakServer");

	ABP_Pawn_C_EventCloakServer_Params params;
	params.ClassInt = ClassInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn.BP_Pawn_C.ExecuteUbergraph_BP_Pawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_C::ExecuteUbergraph_BP_Pawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn.BP_Pawn_C.ExecuteUbergraph_BP_Pawn");

	ABP_Pawn_C_ExecuteUbergraph_BP_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

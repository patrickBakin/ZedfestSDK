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

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WidgetTypes>     Widget_Type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Set_Widget_Type(TEnumAsByte<E_WidgetTypes>* Widget_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Type");

	ABPA_ParentWeapon_C_Set_Widget_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Type != nullptr)
		*Widget_Type = params.Widget_Type;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title_Text                     (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Widget_Title(bool* Return_Value, struct FText* Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Title");

	ABPA_ParentWeapon_C_Set_Widget_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Title_Text != nullptr)
		*Title_Text = params.Title_Text;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Sub Title
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Sub_Title_Text                 (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Widget_Sub_Title(bool* Return_Value, struct FText* Sub_Title_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Sub Title");

	ABPA_ParentWeapon_C_Set_Widget_Sub_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Sub_Title_Text != nullptr)
		*Sub_Title_Text = params.Sub_Title_Text;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Level_Text                     (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Widget_Level(bool* Return_Value, struct FText* Level_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Level");

	ABPA_ParentWeapon_C_Set_Widget_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Level_Text != nullptr)
		*Level_Text = params.Level_Text;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Amount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Amount_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Set_Widget_Amount(bool* Return_Value, int* Amount_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Amount");

	ABPA_ParentWeapon_C_Set_Widget_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Amount_Value != nullptr)
		*Amount_Value = params.Amount_Value;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Dark_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Light_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Set_Widget_Color(struct FLinearColor* Dark_Color, struct FLinearColor* Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Color");

	ABPA_ParentWeapon_C_Set_Widget_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dark_Color != nullptr)
		*Dark_Color = params.Dark_Color;
	if (Light_Color != nullptr)
		*Light_Color = params.Light_Color;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Key Binds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS_KeyBinds>     Key_Binds                      (Parm, OutParm, ZeroConstructor)

void ABPA_ParentWeapon_C::Set_Widget_Key_Binds(bool* Return_Value, TArray<struct FS_KeyBinds>* Key_Binds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Key Binds");

	ABPA_ParentWeapon_C_Set_Widget_Key_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Key_Binds != nullptr)
		*Key_Binds = params.Key_Binds;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Detail_1(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 1");

	ABPA_ParentWeapon_C_Set_Detail_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Detail_2(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 2");

	ABPA_ParentWeapon_C_Set_Detail_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 3
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Detail_3(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 3");

	ABPA_ParentWeapon_C_Set_Detail_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 4
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FS_DetailsSettings      Detail_Settings                (Parm, OutParm)

void ABPA_ParentWeapon_C::Set_Detail_4(bool* Return_Value, struct FS_DetailsSettings* Detail_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 4");

	ABPA_ParentWeapon_C_Set_Detail_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Detail_Settings != nullptr)
		*Detail_Settings = params.Detail_Settings;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Melee
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SetMode_Melee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Melee");

	ABPA_ParentWeapon_C_SetMode_Melee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInBackpack
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_CurrentAmmoInBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInBackpack");

	ABPA_ParentWeapon_C_OnRep_CurrentAmmoInBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInMagazine
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_CurrentAmmoInMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInMagazine");

	ABPA_ParentWeapon_C_OnRep_CurrentAmmoInMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentFireMode
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_CurrentFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentFireMode");

	ABPA_ParentWeapon_C_OnRep_CurrentFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_NoAmmo
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_NoAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_NoAmmo");

	ABPA_ParentWeapon_C_OnRep_NoAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsJammed
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_IsJammed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsJammed");

	ABPA_ParentWeapon_C_OnRep_IsJammed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsReloading
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::OnRep_IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsReloading");

	ABPA_ParentWeapon_C_OnRep_IsReloading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CantShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::CantShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CantShoot");

	ABPA_ParentWeapon_C_CantShoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanReload?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::CanReload_(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanReload?");

	ABPA_ParentWeapon_C_CanReload__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_FullAuto
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SetMode_FullAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_FullAuto");

	ABPA_ParentWeapon_C_SetMode_FullAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Burst
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SetMode_Burst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Burst");

	ABPA_ParentWeapon_C_SetMode_Burst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_SingleShot
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SetMode_SingleShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_SingleShot");

	ABPA_ParentWeapon_C_SetMode_SingleShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SwitchMode_Next
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SwitchMode_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SwitchMode_Next");

	ABPA_ParentWeapon_C_SwitchMode_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcFinalDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Result                         (Parm, OutParm, IsPlainOldData)

void ABPA_ParentWeapon_C::CalcFinalDirection(struct FVector* Location, struct FRotator* Rotation, struct FTransform* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcFinalDirection");

	ABPA_ParentWeapon_C_CalcFinalDirection_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCrit_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::CalcDamage(float* Damage, bool* IsCrit_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcDamage");

	ABPA_ParentWeapon_C_CalcDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
	if (IsCrit_ != nullptr)
		*IsCrit_ = params.IsCrit_;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadEnd");

	ABPA_ParentWeapon_C_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::ReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadStart");

	ABPA_ParentWeapon_C_ReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalculateMainDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::CalculateMainDirection(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalculateMainDirection");

	ABPA_ParentWeapon_C_CalculateMainDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.GetJamChance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::GetJamChance(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.GetJamChance");

	ABPA_ParentWeapon_C_GetJamChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.HasAmmoInMag?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::HasAmmoInMag_(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.HasAmmoInMag?");

	ABPA_ParentWeapon_C_HasAmmoInMag__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanShoot?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::CanShoot_(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanShoot?");

	ABPA_ParentWeapon_C_CanShoot__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SpawnProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::SpawnProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SpawnProjectile");

	ABPA_ParentWeapon_C_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.UserConstructionScript");

	ABPA_ParentWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerPulled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::WeaponFire(bool* TriggerPulled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponFire");

	ABPA_ParentWeapon_C_WeaponFire_Params params;
	params.TriggerPulled = TriggerPulled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponAddAmmoToBackpack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AmountAmmoToAdd                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::WeaponAddAmmoToBackpack(int* AmountAmmoToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponAddAmmoToBackpack");

	ABPA_ParentWeapon_C_WeaponAddAmmoToBackpack_Params params;
	params.AmountAmmoToAdd = AmountAmmoToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponReload
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::WeaponReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponReload");

	ABPA_ParentWeapon_C_WeaponReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponSwitchFireMode
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::WeaponSwitchFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponSwitchFireMode");

	ABPA_ParentWeapon_C_WeaponSwitchFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffects
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::WeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffects");

	ABPA_ParentWeapon_C_WeaponEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffectsSync
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::WeaponEffectsSync()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffectsSync");

	ABPA_ParentWeapon_C_WeaponEffectsSync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Dropped                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter**             OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Delete_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::SetWeaponIsDropped(bool* Dropped, class ACharacter** OwnerCharacter, bool* Delete_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsDropped");

	ABPA_ParentWeapon_C_SetWeaponIsDropped_Params params;
	params.Dropped = Dropped;
	params.OwnerCharacter = OwnerCharacter;
	params.Delete_ = Delete_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.UpdateHUD_WeaponData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WeaponNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::UpdateHUD_WeaponData(int* WeaponNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.UpdateHUD_WeaponData");

	ABPA_ParentWeapon_C_UpdateHUD_WeaponData_Params params;
	params.WeaponNumber = WeaponNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsCloaked
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Cloak                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::SetWeaponIsCloaked(bool* Cloak)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsCloaked");

	ABPA_ParentWeapon_C_SetWeaponIsCloaked_Params params;
	params.Cloak = Cloak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABPA_ParentWeapon_C::BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent** HitComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature");

	ABPA_ParentWeapon_C_BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPA_ParentWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReceiveBeginPlay");

	ABPA_ParentWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Current Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Current_Target(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Current Target");

	ABPA_ParentWeapon_C_Current_Target_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Clear Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::Clear_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Clear Target");

	ABPA_ParentWeapon_C_Clear_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Interact(struct FKey* Key, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Interact");

	ABPA_ParentWeapon_C_Interact_Params params;
	params.Key = Key;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllTrue
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::CollisionAllTrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllTrue");

	ABPA_ParentWeapon_C_CollisionAllTrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllFalse
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::CollisionAllFalse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllFalse");

	ABPA_ParentWeapon_C_CollisionAllFalse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Toggle Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::Toggle_Widget(bool* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.Toggle Widget");

	ABPA_ParentWeapon_C_Toggle_Widget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.DestroyWeapon
// (BlueprintCallable, BlueprintEvent)

void ABPA_ParentWeapon_C::DestroyWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.DestroyWeapon");

	ABPA_ParentWeapon_C_DestroyWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ExecuteUbergraph_BPA_ParentWeapon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPA_ParentWeapon_C::ExecuteUbergraph_BPA_ParentWeapon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPA_ParentWeapon.BPA_ParentWeapon_C.ExecuteUbergraph_BPA_ParentWeapon");

	ABPA_ParentWeapon_C_ExecuteUbergraph_BPA_ParentWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

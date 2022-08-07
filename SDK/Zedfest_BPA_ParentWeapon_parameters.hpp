#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace ZF
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Type
struct ABPA_ParentWeapon_C_Set_Widget_Type_Params
{
	TEnumAsByte<E_WidgetTypes>                         Widget_Type;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Title
struct ABPA_ParentWeapon_C_Set_Widget_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title_Text;                                               // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Sub Title
struct ABPA_ParentWeapon_C_Set_Widget_Sub_Title_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Sub_Title_Text;                                           // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Level
struct ABPA_ParentWeapon_C_Set_Widget_Level_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Level_Text;                                               // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Amount
struct ABPA_ParentWeapon_C_Set_Widget_Amount_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Amount_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Color
struct ABPA_ParentWeapon_C_Set_Widget_Color_Params
{
	struct FLinearColor                                Dark_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Widget Key Binds
struct ABPA_ParentWeapon_C_Set_Widget_Key_Binds_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS_KeyBinds>                         Key_Binds;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 1
struct ABPA_ParentWeapon_C_Set_Detail_1_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 2
struct ABPA_ParentWeapon_C_Set_Detail_2_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 3
struct ABPA_ParentWeapon_C_Set_Detail_3_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Set Detail 4
struct ABPA_ParentWeapon_C_Set_Detail_4_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FS_DetailsSettings                          Detail_Settings;                                          // (Parm, OutParm)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Melee
struct ABPA_ParentWeapon_C_SetMode_Melee_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInBackpack
struct ABPA_ParentWeapon_C_OnRep_CurrentAmmoInBackpack_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentAmmoInMagazine
struct ABPA_ParentWeapon_C_OnRep_CurrentAmmoInMagazine_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_CurrentFireMode
struct ABPA_ParentWeapon_C_OnRep_CurrentFireMode_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_NoAmmo
struct ABPA_ParentWeapon_C_OnRep_NoAmmo_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsJammed
struct ABPA_ParentWeapon_C_OnRep_IsJammed_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.OnRep_IsReloading
struct ABPA_ParentWeapon_C_OnRep_IsReloading_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CantShoot
struct ABPA_ParentWeapon_C_CantShoot_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanReload?
struct ABPA_ParentWeapon_C_CanReload__Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_FullAuto
struct ABPA_ParentWeapon_C_SetMode_FullAuto_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_Burst
struct ABPA_ParentWeapon_C_SetMode_Burst_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetMode_SingleShot
struct ABPA_ParentWeapon_C_SetMode_SingleShot_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SwitchMode_Next
struct ABPA_ParentWeapon_C_SwitchMode_Next_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcFinalDirection
struct ABPA_ParentWeapon_C_CalcFinalDirection_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Result;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalcDamage
struct ABPA_ParentWeapon_C_CalcDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCrit_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadEnd
struct ABPA_ParentWeapon_C_ReloadEnd_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReloadStart
struct ABPA_ParentWeapon_C_ReloadStart_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CalculateMainDirection
struct ABPA_ParentWeapon_C_CalculateMainDirection_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.GetJamChance
struct ABPA_ParentWeapon_C_GetJamChance_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.HasAmmoInMag?
struct ABPA_ParentWeapon_C_HasAmmoInMag__Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CanShoot?
struct ABPA_ParentWeapon_C_CanShoot__Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SpawnProjectile
struct ABPA_ParentWeapon_C_SpawnProjectile_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.UserConstructionScript
struct ABPA_ParentWeapon_C_UserConstructionScript_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponFire
struct ABPA_ParentWeapon_C_WeaponFire_Params
{
	bool*                                              TriggerPulled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponAddAmmoToBackpack
struct ABPA_ParentWeapon_C_WeaponAddAmmoToBackpack_Params
{
	int*                                               AmountAmmoToAdd;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponReload
struct ABPA_ParentWeapon_C_WeaponReload_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponSwitchFireMode
struct ABPA_ParentWeapon_C_WeaponSwitchFireMode_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffects
struct ABPA_ParentWeapon_C_WeaponEffects_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.WeaponEffectsSync
struct ABPA_ParentWeapon_C_WeaponEffectsSync_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsDropped
struct ABPA_ParentWeapon_C_SetWeaponIsDropped_Params
{
	bool*                                              Dropped;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter**                                 OwnerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Delete_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.UpdateHUD_WeaponData
struct ABPA_ParentWeapon_C_UpdateHUD_WeaponData_Params
{
	int*                                               WeaponNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.SetWeaponIsCloaked
struct ABPA_ParentWeapon_C_SetWeaponIsCloaked_Params
{
	bool*                                              Cloak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature
struct ABPA_ParentWeapon_C_BndEvt__WeaponSkMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ReceiveBeginPlay
struct ABPA_ParentWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Current Target
struct ABPA_ParentWeapon_C_Current_Target_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Clear Target
struct ABPA_ParentWeapon_C_Clear_Target_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Interact
struct ABPA_ParentWeapon_C_Interact_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllTrue
struct ABPA_ParentWeapon_C_CollisionAllTrue_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.CollisionAllFalse
struct ABPA_ParentWeapon_C_CollisionAllFalse_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.Toggle Widget
struct ABPA_ParentWeapon_C_Toggle_Widget_Params
{
	bool*                                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.DestroyWeapon
struct ABPA_ParentWeapon_C_DestroyWeapon_Params
{
};

// Function BPA_ParentWeapon.BPA_ParentWeapon_C.ExecuteUbergraph_BPA_ParentWeapon
struct ABPA_ParentWeapon_C_ExecuteUbergraph_BPA_ParentWeapon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

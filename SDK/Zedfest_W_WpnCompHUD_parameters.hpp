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

// Function W_WpnCompHUD.W_WpnCompHUD_C.GetPlayerMoney
struct UW_WpnCompHUD_C_GetPlayerMoney_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.GetArmor
struct UW_WpnCompHUD_C_GetArmor_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.GetHP
struct UW_WpnCompHUD_C_GetHP_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Weapon Name
struct UW_WpnCompHUD_C_Get_Weapon_Name_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Total Ammo
struct UW_WpnCompHUD_C_Get_Total_Ammo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Item Amount or Ammo in Gun
struct UW_WpnCompHUD_C_Get_Item_Amount_or_Ammo_in_Gun_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Set Slots Bar Visibility
struct UW_WpnCompHUD_C_Set_Slots_Bar_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.AddCashText
struct UW_WpnCompHUD_C_AddCashText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.GetPercent_1
struct UW_WpnCompHUD_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ShowSniperScope
struct UW_WpnCompHUD_C_ShowSniperScope_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.MedicineNeedles
struct UW_WpnCompHUD_C_MedicineNeedles_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.DoubleTripleKillText
struct UW_WpnCompHUD_C_DoubleTripleKillText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Get_TotalScoreBank
struct UW_WpnCompHUD_C_Get_TotalScoreBank_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreMittenText
struct UW_WpnCompHUD_C_ScoreMittenText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Grenades
struct UW_WpnCompHUD_C_Grenades_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Get_Distance
struct UW_WpnCompHUD_C_Get_Distance_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_C17D6DA640E32A866E52BB8425B58FDC
struct UW_WpnCompHUD_C_OnFailure_C17D6DA640E32A866E52BB8425B58FDC_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_C17D6DA640E32A866E52BB8425B58FDC
struct UW_WpnCompHUD_C_OnSuccess_C17D6DA640E32A866E52BB8425B58FDC_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3
struct UW_WpnCompHUD_C_OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3
struct UW_WpnCompHUD_C_OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.PlaceCurrent
struct UW_WpnCompHUD_C_PlaceCurrent_Params
{
	int*                                               CurrentInt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.KeyCardEventWPN
struct UW_WpnCompHUD_C_KeyCardEventWPN_Params
{
	int*                                               Keys;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.InteractBar
struct UW_WpnCompHUD_C_InteractBar_Params
{
	bool*                                              Stop_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.PlayAddDeductAnimation
struct UW_WpnCompHUD_C_PlayAddDeductAnimation_Params
{
	struct FText*                                      AddDeductText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Deduct;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Construct
struct UW_WpnCompHUD_C_Construct_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.Send Message to HUD
struct UW_WpnCompHUD_C_Send_Message_to_HUD_Params
{
	struct FText*                                      Menssage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.EventWeaponName
struct UW_WpnCompHUD_C_EventWeaponName_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.EventRecordingUMG
struct UW_WpnCompHUD_C_EventRecordingUMG_Params
{
	bool*                                              Recording_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ScorePopinAnimation
struct UW_WpnCompHUD_C_ScorePopinAnimation_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreBankTick
struct UW_WpnCompHUD_C_ScoreBankTick_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ReloadTimerBarEvent
struct UW_WpnCompHUD_C_ReloadTimerBarEvent_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.OnInitialized
struct UW_WpnCompHUD_C_OnInitialized_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoBP
struct UW_WpnCompHUD_C_UpdateAmmoBP_Params
{
	int*                                               CurrentAmmoBP;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoMag
struct UW_WpnCompHUD_C_UpdateAmmoMag_Params
{
	int*                                               CurrentAmmoMag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.SetCrosshair
struct UW_WpnCompHUD_C_SetCrosshair_Params
{
	int*                                               WidgetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.SetCurrentWeaponData
struct UW_WpnCompHUD_C_SetCurrentWeaponData_Params
{
	bool*                                              HasWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      WeaponID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoM;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoB;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_FireModes>*                          FireMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_WeaponState>*                        WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateWeaponStatus
struct UW_WpnCompHUD_C_UpdateWeaponStatus_Params
{
	TEnumAsByte<E_WeaponState>*                        WeaponState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.MultiplierBarEvent
struct UW_WpnCompHUD_C_MultiplierBarEvent_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ReviveBar
struct UW_WpnCompHUD_C_ReviveBar_Params
{
	bool*                                              Stop_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.InvincibleAnimEvent
struct UW_WpnCompHUD_C_InvincibleAnimEvent_Params
{
	int*                                               NumberOfLoops;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.HPChangedValue
struct UW_WpnCompHUD_C_HPChangedValue_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.AlwaysShowEvent
struct UW_WpnCompHUD_C_AlwaysShowEvent_Params
{
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.TrapBoxInfoEvent
struct UW_WpnCompHUD_C_TrapBoxInfoEvent_Params
{
	bool*                                              DestroyFirstOne_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AItemBase_C**                                TrapRef;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.TrapBoxRemoveInfoEvent
struct UW_WpnCompHUD_C_TrapBoxRemoveInfoEvent_Params
{
	class AItemBase_C**                                TrapRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_WpnCompHUD.W_WpnCompHUD_C.ExecuteUbergraph_W_WpnCompHUD
struct UW_WpnCompHUD_C_ExecuteUbergraph_W_WpnCompHUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

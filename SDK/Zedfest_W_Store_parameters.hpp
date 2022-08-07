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

// Function W_Store.W_Store_C.ClassPrestigeLevel
struct UW_Store_C_ClassPrestigeLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.CanClassPrestige?
struct UW_Store_C_CanClassPrestige__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function W_Store.W_Store_C.LevelBonusAmmo
struct UW_Store_C_LevelBonusAmmo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.LevelBonusRunspeed
struct UW_Store_C_LevelBonusRunspeed_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.LevelBonusArmor
struct UW_Store_C_LevelBonusArmor_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.LevelBonusHealth
struct UW_Store_C_LevelBonusHealth_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.Get_OneMagButtonText_Text_1
struct UW_Store_C_Get_OneMagButtonText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.GameWave2
struct UW_Store_C_GameWave2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.GetGameWave
struct UW_Store_C_GetGameWave_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.TimerLeft
struct UW_Store_C_TimerLeft_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.GetPlayerMoney
struct UW_Store_C_GetPlayerMoney_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.OnPreviewKeyDown
struct UW_Store_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_Store.W_Store_C.OnFailure_BEBCC7204845648A161C79B253B557F9
struct UW_Store_C_OnFailure_BEBCC7204845648A161C79B253B557F9_Params
{
};

// Function W_Store.W_Store_C.OnSuccess_BEBCC7204845648A161C79B253B557F9
struct UW_Store_C_OnSuccess_BEBCC7204845648A161C79B253B557F9_Params
{
};

// Function W_Store.W_Store_C.OnFailure_F90C58E74981759C0C97A0AA106D6981
struct UW_Store_C_OnFailure_F90C58E74981759C0C97A0AA106D6981_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.OnSuccess_F90C58E74981759C0C97A0AA106D6981
struct UW_Store_C_OnSuccess_F90C58E74981759C0C97A0AA106D6981_Params
{
	struct FName*                                      WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.OnFailure_5721FFA64060CCBB1D604FAC034A1888
struct UW_Store_C_OnFailure_5721FFA64060CCBB1D604FAC034A1888_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.OnSuccess_5721FFA64060CCBB1D604FAC034A1888
struct UW_Store_C_OnSuccess_5721FFA64060CCBB1D604FAC034A1888_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.OnFailure_3C1691E440D65C115C75C3A0BF441596
struct UW_Store_C_OnFailure_3C1691E440D65C115C75C3A0BF441596_Params
{
};

// Function W_Store.W_Store_C.OnSuccess_3C1691E440D65C115C75C3A0BF441596
struct UW_Store_C_OnSuccess_3C1691E440D65C115C75C3A0BF441596_Params
{
};

// Function W_Store.W_Store_C.Construct
struct UW_Store_C_Construct_Params
{
};

// Function W_Store.W_Store_C.CloseStore
struct UW_Store_C_CloseStore_Params
{
};

// Function W_Store.W_Store_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__Button1_C_3_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__Button1_C_3_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__Button1_C_4_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__Button1_C_4_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__ExitShopButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__ExitShopButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.UpdateInfoEvent
struct UW_Store_C_UpdateInfoEvent_Params
{
	class UClass**                                     SecWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.UpdateMeleeInfoEvent
struct UW_Store_C_UpdateMeleeInfoEvent_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.UpdateGrenadeInfoEvent
struct UW_Store_C_UpdateGrenadeInfoEvent_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.UpdateConsumableInfoEvent
struct UW_Store_C_UpdateConsumableInfoEvent_Params
{
	class UClass**                                     Consumable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.EventSwitcher
struct UW_Store_C_EventSwitcher_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.EventPrimaryAtConstruct
struct UW_Store_C_EventPrimaryAtConstruct_Params
{
};

// Function W_Store.W_Store_C.ChangeClassInW_Store
struct UW_Store_C_ChangeClassInW_Store_Params
{
	int*                                               IntSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.UpdateSpecialItemInfoEvent
struct UW_Store_C_UpdateSpecialItemInfoEvent_Params
{
	class UClass**                                     SpecialItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Store.W_Store_C.BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.UpdateLoadoutBar
struct UW_Store_C_UpdateLoadoutBar_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkButton1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkButton1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__TrapButtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__TrapButtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.ClassChangePerkEvent
struct UW_Store_C_ClassChangePerkEvent_Params
{
};

// Function W_Store.W_Store_C.CustomEvent
struct UW_Store_C_CustomEvent_Params
{
};

// Function W_Store.W_Store_C.CustomEvent_4
struct UW_Store_C_CustomEvent_4_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PrestigeButton__K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PrestigeButton__K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BackToStorePageEvent
struct UW_Store_C_BackToStorePageEvent_Params
{
};

// Function W_Store.W_Store_C.BndEvt__CharacterButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__CharacterButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerksButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerksButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__EmoteButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__EmoteButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.W_StoreCharButtonClickEvent
struct UW_Store_C_W_StoreCharButtonClickEvent_Params
{
};

// Function W_Store.W_Store_C.OpenCharWindowEvent
struct UW_Store_C_OpenCharWindowEvent_Params
{
};

// Function W_Store.W_Store_C.W_StoreEmoteButtonClickEvent
struct UW_Store_C_W_StoreEmoteButtonClickEvent_Params
{
};

// Function W_Store.W_Store_C.CustomEvent_3
struct UW_Store_C_CustomEvent_3_Params
{
};

// Function W_Store.W_Store_C.CustomEvent_2
struct UW_Store_C_CustomEvent_2_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_8_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_8_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_7_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_7_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_4_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_4_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_7_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_7_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_6_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_6_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_5_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_5_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_4_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_4_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_3_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_3_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_2_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_2_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_15_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_15_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_14_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_14_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_13_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_13_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_12_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_12_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_11_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_11_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_10_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_10_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_9_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_9_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_8_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_8_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_23_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_23_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_22_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_22_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_21_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_21_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_20_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_20_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_19_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_19_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_18_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_18_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_17_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_17_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_16_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_16_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_31_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_31_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_30_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_30_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_29_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_29_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_28_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_28_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_27_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_27_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_26_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_26_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_25_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_25_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.BndEvt__PerkCard_C_24_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UW_Store_C_BndEvt__PerkCard_C_24_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function W_Store.W_Store_C.ExecuteUbergraph_W_Store
struct UW_Store_C_ExecuteUbergraph_W_Store_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

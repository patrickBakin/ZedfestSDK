#pragma once

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
//Parameters
//---------------------------------------------------------------------------

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.OnEscapeInput
struct UCharacterSelectionPanel1_C_OnEscapeInput_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.GetEventHandler
struct UCharacterSelectionPanel1_C_GetEventHandler_Params
{
	class UBP_navset_event_handler_C*                  EventHandler;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.GetStepIndex
struct UCharacterSelectionPanel1_C_GetStepIndex_Params
{
	int                                                StepIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BonebreakerPrestige
struct UCharacterSelectionPanel1_C_BonebreakerPrestige_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.DoctorPrestige
struct UCharacterSelectionPanel1_C_DoctorPrestige_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.TorpedoPrestige
struct UCharacterSelectionPanel1_C_TorpedoPrestige_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.NukerPrestige
struct UCharacterSelectionPanel1_C_NukerPrestige_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CommandoPrestige
struct UCharacterSelectionPanel1_C_CommandoPrestige_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.LevelBonusAmmo
struct UCharacterSelectionPanel1_C_LevelBonusAmmo_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.LevelBonusHealth
struct UCharacterSelectionPanel1_C_LevelBonusHealth_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.LevelBonusArmor
struct UCharacterSelectionPanel1_C_LevelBonusArmor_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.LevelBonusRunspeed
struct UCharacterSelectionPanel1_C_LevelBonusRunspeed_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.GetXPBar
struct UCharacterSelectionPanel1_C_GetXPBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.ClassPrestigeLevel
struct UCharacterSelectionPanel1_C_ClassPrestigeLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.NeededXP
struct UCharacterSelectionPanel1_C_NeededXP_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CurrentXP
struct UCharacterSelectionPanel1_C_CurrentXP_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CanClassPrestige?
struct UCharacterSelectionPanel1_C_CanClassPrestige__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CurrentClassLevel
struct UCharacterSelectionPanel1_C_CurrentClassLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.ClassName
struct UCharacterSelectionPanel1_C_ClassName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.StrugglerLevel
struct UCharacterSelectionPanel1_C_StrugglerLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.DoctorLevel
struct UCharacterSelectionPanel1_C_DoctorLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.StalkerLevel
struct UCharacterSelectionPanel1_C_StalkerLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.NukerLevel
struct UCharacterSelectionPanel1_C_NukerLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.AssaultLevel
struct UCharacterSelectionPanel1_C_AssaultLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.OnFailure_38123B1C46A6C585120CD58D6C82F514
struct UCharacterSelectionPanel1_C_OnFailure_38123B1C46A6C585120CD58D6C82F514_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.OnSuccess_38123B1C46A6C585120CD58D6C82F514
struct UCharacterSelectionPanel1_C_OnSuccess_38123B1C46A6C585120CD58D6C82F514_Params
{
	int*                                               LeaderboardValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.OnFailure_4C5D16C84B276A3BD86E108FD29A133B
struct UCharacterSelectionPanel1_C_OnFailure_4C5D16C84B276A3BD86E108FD29A133B_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.OnSuccess_4C5D16C84B276A3BD86E108FD29A133B
struct UCharacterSelectionPanel1_C_OnSuccess_4C5D16C84B276A3BD86E108FD29A133B_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.GetEscapeBehaviour
struct UCharacterSelectionPanel1_C_GetEscapeBehaviour_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.Construct
struct UCharacterSelectionPanel1_C_Construct_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.Destruct
struct UCharacterSelectionPanel1_C_Destruct_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.SetNavManager
struct UCharacterSelectionPanel1_C_SetNavManager_Params
{
	class UBP_navigation_manager_C**                   NavManagerRef;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.SetStepIndex
struct UCharacterSelectionPanel1_C_SetStepIndex_Params
{
	int*                                               StepIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__backBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.SetOnEscapeBehaviour
struct UCharacterSelectionPanel1_C_SetOnEscapeBehaviour_Params
{
<<<<<<< HEAD
	TEnumAsByte<EEscapeBehaviour>*                     EscapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EEscapeBehaviour>*                     escapeBehaviour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__GunnerButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__GunnerButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__NukerButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__NukerButton_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__StalkerButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__StalkerButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__Button1_C_2_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.UpdateInfoEvent
struct UCharacterSelectionPanel1_C_UpdateInfoEvent_Params
{
	class UClass**                                     SecWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__TauntSelectButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__TauntSelectButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__AssaultPrimaryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__AssaultPrimaryButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__AssaultSecondaryButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__AssaultSecondaryButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__AssaultMeleeButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__AssaultMeleeButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.SkinClickUpdate
struct UCharacterSelectionPanel1_C_SkinClickUpdate_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.WeaponClickUpdate
struct UCharacterSelectionPanel1_C_WeaponClickUpdate_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CharButtonClickEvent
struct UCharacterSelectionPanel1_C_CharButtonClickEvent_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.EmoteButtonClickEvent
struct UCharacterSelectionPanel1_C_EmoteButtonClickEvent_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.UpdateMeleeInfoEvent
struct UCharacterSelectionPanel1_C_UpdateMeleeInfoEvent_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__StrugglerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__StrugglerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__GrenadeButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__GrenadeButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.UpdateGrenadeInfoEvent
struct UCharacterSelectionPanel1_C_UpdateGrenadeInfoEvent_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__CommandoClassButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__CommandoClassButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CustomEvent_2
struct UCharacterSelectionPanel1_C_CustomEvent_2_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.CustomEvent_3
struct UCharacterSelectionPanel1_C_CustomEvent_3_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PrestigeButton__K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PrestigeButton__K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.SelectWeaponSlotFromLobby
struct UCharacterSelectionPanel1_C_SelectWeaponSlotFromLobby_Params
{
	int*                                               WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadoutGrenade1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadoutGrenade1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadoutMain1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadoutMain1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadoutMelee1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadoutMelee1_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__LoadoutSec1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__LoadoutSec1_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_8_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_8_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_7_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_7_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_4_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_4_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_3_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_2_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_7_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_7_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_6_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_6_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_5_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_5_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_4_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_4_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_3_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_3_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_2_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_2_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_1_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_15_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_15_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_14_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_14_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_13_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_13_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_12_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_12_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_11_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_11_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_10_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_10_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_9_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_9_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_8_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_8_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_23_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_23_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_22_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_22_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_21_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_21_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_20_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_20_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_19_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_19_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_18_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_18_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_17_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_17_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_16_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_16_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_31_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_31_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_30_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_30_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_29_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_29_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_28_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_28_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_27_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_27_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_26_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_26_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_25_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_25_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.BndEvt__PerkCard_C_24_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UCharacterSelectionPanel1_C_BndEvt__PerkCard_C_24_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function CharacterSelectionPanel1.CharacterSelectionPanel1_C.ExecuteUbergraph_CharacterSelectionPanel1
struct UCharacterSelectionPanel1_C_ExecuteUbergraph_CharacterSelectionPanel1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

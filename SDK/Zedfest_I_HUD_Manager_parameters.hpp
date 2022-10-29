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

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveObjectiveNotification
struct UI_HUD_Manager_C_RemoveObjectiveNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayObjectiveNotification
struct UI_HUD_Manager_C_DisplayObjectiveNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TypeText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeadlineText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow3;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow4;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow5;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow6;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow7;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameText
struct UI_HUD_Manager_C_RemoveIngameText_Params
{
	float*                                             NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameText
struct UI_HUD_Manager_C_DisplayIngameText_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function I_HUD_Manager.I_HUD_Manager_C.CrosshairVisibility
struct UI_HUD_Manager_C_CrosshairVisibility_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveGlobalNotification
struct UI_HUD_Manager_C_RemoveGlobalNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayGlobalNotification
struct UI_HUD_Manager_C_DisplayGlobalNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TypeText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeadlineText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow3;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow4;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow5;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow6;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      TextRow7;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveToolTip
struct UI_HUD_Manager_C_RemoveToolTip_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayToolTip
struct UI_HUD_Manager_C_DisplayToolTip_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveBigLootNotification
struct UI_HUD_Manager_C_RemoveBigLootNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayBigLootNotification
struct UI_HUD_Manager_C_DisplayBigLootNotification_Params
{
	struct FS_BigLootNotificationInfo*                 Big_Loot_Notify_Info;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplaySingleRecoil
struct UI_HUD_Manager_C_DisplaySingleRecoil_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayRecoil
struct UI_HUD_Manager_C_DisplayRecoil_Params
{
	bool*                                              IsRecoil;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameTutorial
struct UI_HUD_Manager_C_RemoveIngameTutorial_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveLootNotification
struct UI_HUD_Manager_C_RemoveLootNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveQuestNotification
struct UI_HUD_Manager_C_RemoveQuestNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveUpdaterNotification
struct UI_HUD_Manager_C_RemoveUpdaterNotification_Params
{
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayHitIndicator
struct UI_HUD_Manager_C_DisplayHitIndicator_Params
{
	float*                                             IndicatorTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               IndicatorColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayCrosshair
struct UI_HUD_Manager_C_DisplayCrosshair_Params
{
	TEnumAsByte<E_CrosshairTypes>*                     Crosshair_Type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CrosshairVisibility;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Crosshair_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_HitIndicatorTypes>*                  HitIndicator_Type;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HitIndicatorVisibility;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameTutorial
struct UI_HUD_Manager_C_DisplayIngameTutorial_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_IngameTutorial*                          Row1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_IngameTutorial*                          Row2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayQuestNotification
struct UI_HUD_Manager_C_DisplayQuestNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_QuestNotificatorInfo*                    S_QuestNotificatorInfo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              DisplayToolTip;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    ToolTipIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ToolTipText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ToolTipOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayUpdaterNotification
struct UI_HUD_Manager_C_DisplayUpdaterNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS_UpdaterNotificatorInfo*                  Updater_Notificator_Info;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              DisplayToolTip;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    ToolTip_Icon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      ToolTip_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ToolTip_Only;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayLootNotification
struct UI_HUD_Manager_C_DisplayLootNotification_Params
{
	float*                                             DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ValuePositive_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DynamicBackground_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               DynamicBackgroundColor;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayCompass
struct UI_HUD_Manager_C_DisplayCompass_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PlayFX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdateMarker
struct UI_HUD_Manager_C_UpdateMarker_Params
{
	class AActor**                                     ActorToMark;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MarkerPrecision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ParticlesVisible;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               ParticlesColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveMarker
struct UI_HUD_Manager_C_RemoveMarker_Params
{
	class AActor**                                     ActorToMark;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.CreateMarker
struct UI_HUD_Manager_C_CreateMarker_Params
{
	class AActor**                                     ActorToMark;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance**                          MarkerIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter**                                 PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent**                           PlayerCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdatePowerUp
struct UI_HUD_Manager_C_UpdatePowerUp_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX2
struct UI_HUD_Manager_C_UpdateDamageFX2_Params
{
	TEnumAsByte<E_DamageStates>*                       Damage_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Display_Damage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX1
struct UI_HUD_Manager_C_UpdateDamageFX1_Params
{
	TEnumAsByte<E_DamageStates>*                       Damage_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Display_Damage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlur
struct UI_HUD_Manager_C_UpdateBlur_Params
{
	bool*                                              DisplayBlur;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlackScreen
struct UI_HUD_Manager_C_UpdateBlackScreen_Params
{
	bool*                                              DisplayBlackscreen;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SlowFading;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function I_HUD_Manager.I_HUD_Manager_C.DisplayHUD
struct UI_HUD_Manager_C_DisplayHUD_Params
{
	bool*                                              ShowingHUD;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

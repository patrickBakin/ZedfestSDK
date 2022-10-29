#pragma once

// Zedfest (0.811) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass I_HUD_Manager.I_HUD_Manager_C
// 0x0000 (0x0028 - 0x0028)
class UI_HUD_Manager_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass I_HUD_Manager.I_HUD_Manager_C");
		return ptr;
	}


	void RemoveObjectiveNotification();
	void DisplayObjectiveNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void RemoveIngameText(float* NewParam);
	void DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void CrosshairVisibility(bool* bVisible);
	void RemoveGlobalNotification();
	void DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void RemoveToolTip();
	void DisplayToolTip(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void RemoveBigLootNotification();
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo* Big_Loot_Notify_Info);
	void DisplaySingleRecoil();
	void DisplayRecoil(bool* IsRecoil);
	void RemoveIngameTutorial();
	void RemoveLootNotification();
	void RemoveQuestNotification();
	void RemoveUpdaterNotification();
	void DisplayHitIndicator(float* IndicatorTime, struct FLinearColor* IndicatorColor);
	void DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* Crosshair_Type, bool* CrosshairVisibility, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicator_Type, bool* HitIndicatorVisibility);
	void DisplayIngameTutorial(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void DisplayQuestNotification(float* DisplayTime, struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo, bool* DisplayToolTip, class UObject** ToolTipIcon, struct FText* ToolTipText, bool* ToolTipOnly);
	void DisplayUpdaterNotification(float* DisplayTime, struct FS_UpdaterNotificatorInfo* Updater_Notificator_Info, bool* DisplayToolTip, class UObject** ToolTip_Icon, struct FText* ToolTip_Text, bool* ToolTip_Only);
	void DisplayLootNotification(float* DisplayTime, class UObject** Icon, struct FText* Text, int* Value, bool* ValuePositive_, bool* DynamicBackground_, struct FLinearColor* DynamicBackgroundColor);
	void DisplayCompass(bool* bVisible, bool* PlayFX);
	void UpdateMarker(class AActor** ActorToMark, float* MarkerPrecision, bool* ParticlesVisible, struct FLinearColor* ParticlesColor);
	void RemoveMarker(class AActor** ActorToMark);
	void CreateMarker(class AActor** ActorToMark, class UMaterialInstance** MarkerIcon, class ACharacter** PlayerCharacter, class UCameraComponent** PlayerCamera);
	void UpdatePowerUp(struct FLinearColor* Color);
	void UpdateDamageFX2(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage);
	void UpdateDamageFX1(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage);
	void UpdateBlur(bool* DisplayBlur);
	void UpdateBlackScreen(bool* DisplayBlackscreen, bool* SlowFading);
	void DisplayHUD(bool* ShowingHUD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

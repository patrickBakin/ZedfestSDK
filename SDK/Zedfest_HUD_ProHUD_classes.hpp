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

// BlueprintGeneratedClass HUD_ProHUD.HUD_ProHUD_C
// 0x0700 (0x0B20 - 0x0420)
class AHUD_ProHUD_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       ExternalBlends;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_ChromAberation;                                        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_Vignette;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_Saturation;                                            // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_Blur;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_PowerUp_Opacity_32FBA7274D3A28CCDF65E08782B70AD9;      // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_PowerUp__Direction_32FBA7274D3A28CCDF65E08782B70AD9;   // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_PowerUp;                                               // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_5_Saturation_493BA4914A976AC2356B188F3F5BB71C;   // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_ChromAberation_493BA4914A976AC2356B188F3F5BB71C;// 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_NewTrack_0_493BA4914A976AC2356B188F3F5BB71C;   // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_493BA4914A976AC2356B188F3F5BB71C;   // 0x0474(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Saturation_32DBBF0141D4B2BB324CFEB0E5F7A32D;   // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_ChromAberation_32DBBF0141D4B2BB324CFEB0E5F7A32D;// 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_32DBBF0141D4B2BB324CFEB0E5F7A32D;   // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_32DBBF0141D4B2BB324CFEB0E5F7A32D;   // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Vignette_Saturation_1FA958AA47EAAA04295323AD37B0496C;     // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Vignette_ChromAberation_1FA958AA47EAAA04295323AD37B0496C; // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Vignette_NewTrack_0_1FA958AA47EAAA04295323AD37B0496C;     // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Vignette__Direction_1FA958AA47EAAA04295323AD37B0496C;     // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Vignette;                                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_4_Opacity_D6504526415FD132CDBCB38F50714E38;      // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_D6504526415FD132CDBCB38F50714E38;   // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_MidPower_0FE95A144FAB355DBF58C3A0042E5D50;     // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_MidIntensity_0FE95A144FAB355DBF58C3A0042E5D50; // 0x04C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_0FE95A144FAB355DBF58C3A0042E5D50;   // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_MidPower_5C2F2B9549775AC0C1123EA5B31FE1AD;     // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_MidIntensity_5C2F2B9549775AC0C1123EA5B31FE1AD; // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_5C2F2B9549775AC0C1123EA5B31FE1AD;   // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_SoftlyPower_1D96B2754FF51F58B399858BEAAD56C1;  // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_SoftlyIntensity_1D96B2754FF51F58B399858BEAAD56C1;// 0x04F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_1D96B2754FF51F58B399858BEAAD56C1;   // 0x04F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageViewHard_HardPower_DB86487E4D34973EA6B252B8075FFABF;// 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageViewHard_HardIntensity_DB86487E4D34973EA6B252B8075FFABF;// 0x050C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DamageViewHard__Direction_DB86487E4D34973EA6B252B8075FFABF;// 0x0510(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DamageViewHard;                                           // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageViewMiddle_MidPower_798A9E464474EC9C0C87A38E741C040C;// 0x0520(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageViewMiddle_MidIntensity_798A9E464474EC9C0C87A38E741C040C;// 0x0524(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DamageViewMiddle__Direction_798A9E464474EC9C0C87A38E741C040C;// 0x0528(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DamageViewMiddle;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageViewSoftly_SoftlyPower_54638E6D440B587D2A481192E6254450;// 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageViewSoftly_SoftlyIntensity_54638E6D440B587D2A481192E6254450;// 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DamageViewSoftly__Direction_54638E6D440B587D2A481192E6254450;// 0x0540(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class UTimelineComponent*                          DamageViewSoftly;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeInOutDamageView_Opacity_7AA26BA64159357421628BBC7B37DEE8;// 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeInOutDamageView__Direction_7AA26BA64159357421628BBC7B37DEE8;// 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInOutDamageView;                                      // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_HardDamage_Time_ADC2FD964260852851E99ABB90BF965F;      // 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_HardDamage_Opacity_ADC2FD964260852851E99ABB90BF965F;   // 0x0564(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_HardDamage__Direction_ADC2FD964260852851E99ABB90BF965F;// 0x0568(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_HardDamage;                                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Softdamage_Time_F65DBF2C4B92E8DFB3E9C7BAEDD7942D;      // 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_Softdamage_Opacity_F65DBF2C4B92E8DFB3E9C7BAEDD7942D;   // 0x057C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Softdamage__Direction_F65DBF2C4B92E8DFB3E9C7BAEDD7942D;// 0x0580(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_Softdamage;                                            // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_MidDamage_Time_99B8BDD84BA96160D44F54980BA3F043;       // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TL_MidDamage_Opacity_99B8BDD84BA96160D44F54980BA3F043;    // 0x0594(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_MidDamage__Direction_99B8BDD84BA96160D44F54980BA3F043; // 0x0598(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_MidDamage;                                             // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlurTimeline_BlurValue_84A473AD4E7F9678417FA7A6E130293A;  // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlurTimeline__Direction_84A473AD4E7F9678417FA7A6E130293A; // 0x05AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlurTimeline;                                             // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Blackscreen_Long_BlackscreenOpacity_797E40C64AF55C35D0431C8E37FFA5C3;// 0x05B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Blackscreen_Long__Direction_797E40C64AF55C35D0431C8E37FFA5C3;// 0x05BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Blackscreen_Long;                                      // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_Blackscreen_BlackscreenOpacity_6494571C4CE58512F2AECB827AB75E18;// 0x05C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Blackscreen__Direction_6494571C4CE58512F2AECB827AB75E18;// 0x05CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Blackscreen;                                           // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWB_ProHUD_C*                                WB_ProHUD;                                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CamShakeScale;                                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0xC];                                       // 0x05E4(0x000C) MISSED OFFSET
	struct FPostProcessSettings                        EmptySettings;                                            // 0x05F0(0x0530) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HUD_ProHUD.HUD_ProHUD_C");
		return ptr;
	}


	void UpdateAllBlendables();
	void CreateHUD();
	void TL_Blackscreen__FinishedFunc();
	void TL_Blackscreen__UpdateFunc();
	void TL_Blackscreen_Long__FinishedFunc();
	void TL_Blackscreen_Long__UpdateFunc();
	void BlurTimeline__FinishedFunc();
	void BlurTimeline__UpdateFunc();
	void DamageViewHard__FinishedFunc();
	void DamageViewHard__UpdateFunc();
	void DamageViewMiddle__FinishedFunc();
	void DamageViewMiddle__UpdateFunc();
	void DamageViewSoftly__FinishedFunc();
	void DamageViewSoftly__UpdateFunc();
	void FadeInOutDamageView__FinishedFunc();
	void FadeInOutDamageView__UpdateFunc();
	void TL_HardDamage__FinishedFunc();
	void TL_HardDamage__UpdateFunc();
	void TL_Softdamage__FinishedFunc();
	void TL_Softdamage__UpdateFunc();
	void TL_MidDamage__FinishedFunc();
	void TL_MidDamage__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Vignette__FinishedFunc();
	void Vignette__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void TL_PowerUp__FinishedFunc();
	void TL_PowerUp__UpdateFunc();
	void CreateMarker(class AActor** ActorToMark, class UMaterialInstance** MarkerIcon, class ACharacter** PlayerCharacter, class UCameraComponent** PlayerCamera);
	void RemoveMarker(class AActor** ActorToMark);
	void UpdateMarker(class AActor** ActorToMark, float* MarkerPrecision, bool* ParticlesVisible, struct FLinearColor* ParticlesColor);
	void DisplayCompass(bool* bVisible, bool* PlayFX);
	void DisplayLootNotification(float* DisplayTime, class UObject** Icon, struct FText* Text, int* Value, bool* ValuePositive_, bool* DynamicBackground_, struct FLinearColor* DynamicBackgroundColor);
	void DisplayUpdaterNotification(float* DisplayTime, struct FS_UpdaterNotificatorInfo* Updater_Notificator_Info, bool* DisplayToolTip, class UObject** ToolTip_Icon, struct FText* ToolTip_Text, bool* ToolTip_Only);
	void DisplayQuestNotification(float* DisplayTime, struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo, bool* DisplayToolTip, class UObject** ToolTipIcon, struct FText* ToolTipText, bool* ToolTipOnly);
	void RemoveUpdaterNotification();
	void RemoveQuestNotification();
	void RemoveLootNotification();
	void DisplayBigLootNotification(struct FS_BigLootNotificationInfo* Big_Loot_Notify_Info);
	void RemoveBigLootNotification();
	void DisplayToolTip(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void RemoveToolTip();
	void ReceiveBeginPlay();
	void UpdatePowerUp(struct FLinearColor* Color);
	void UpdateDamageFX2(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage);
	void UpdateDamageFX1(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage);
	void UpdateBlur(bool* DisplayBlur);
	void UpdateBlackScreen(bool* DisplayBlackscreen, bool* SlowFading);
	void DisplayHUD(bool* ShowingHUD);
	void DisplayIngameTutorial(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* Crosshair_Type, bool* CrosshairVisibility, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicator_Type, bool* HitIndicatorVisibility);
	void DisplayHitIndicator(float* IndicatorTime, struct FLinearColor* IndicatorColor);
	void RemoveIngameTutorial();
	void DisplayRecoil(bool* IsRecoil);
	void DisplaySingleRecoil();
	void RemoveGlobalNotification();
	void DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void CrosshairVisibility(bool* bVisible);
	void DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2);
	void RemoveIngameText(float* NewParam);
	void DisplayObjectiveNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor);
	void RemoveObjectiveNotification();
	void UpdateBlendables();
	void CustomEvent();
	void DamageFX1CameraShake();
	void ExecuteUbergraph_HUD_ProHUD(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

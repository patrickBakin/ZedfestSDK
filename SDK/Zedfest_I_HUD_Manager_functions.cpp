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

// Function I_HUD_Manager.I_HUD_Manager_C.RemoveObjectiveNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveObjectiveNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveObjectiveNotification");

	UI_HUD_Manager_C_RemoveObjectiveNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayObjectiveNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TypeText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow3                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow4                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow5                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow6                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow7                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayObjectiveNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayObjectiveNotification");

	UI_HUD_Manager_C_DisplayObjectiveNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.TypeText = TypeText;
	params.HeadlineText = HeadlineText;
	params.TextRow3 = TextRow3;
	params.TextRow4 = TextRow4;
	params.TextRow5 = TextRow5;
	params.TextRow6 = TextRow6;
	params.TextRow7 = TextRow7;
	params.BackgroundColor = BackgroundColor;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::RemoveIngameText(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameText");

	UI_HUD_Manager_C_RemoveIngameText_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UI_HUD_Manager_C::DisplayIngameText(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameText");

	UI_HUD_Manager_C_DisplayIngameText_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.CrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::CrosshairVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.CrosshairVisibility");

	UI_HUD_Manager_C_CrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveGlobalNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveGlobalNotification");

	UI_HUD_Manager_C_RemoveGlobalNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayGlobalNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TypeText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeadlineText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow3                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow4                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow5                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow6                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TextRow7                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayGlobalNotification(float* DisplayTime, struct FText* TypeText, struct FText* HeadlineText, struct FText* TextRow3, struct FText* TextRow4, struct FText* TextRow5, struct FText* TextRow6, struct FText* TextRow7, struct FLinearColor* BackgroundColor, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayGlobalNotification");

	UI_HUD_Manager_C_DisplayGlobalNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.TypeText = TypeText;
	params.HeadlineText = HeadlineText;
	params.TextRow3 = TextRow3;
	params.TextRow4 = TextRow4;
	params.TextRow5 = TextRow5;
	params.TextRow6 = TextRow6;
	params.TextRow7 = TextRow7;
	params.BackgroundColor = BackgroundColor;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveToolTip
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveToolTip");

	UI_HUD_Manager_C_RemoveToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UI_HUD_Manager_C::DisplayToolTip(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayToolTip");

	UI_HUD_Manager_C_DisplayToolTip_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveBigLootNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveBigLootNotification");

	UI_HUD_Manager_C_RemoveBigLootNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayBigLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_BigLootNotificationInfo* Big_Loot_Notify_Info           (BlueprintVisible, BlueprintReadOnly, Parm)

void UI_HUD_Manager_C::DisplayBigLootNotification(struct FS_BigLootNotificationInfo* Big_Loot_Notify_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayBigLootNotification");

	UI_HUD_Manager_C_DisplayBigLootNotification_Params params;
	params.Big_Loot_Notify_Info = Big_Loot_Notify_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplaySingleRecoil
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::DisplaySingleRecoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplaySingleRecoil");

	UI_HUD_Manager_C_DisplaySingleRecoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayRecoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsRecoil                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayRecoil(bool* IsRecoil)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayRecoil");

	UI_HUD_Manager_C_DisplayRecoil_Params params;
	params.IsRecoil = IsRecoil;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveIngameTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveIngameTutorial");

	UI_HUD_Manager_C_RemoveIngameTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveLootNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveLootNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveLootNotification");

	UI_HUD_Manager_C_RemoveLootNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveQuestNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveQuestNotification");

	UI_HUD_Manager_C_RemoveQuestNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveUpdaterNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UI_HUD_Manager_C::RemoveUpdaterNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveUpdaterNotification");

	UI_HUD_Manager_C_RemoveUpdaterNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         IndicatorTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           IndicatorColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayHitIndicator(float* IndicatorTime, struct FLinearColor* IndicatorColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayHitIndicator");

	UI_HUD_Manager_C_DisplayHitIndicator_Params params;
	params.IndicatorTime = IndicatorTime;
	params.IndicatorColor = IndicatorColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_CrosshairTypes>* Crosshair_Type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CrosshairVisibility            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Crosshair_Color                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_HitIndicatorTypes>* HitIndicator_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HitIndicatorVisibility         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayCrosshair(TEnumAsByte<E_CrosshairTypes>* Crosshair_Type, bool* CrosshairVisibility, struct FLinearColor* Crosshair_Color, TEnumAsByte<E_HitIndicatorTypes>* HitIndicator_Type, bool* HitIndicatorVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayCrosshair");

	UI_HUD_Manager_C_DisplayCrosshair_Params params;
	params.Crosshair_Type = Crosshair_Type;
	params.CrosshairVisibility = CrosshairVisibility;
	params.Crosshair_Color = Crosshair_Color;
	params.HitIndicator_Type = HitIndicator_Type;
	params.HitIndicatorVisibility = HitIndicatorVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_IngameTutorial*      Row1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FS_IngameTutorial*      Row2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UI_HUD_Manager_C::DisplayIngameTutorial(float* DisplayTime, struct FS_IngameTutorial* Row1, struct FS_IngameTutorial* Row2)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayIngameTutorial");

	UI_HUD_Manager_C_DisplayIngameTutorial_Params params;
	params.DisplayTime = DisplayTime;
	params.Row1 = Row1;
	params.Row2 = Row2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayQuestNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          DisplayToolTip                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ToolTipIcon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ToolTipText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ToolTipOnly                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayQuestNotification(float* DisplayTime, struct FS_QuestNotificatorInfo* S_QuestNotificatorInfo, bool* DisplayToolTip, class UObject** ToolTipIcon, struct FText* ToolTipText, bool* ToolTipOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayQuestNotification");

	UI_HUD_Manager_C_DisplayQuestNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.S_QuestNotificatorInfo = S_QuestNotificatorInfo;
	params.DisplayToolTip = DisplayToolTip;
	params.ToolTipIcon = ToolTipIcon;
	params.ToolTipText = ToolTipText;
	params.ToolTipOnly = ToolTipOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayUpdaterNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS_UpdaterNotificatorInfo* Updater_Notificator_Info       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          DisplayToolTip                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ToolTip_Icon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ToolTip_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ToolTip_Only                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayUpdaterNotification(float* DisplayTime, struct FS_UpdaterNotificatorInfo* Updater_Notificator_Info, bool* DisplayToolTip, class UObject** ToolTip_Icon, struct FText* ToolTip_Text, bool* ToolTip_Only)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayUpdaterNotification");

	UI_HUD_Manager_C_DisplayUpdaterNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.Updater_Notificator_Info = Updater_Notificator_Info;
	params.DisplayToolTip = DisplayToolTip;
	params.ToolTip_Icon = ToolTip_Icon;
	params.ToolTip_Text = ToolTip_Text;
	params.ToolTip_Only = ToolTip_Only;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayLootNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DisplayTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ValuePositive_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DynamicBackground_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           DynamicBackgroundColor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayLootNotification(float* DisplayTime, class UObject** Icon, struct FText* Text, int* Value, bool* ValuePositive_, bool* DynamicBackground_, struct FLinearColor* DynamicBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayLootNotification");

	UI_HUD_Manager_C_DisplayLootNotification_Params params;
	params.DisplayTime = DisplayTime;
	params.Icon = Icon;
	params.Text = Text;
	params.Value = Value;
	params.ValuePositive_ = ValuePositive_;
	params.DynamicBackground_ = DynamicBackground_;
	params.DynamicBackgroundColor = DynamicBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayCompass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlayFX                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayCompass(bool* bVisible, bool* PlayFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayCompass");

	UI_HUD_Manager_C_DisplayCompass_Params params;
	params.bVisible = bVisible;
	params.PlayFX = PlayFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorToMark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarkerPrecision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ParticlesVisible               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           ParticlesColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdateMarker(class AActor** ActorToMark, float* MarkerPrecision, bool* ParticlesVisible, struct FLinearColor* ParticlesColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdateMarker");

	UI_HUD_Manager_C_UpdateMarker_Params params;
	params.ActorToMark = ActorToMark;
	params.MarkerPrecision = MarkerPrecision;
	params.ParticlesVisible = ParticlesVisible;
	params.ParticlesColor = ParticlesColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.RemoveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorToMark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::RemoveMarker(class AActor** ActorToMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.RemoveMarker");

	UI_HUD_Manager_C_RemoveMarker_Params params;
	params.ActorToMark = ActorToMark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 ActorToMark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance**      MarkerIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter**             PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCameraComponent**       PlayerCamera                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UI_HUD_Manager_C::CreateMarker(class AActor** ActorToMark, class UMaterialInstance** MarkerIcon, class ACharacter** PlayerCharacter, class UCameraComponent** PlayerCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.CreateMarker");

	UI_HUD_Manager_C_CreateMarker_Params params;
	params.ActorToMark = ActorToMark;
	params.MarkerIcon = MarkerIcon;
	params.PlayerCharacter = PlayerCharacter;
	params.PlayerCamera = PlayerCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdatePowerUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdatePowerUp(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdatePowerUp");

	UI_HUD_Manager_C_UpdatePowerUp_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DamageStates>*   Damage_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Display_Damage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdateDamageFX2(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX2");

	UI_HUD_Manager_C_UpdateDamageFX2_Params params;
	params.Damage_State = Damage_State;
	params.Display_Damage = Display_Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DamageStates>*   Damage_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Display_Damage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdateDamageFX1(TEnumAsByte<E_DamageStates>* Damage_State, bool* Display_Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdateDamageFX1");

	UI_HUD_Manager_C_UpdateDamageFX1_Params params;
	params.Damage_State = Damage_State;
	params.Display_Damage = Display_Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DisplayBlur                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdateBlur(bool* DisplayBlur)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlur");

	UI_HUD_Manager_C_UpdateBlur_Params params;
	params.DisplayBlur = DisplayBlur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlackScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DisplayBlackscreen             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SlowFading                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::UpdateBlackScreen(bool* DisplayBlackscreen, bool* SlowFading)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.UpdateBlackScreen");

	UI_HUD_Manager_C_UpdateBlackScreen_Params params;
	params.DisplayBlackscreen = DisplayBlackscreen;
	params.SlowFading = SlowFading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function I_HUD_Manager.I_HUD_Manager_C.DisplayHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowingHUD                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UI_HUD_Manager_C::DisplayHUD(bool* ShowingHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_HUD_Manager.I_HUD_Manager_C.DisplayHUD");

	UI_HUD_Manager_C_DisplayHUD_Params params;
	params.ShowingHUD = ShowingHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

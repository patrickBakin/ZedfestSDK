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
//Functions
//---------------------------------------------------------------------------

// Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetScroller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              Scroller                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UW_CXP_PopUpText_C::GetScroller(class UScrollBox** Scroller)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetScroller");

	UW_CXP_PopUpText_C_GetScroller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scroller != nullptr)
		*Scroller = params.Scroller;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetXpAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_CXP_PopUpText_C::GetXpAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.GetXpAmount");

	UW_CXP_PopUpText_C_GetXpAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54
// (BlueprintCallable, BlueprintEvent)

void UW_CXP_PopUpText_C::OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54");

	UW_CXP_PopUpText_C_OnFailure_6C1E2CFE4AFF6BFC2D939386FC52DF54_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54
// (BlueprintCallable, BlueprintEvent)

void UW_CXP_PopUpText_C::OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54");

	UW_CXP_PopUpText_C_OnSuccess_6C1E2CFE4AFF6BFC2D939386FC52DF54_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_85AC89024D8B8C21EB8EACB99D67693A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::OnFailure_85AC89024D8B8C21EB8EACB99D67693A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnFailure_85AC89024D8B8C21EB8EACB99D67693A");

	UW_CXP_PopUpText_C_OnFailure_85AC89024D8B8C21EB8EACB99D67693A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_85AC89024D8B8C21EB8EACB99D67693A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::OnSuccess_85AC89024D8B8C21EB8EACB99D67693A(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.OnSuccess_85AC89024D8B8C21EB8EACB99D67693A");

	UW_CXP_PopUpText_C_OnSuccess_85AC89024D8B8C21EB8EACB99D67693A_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_CXP_PopUpText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.Construct");

	UW_CXP_PopUpText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.XPPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::XPPopup(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.XPPopup");

	UW_CXP_PopUpText_C_XPPopup_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.LevelUpPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                CurrentLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                ClassName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Z                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_CXP_PopUpText_C::LevelUpPopup(struct FString* CurrentLevel, struct FString* ClassName, struct FString* Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.LevelUpPopup");

	UW_CXP_PopUpText_C_LevelUpPopup_Params params;
	params.CurrentLevel = CurrentLevel;
	params.ClassName = ClassName;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.WinLoseWidgetEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                LoseText                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_CXP_PopUpText_C::WinLoseWidgetEvent(struct FString* LoseText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.WinLoseWidgetEvent");

	UW_CXP_PopUpText_C_WinLoseWidgetEvent_Params params;
	params.LoseText = LoseText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.ObjectiveWidgetEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                ObjectiveHeadText              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                ObjectiveDescText              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UW_CXP_PopUpText_C::ObjectiveWidgetEvent(struct FString* ObjectiveHeadText, struct FString* ObjectiveDescText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.ObjectiveWidgetEvent");

	UW_CXP_PopUpText_C_ObjectiveWidgetEvent_Params params;
	params.ObjectiveHeadText = ObjectiveHeadText;
	params.ObjectiveDescText = ObjectiveDescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.WeaponUpgradePopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                WeaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Prestige_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::WeaponUpgradePopup(struct FString* WeaponName, struct FLinearColor* Color, bool* Prestige_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.WeaponUpgradePopup");

	UW_CXP_PopUpText_C_WeaponUpgradePopup_Params params;
	params.WeaponName = WeaponName;
	params.Color = Color;
	params.Prestige_ = Prestige_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.UnlockableRewardEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Rubrik                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject**                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           RewardID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::UnlockableRewardEvent(struct FString* Rubrik, struct FString* Name, class UObject** Image, int* RewardID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.UnlockableRewardEvent");

	UW_CXP_PopUpText_C_UnlockableRewardEvent_Params params;
	params.Rubrik = Rubrik;
	params.Name = Name;
	params.Image = Image;
	params.RewardID = RewardID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.DailyChallengePopup
// (BlueprintCallable, BlueprintEvent)

void UW_CXP_PopUpText_C::DailyChallengePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.DailyChallengePopup");

	UW_CXP_PopUpText_C_DailyChallengePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.SeasonalChallengePopup
// (BlueprintCallable, BlueprintEvent)

void UW_CXP_PopUpText_C::SeasonalChallengePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.SeasonalChallengePopup");

	UW_CXP_PopUpText_C_SeasonalChallengePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.BandNameEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  BandName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SongName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_CXP_PopUpText_C::BandNameEvent(struct FText* BandName, struct FText* SongName)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.BandNameEvent");

	UW_CXP_PopUpText_C_BandNameEvent_Params params;
	params.BandName = BandName;
	params.SongName = SongName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_CXP_PopUpText.W_CXP_PopUpText_C.ExecuteUbergraph_W_CXP_PopUpText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_CXP_PopUpText_C::ExecuteUbergraph_W_CXP_PopUpText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_CXP_PopUpText.W_CXP_PopUpText_C.ExecuteUbergraph_W_CXP_PopUpText");

	UW_CXP_PopUpText_C_ExecuteUbergraph_W_CXP_PopUpText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

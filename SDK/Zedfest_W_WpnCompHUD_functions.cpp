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

// Function W_WpnCompHUD.W_WpnCompHUD_C.GetPlayerMoney
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::GetPlayerMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.GetPlayerMoney");

	UW_WpnCompHUD_C_GetPlayerMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.GetArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::GetArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.GetArmor");

	UW_WpnCompHUD_C_GetArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.GetHP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::GetHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.GetHP");

	UW_WpnCompHUD_C_GetHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Weapon Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::Get_Weapon_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Get Weapon Name");

	UW_WpnCompHUD_C_Get_Weapon_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Total Ammo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::Get_Total_Ammo()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Get Total Ammo");

	UW_WpnCompHUD_C_Get_Total_Ammo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Get Item Amount or Ammo in Gun
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::Get_Item_Amount_or_Ammo_in_Gun()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Get Item Amount or Ammo in Gun");

	UW_WpnCompHUD_C_Get_Item_Amount_or_Ammo_in_Gun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Set Slots Bar Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_WpnCompHUD_C::Set_Slots_Bar_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Set Slots Bar Visibility");

	UW_WpnCompHUD_C_Set_Slots_Bar_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.AddCashText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::AddCashText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.AddCashText");

	UW_WpnCompHUD_C_AddCashText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UW_WpnCompHUD_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.GetPercent_1");

	UW_WpnCompHUD_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ShowSniperScope
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UW_WpnCompHUD_C::ShowSniperScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ShowSniperScope");

	UW_WpnCompHUD_C_ShowSniperScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.MedicineNeedles
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UW_WpnCompHUD_C::MedicineNeedles()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.MedicineNeedles");

	UW_WpnCompHUD_C_MedicineNeedles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.DoubleTripleKillText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::DoubleTripleKillText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.DoubleTripleKillText");

	UW_WpnCompHUD_C_DoubleTripleKillText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Get_TotalScoreBank
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UW_WpnCompHUD_C::Get_TotalScoreBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Get_TotalScoreBank");

	UW_WpnCompHUD_C_Get_TotalScoreBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreMittenText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::ScoreMittenText()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreMittenText");

	UW_WpnCompHUD_C_ScoreMittenText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Grenades
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UW_WpnCompHUD_C::Grenades()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Grenades");

	UW_WpnCompHUD_C_Grenades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Get_Distance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UW_WpnCompHUD_C::Get_Distance()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Get_Distance");

	UW_WpnCompHUD_C_Get_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_C17D6DA640E32A866E52BB8425B58FDC
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::OnFailure_C17D6DA640E32A866E52BB8425B58FDC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_C17D6DA640E32A866E52BB8425B58FDC");

	UW_WpnCompHUD_C_OnFailure_C17D6DA640E32A866E52BB8425B58FDC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_C17D6DA640E32A866E52BB8425B58FDC
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::OnSuccess_C17D6DA640E32A866E52BB8425B58FDC()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_C17D6DA640E32A866E52BB8425B58FDC");

	UW_WpnCompHUD_C_OnSuccess_C17D6DA640E32A866E52BB8425B58FDC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3");

	UW_WpnCompHUD_C_OnFailure_1BC11FD941F1CF9D6D1DF080A9A579C3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3");

	UW_WpnCompHUD_C_OnSuccess_1BC11FD941F1CF9D6D1DF080A9A579C3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.MultiplierBarEvent
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::MultiplierBarEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.MultiplierBarEvent");

	UW_WpnCompHUD_C_MultiplierBarEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.PlaceCurrent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::PlaceCurrent(int* CurrentInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.PlaceCurrent");

	UW_WpnCompHUD_C_PlaceCurrent_Params params;
	params.CurrentInt = CurrentInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.KeyCardEventWPN
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Keys                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::KeyCardEventWPN(int* Keys)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.KeyCardEventWPN");

	UW_WpnCompHUD_C_KeyCardEventWPN_Params params;
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.InteractBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Stop_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::InteractBar(bool* Stop_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.InteractBar");

	UW_WpnCompHUD_C_InteractBar_Params params;
	params.Stop_ = Stop_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ScorePopinAnimation
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::ScorePopinAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ScorePopinAnimation");

	UW_WpnCompHUD_C_ScorePopinAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.PlayAddDeductAnimation
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  AddDeductText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Deduct                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::PlayAddDeductAnimation(struct FText* AddDeductText, bool* Deduct)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.PlayAddDeductAnimation");

	UW_WpnCompHUD_C_PlayAddDeductAnimation_Params params;
	params.AddDeductText = AddDeductText;
	params.Deduct = Deduct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WpnCompHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Construct");

	UW_WpnCompHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.Send Message to HUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Menssage                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_WpnCompHUD_C::Send_Message_to_HUD(struct FText* Menssage)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.Send Message to HUD");

	UW_WpnCompHUD_C_Send_Message_to_HUD_Params params;
	params.Menssage = Menssage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreBankTick
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::ScoreBankTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ScoreBankTick");

	UW_WpnCompHUD_C_ScoreBankTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentAmmoBP                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::UpdateAmmoBP(int* CurrentAmmoBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoBP");

	UW_WpnCompHUD_C_UpdateAmmoBP_Params params;
	params.CurrentAmmoBP = CurrentAmmoBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.EventWeaponName
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::EventWeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.EventWeaponName");

	UW_WpnCompHUD_C_EventWeaponName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.EventRecordingUMG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Recording_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::EventRecordingUMG(bool* Recording_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.EventRecordingUMG");

	UW_WpnCompHUD_C_EventRecordingUMG_Params params;
	params.Recording_ = Recording_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentAmmoMag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::UpdateAmmoMag(int* CurrentAmmoMag)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateAmmoMag");

	UW_WpnCompHUD_C_UpdateAmmoMag_Params params;
	params.CurrentAmmoMag = CurrentAmmoMag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.SetCrosshair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::SetCrosshair(int* WidgetIndex, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.SetCrosshair");

	UW_WpnCompHUD_C_SetCrosshair_Params params;
	params.WidgetIndex = WidgetIndex;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.SetCurrentWeaponData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  WeaponID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WeaponNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmmoM                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmmoB                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_FireModes>*      FireMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_WeaponState>*    WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::SetCurrentWeaponData(bool* HasWeapon, struct FName* WeaponID, int* WeaponNumber, int* AmmoM, int* AmmoB, TEnumAsByte<E_FireModes>* FireMode, TEnumAsByte<E_WeaponState>* WeaponState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.SetCurrentWeaponData");

	UW_WpnCompHUD_C_SetCurrentWeaponData_Params params;
	params.HasWeapon = HasWeapon;
	params.WeaponID = WeaponID;
	params.WeaponNumber = WeaponNumber;
	params.AmmoM = AmmoM;
	params.AmmoB = AmmoB;
	params.FireMode = FireMode;
	params.WeaponState = WeaponState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateWeaponStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_WeaponState>*    WeaponState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::UpdateWeaponStatus(TEnumAsByte<E_WeaponState>* WeaponState)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.UpdateWeaponStatus");

	UW_WpnCompHUD_C_UpdateWeaponStatus_Params params;
	params.WeaponState = WeaponState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ReloadTimerBarEvent
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::ReloadTimerBarEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ReloadTimerBarEvent");

	UW_WpnCompHUD_C_ReloadTimerBarEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WpnCompHUD_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.OnInitialized");

	UW_WpnCompHUD_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ReviveBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Stop_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::ReviveBar(bool* Stop_)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ReviveBar");

	UW_WpnCompHUD_C_ReviveBar_Params params;
	params.Stop_ = Stop_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.InvincibleAnimEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumberOfLoops                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_WpnCompHUD_C::InvincibleAnimEvent(int* NumberOfLoops, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.InvincibleAnimEvent");

	UW_WpnCompHUD_C_InvincibleAnimEvent_Params params;
	params.NumberOfLoops = NumberOfLoops;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.HPChangedValue
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::HPChangedValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.HPChangedValue");

	UW_WpnCompHUD_C_HPChangedValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.AlwaysShowEvent
// (BlueprintCallable, BlueprintEvent)

void UW_WpnCompHUD_C::AlwaysShowEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.AlwaysShowEvent");

	UW_WpnCompHUD_C_AlwaysShowEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WpnCompHUD.W_WpnCompHUD_C.ExecuteUbergraph_W_WpnCompHUD
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_WpnCompHUD_C::ExecuteUbergraph_W_WpnCompHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_WpnCompHUD.W_WpnCompHUD_C.ExecuteUbergraph_W_WpnCompHUD");

	UW_WpnCompHUD_C_ExecuteUbergraph_W_WpnCompHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

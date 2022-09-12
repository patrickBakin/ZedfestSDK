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

<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnRep_FreshJoin?
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnRep_FreshJoin_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnRep_FreshJoin?");

	ABP_Base_HordeController_C_OnRep_FreshJoin__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.DiscordSend
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::DiscordSend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DiscordSend");

	ABP_Base_HordeController_C_DiscordSend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.GetCurrentAnnouncement
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FToolData               Output                         (Parm, OutParm)

void ABP_Base_HordeController_C::GetCurrentAnnouncement(struct FToolData* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.GetCurrentAnnouncement");

	ABP_Base_HordeController_C_GetCurrentAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Added_Score                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Headshot_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          LastShot_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DamageCauserInt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ZedName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// bool*                          DoubleKill_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddScore(int* Added_Score, bool* Headshot_, bool* LastShot_, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName, bool* DoubleKill_)
=======

void ABP_Base_HordeController_C::AddScore(int* Added_Score, bool* Headshot_, bool* LastShot_, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName)
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddScore");

	ABP_Base_HordeController_C_AddScore_Params params;
	params.Added_Score = Added_Score;
	params.Headshot_ = Headshot_;
	params.LastShot_ = LastShot_;
	params.DamageCauserInt = DamageCauserInt;
	params.DamageWeapon = DamageWeapon;
	params.ZedName = ZedName;
<<<<<<< HEAD
	params.DoubleKill_ = DoubleKill_;
=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.CharacterCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::CharacterCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.CharacterCheck");

	ABP_Base_HordeController_C_CharacterCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InitPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::InitPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InitPlayerInfo");

	ABP_Base_HordeController_C_InitPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Client_Play2DSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::Client_Play2DSound(class USoundBase** Sound, float* VolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Client_Play2DSound");

	ABP_Base_HordeController_C_Client_Play2DSound_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_0__FinishedFunc");

	ABP_Base_HordeController_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_0__UpdateFunc");

	ABP_Base_HordeController_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__FinishedFunc");

	ABP_Base_HordeController_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__UpdateFunc");

	ABP_Base_HordeController_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_1__FinishedFunc");

	ABP_Base_HordeController_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_1__UpdateFunc");

	ABP_Base_HordeController_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_3__FinishedFunc");

	ABP_Base_HordeController_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_3__UpdateFunc");

	ABP_Base_HordeController_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__FinishedFunc");

	ABP_Base_HordeController_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_Base_HordeController_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Timeline_2__UpdateFunc");

	ABP_Base_HordeController_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_EscapeButton_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_EscapeButton_K2Node_InputActionEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_EscapeButton_K2Node_InputActionEvent_7");

	ABP_Base_HordeController_C_InpActEvt_EscapeButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_E_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_E_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_E_K2Node_InputKeyEvent_6");

	ABP_Base_HordeController_C_InpActEvt_E_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Toggle Scoreboard_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Toggle Scoreboard_K2Node_InputActionEvent_6");

	ABP_Base_HordeController_C_InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Toggle Scoreboard_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Toggle Scoreboard_K2Node_InputActionEvent_5");

	ABP_Base_HordeController_C_InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Enter Chat_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_Enter_Chat_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Enter Chat_K2Node_InputActionEvent_4");

	ABP_Base_HordeController_C_InpActEvt_Enter_Chat_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_E_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_E_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_E_K2Node_InputKeyEvent_6");

	ABP_Base_HordeController_C_InpActEvt_E_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_1E3F902448EAD1CDD4AF91B662FAC50C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_1E3F902448EAD1CDD4AF91B662FAC50C(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_1E3F902448EAD1CDD4AF91B662FAC50C");

	ABP_Base_HordeController_C_OnFailure_1E3F902448EAD1CDD4AF91B662FAC50C_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_1E3F902448EAD1CDD4AF91B662FAC50C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_1E3F902448EAD1CDD4AF91B662FAC50C(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_1E3F902448EAD1CDD4AF91B662FAC50C");

	ABP_Base_HordeController_C_OnSuccess_1E3F902448EAD1CDD4AF91B662FAC50C_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_738F8ACC4005F6DF6F0811A6B187E027
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_738F8ACC4005F6DF6F0811A6B187E027()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_738F8ACC4005F6DF6F0811A6B187E027");

	ABP_Base_HordeController_C_OnFailure_738F8ACC4005F6DF6F0811A6B187E027_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_738F8ACC4005F6DF6F0811A6B187E027
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_738F8ACC4005F6DF6F0811A6B187E027()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_738F8ACC4005F6DF6F0811A6B187E027");

	ABP_Base_HordeController_C_OnSuccess_738F8ACC4005F6DF6F0811A6B187E027_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_58EA764D42A1EC038653E2BCF69D3C05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_58EA764D42A1EC038653E2BCF69D3C05(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_58EA764D42A1EC038653E2BCF69D3C05");

	ABP_Base_HordeController_C_OnFailure_58EA764D42A1EC038653E2BCF69D3C05_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_58EA764D42A1EC038653E2BCF69D3C05
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_58EA764D42A1EC038653E2BCF69D3C05(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_58EA764D42A1EC038653E2BCF69D3C05");

	ABP_Base_HordeController_C_OnSuccess_58EA764D42A1EC038653E2BCF69D3C05_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_23D0861A426F031381F87F9B8F07B1C0
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_23D0861A426F031381F87F9B8F07B1C0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_23D0861A426F031381F87F9B8F07B1C0");

	ABP_Base_HordeController_C_OnFailure_23D0861A426F031381F87F9B8F07B1C0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_23D0861A426F031381F87F9B8F07B1C0
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_23D0861A426F031381F87F9B8F07B1C0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_23D0861A426F031381F87F9B8F07B1C0");

	ABP_Base_HordeController_C_OnSuccess_23D0861A426F031381F87F9B8F07B1C0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_925001DF4B95A2AFCAA4A9A7D14C2AC5
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_925001DF4B95A2AFCAA4A9A7D14C2AC5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_925001DF4B95A2AFCAA4A9A7D14C2AC5");

	ABP_Base_HordeController_C_OnFailure_925001DF4B95A2AFCAA4A9A7D14C2AC5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_925001DF4B95A2AFCAA4A9A7D14C2AC5
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_925001DF4B95A2AFCAA4A9A7D14C2AC5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_925001DF4B95A2AFCAA4A9A7D14C2AC5");

	ABP_Base_HordeController_C_OnSuccess_925001DF4B95A2AFCAA4A9A7D14C2AC5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_09080BC5402550BC1B0613B4E34894DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_09080BC5402550BC1B0613B4E34894DF(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_09080BC5402550BC1B0613B4E34894DF");

	ABP_Base_HordeController_C_OnFailure_09080BC5402550BC1B0613B4E34894DF_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_09080BC5402550BC1B0613B4E34894DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_09080BC5402550BC1B0613B4E34894DF(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_09080BC5402550BC1B0613B4E34894DF");

	ABP_Base_HordeController_C_OnSuccess_09080BC5402550BC1B0613B4E34894DF_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_ED59D4374179BCD399D12886E6E2B3BD
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_ED59D4374179BCD399D12886E6E2B3BD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_ED59D4374179BCD399D12886E6E2B3BD");

	ABP_Base_HordeController_C_OnFailure_ED59D4374179BCD399D12886E6E2B3BD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_ED59D4374179BCD399D12886E6E2B3BD
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_ED59D4374179BCD399D12886E6E2B3BD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_ED59D4374179BCD399D12886E6E2B3BD");

	ABP_Base_HordeController_C_OnSuccess_ED59D4374179BCD399D12886E6E2B3BD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_AAA8C9EA4449C3EDD2362395E636FE39
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_AAA8C9EA4449C3EDD2362395E636FE39(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_AAA8C9EA4449C3EDD2362395E636FE39");

	ABP_Base_HordeController_C_OnFailure_AAA8C9EA4449C3EDD2362395E636FE39_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_AAA8C9EA4449C3EDD2362395E636FE39
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_AAA8C9EA4449C3EDD2362395E636FE39(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_AAA8C9EA4449C3EDD2362395E636FE39");

	ABP_Base_HordeController_C_OnSuccess_AAA8C9EA4449C3EDD2362395E636FE39_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_B795C42244B186F8AA3FB6BEAB82D252
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_B795C42244B186F8AA3FB6BEAB82D252()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_B795C42244B186F8AA3FB6BEAB82D252");

	ABP_Base_HordeController_C_OnFailure_B795C42244B186F8AA3FB6BEAB82D252_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_B795C42244B186F8AA3FB6BEAB82D252
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_B795C42244B186F8AA3FB6BEAB82D252()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_B795C42244B186F8AA3FB6BEAB82D252");

	ABP_Base_HordeController_C_OnSuccess_B795C42244B186F8AA3FB6BEAB82D252_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_934989E44C6FE8BFA49BE0A047327419
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_934989E44C6FE8BFA49BE0A047327419(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_934989E44C6FE8BFA49BE0A047327419");

	ABP_Base_HordeController_C_OnFailure_934989E44C6FE8BFA49BE0A047327419_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_934989E44C6FE8BFA49BE0A047327419
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_934989E44C6FE8BFA49BE0A047327419(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_934989E44C6FE8BFA49BE0A047327419");

	ABP_Base_HordeController_C_OnSuccess_934989E44C6FE8BFA49BE0A047327419_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_6AB578B54E4460E794CE54B16D6E1C3A
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_6AB578B54E4460E794CE54B16D6E1C3A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_6AB578B54E4460E794CE54B16D6E1C3A");

	ABP_Base_HordeController_C_OnFailure_6AB578B54E4460E794CE54B16D6E1C3A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_6AB578B54E4460E794CE54B16D6E1C3A
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_6AB578B54E4460E794CE54B16D6E1C3A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_6AB578B54E4460E794CE54B16D6E1C3A");

	ABP_Base_HordeController_C_OnSuccess_6AB578B54E4460E794CE54B16D6E1C3A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_F3A553344116D174FBAADC8966B16BD9
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_F3A553344116D174FBAADC8966B16BD9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_F3A553344116D174FBAADC8966B16BD9");

	ABP_Base_HordeController_C_OnFailure_F3A553344116D174FBAADC8966B16BD9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_F3A553344116D174FBAADC8966B16BD9
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_F3A553344116D174FBAADC8966B16BD9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_F3A553344116D174FBAADC8966B16BD9");

	ABP_Base_HordeController_C_OnSuccess_F3A553344116D174FBAADC8966B16BD9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_FBDB8D5D426A9A9B6F233195F8459B41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_FBDB8D5D426A9A9B6F233195F8459B41(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_FBDB8D5D426A9A9B6F233195F8459B41");

	ABP_Base_HordeController_C_OnFailure_FBDB8D5D426A9A9B6F233195F8459B41_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_FBDB8D5D426A9A9B6F233195F8459B41
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_FBDB8D5D426A9A9B6F233195F8459B41(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_FBDB8D5D426A9A9B6F233195F8459B41");

	ABP_Base_HordeController_C_OnSuccess_FBDB8D5D426A9A9B6F233195F8459B41_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D2016EFD451198A315F3C2958119677B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_D2016EFD451198A315F3C2958119677B(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D2016EFD451198A315F3C2958119677B");

	ABP_Base_HordeController_C_OnFailure_D2016EFD451198A315F3C2958119677B_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D2016EFD451198A315F3C2958119677B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_D2016EFD451198A315F3C2958119677B(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D2016EFD451198A315F3C2958119677B");

	ABP_Base_HordeController_C_OnSuccess_D2016EFD451198A315F3C2958119677B_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_2EFCB3DF41421476A9BC8DAC83D1364E
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_2EFCB3DF41421476A9BC8DAC83D1364E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_2EFCB3DF41421476A9BC8DAC83D1364E");

	ABP_Base_HordeController_C_OnFailure_2EFCB3DF41421476A9BC8DAC83D1364E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_2EFCB3DF41421476A9BC8DAC83D1364E
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_2EFCB3DF41421476A9BC8DAC83D1364E()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_2EFCB3DF41421476A9BC8DAC83D1364E");

	ABP_Base_HordeController_C_OnSuccess_2EFCB3DF41421476A9BC8DAC83D1364E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_147FEC9A42B98B621EBB4789D511AC5E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_147FEC9A42B98B621EBB4789D511AC5E(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_147FEC9A42B98B621EBB4789D511AC5E");

	ABP_Base_HordeController_C_OnFailure_147FEC9A42B98B621EBB4789D511AC5E_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_147FEC9A42B98B621EBB4789D511AC5E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_147FEC9A42B98B621EBB4789D511AC5E(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_147FEC9A42B98B621EBB4789D511AC5E");

	ABP_Base_HordeController_C_OnSuccess_147FEC9A42B98B621EBB4789D511AC5E_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_656384744E11F1BCFCA778A39BE57812
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_656384744E11F1BCFCA778A39BE57812()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_656384744E11F1BCFCA778A39BE57812");

	ABP_Base_HordeController_C_OnFailure_656384744E11F1BCFCA778A39BE57812_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_656384744E11F1BCFCA778A39BE57812
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_656384744E11F1BCFCA778A39BE57812()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_656384744E11F1BCFCA778A39BE57812");

	ABP_Base_HordeController_C_OnSuccess_656384744E11F1BCFCA778A39BE57812_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_2ED92AE541331FCB24E8AD9AE9772986
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_2ED92AE541331FCB24E8AD9AE9772986()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_2ED92AE541331FCB24E8AD9AE9772986");

	ABP_Base_HordeController_C_OnFailure_2ED92AE541331FCB24E8AD9AE9772986_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_2ED92AE541331FCB24E8AD9AE9772986
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_2ED92AE541331FCB24E8AD9AE9772986()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_2ED92AE541331FCB24E8AD9AE9772986");

	ABP_Base_HordeController_C_OnSuccess_2ED92AE541331FCB24E8AD9AE9772986_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_F9C019C04C25E501152B149FE535DD2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_F9C019C04C25E501152B149FE535DD2E(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_F9C019C04C25E501152B149FE535DD2E");

	ABP_Base_HordeController_C_OnFailure_F9C019C04C25E501152B149FE535DD2E_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_F9C019C04C25E501152B149FE535DD2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_F9C019C04C25E501152B149FE535DD2E(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_F9C019C04C25E501152B149FE535DD2E");

	ABP_Base_HordeController_C_OnSuccess_F9C019C04C25E501152B149FE535DD2E_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CA85B1EA441E41DC2CC7DE8512C84AA9
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_CA85B1EA441E41DC2CC7DE8512C84AA9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CA85B1EA441E41DC2CC7DE8512C84AA9");

	ABP_Base_HordeController_C_OnFailure_CA85B1EA441E41DC2CC7DE8512C84AA9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CA85B1EA441E41DC2CC7DE8512C84AA9
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_CA85B1EA441E41DC2CC7DE8512C84AA9()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CA85B1EA441E41DC2CC7DE8512C84AA9");

	ABP_Base_HordeController_C_OnSuccess_CA85B1EA441E41DC2CC7DE8512C84AA9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D94186104AECA4A526C4CB927F5758A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_D94186104AECA4A526C4CB927F5758A1(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D94186104AECA4A526C4CB927F5758A1");

	ABP_Base_HordeController_C_OnFailure_D94186104AECA4A526C4CB927F5758A1_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D94186104AECA4A526C4CB927F5758A1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_D94186104AECA4A526C4CB927F5758A1(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D94186104AECA4A526C4CB927F5758A1");

	ABP_Base_HordeController_C_OnSuccess_D94186104AECA4A526C4CB927F5758A1_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_0DEAC92448F59F5F001D0C9DE8189FA0
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_0DEAC92448F59F5F001D0C9DE8189FA0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_0DEAC92448F59F5F001D0C9DE8189FA0");

	ABP_Base_HordeController_C_OnFailure_0DEAC92448F59F5F001D0C9DE8189FA0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_0DEAC92448F59F5F001D0C9DE8189FA0
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_0DEAC92448F59F5F001D0C9DE8189FA0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_0DEAC92448F59F5F001D0C9DE8189FA0");

	ABP_Base_HordeController_C_OnSuccess_0DEAC92448F59F5F001D0C9DE8189FA0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_EA0700CB42A2155100B632AD43A3C16B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_EA0700CB42A2155100B632AD43A3C16B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_EA0700CB42A2155100B632AD43A3C16B");

	ABP_Base_HordeController_C_OnFailure_EA0700CB42A2155100B632AD43A3C16B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_EA0700CB42A2155100B632AD43A3C16B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_EA0700CB42A2155100B632AD43A3C16B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_EA0700CB42A2155100B632AD43A3C16B");

	ABP_Base_HordeController_C_OnSuccess_EA0700CB42A2155100B632AD43A3C16B_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_CheatCodeButton_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_CheatCodeButton_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_CheatCodeButton_K2Node_InputActionEvent_3");

	ABP_Base_HordeController_C_InpActEvt_CheatCodeButton_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_F1_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_F1_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_F1_K2Node_InputKeyEvent_5");

	ABP_Base_HordeController_C_InpActEvt_F1_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_738E0854428402E0C69A069EECB54E26
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_738E0854428402E0C69A069EECB54E26()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_738E0854428402E0C69A069EECB54E26");

	ABP_Base_HordeController_C_OnFailure_738E0854428402E0C69A069EECB54E26_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_738E0854428402E0C69A069EECB54E26
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_738E0854428402E0C69A069EECB54E26()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_738E0854428402E0C69A069EECB54E26");

	ABP_Base_HordeController_C_OnSuccess_738E0854428402E0C69A069EECB54E26_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_BA5EE531479BDEF89848E59E207E1AE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_BA5EE531479BDEF89848E59E207E1AE6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_BA5EE531479BDEF89848E59E207E1AE6");

	ABP_Base_HordeController_C_OnFailure_BA5EE531479BDEF89848E59E207E1AE6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_BA5EE531479BDEF89848E59E207E1AE6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_BA5EE531479BDEF89848E59E207E1AE6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_BA5EE531479BDEF89848E59E207E1AE6");

	ABP_Base_HordeController_C_OnSuccess_BA5EE531479BDEF89848E59E207E1AE6_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_A81AA0F943B222D85C32619FE4AAAE0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_A81AA0F943B222D85C32619FE4AAAE0A(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_A81AA0F943B222D85C32619FE4AAAE0A");

	ABP_Base_HordeController_C_OnFailure_A81AA0F943B222D85C32619FE4AAAE0A_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_A81AA0F943B222D85C32619FE4AAAE0A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_A81AA0F943B222D85C32619FE4AAAE0A(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_A81AA0F943B222D85C32619FE4AAAE0A");

	ABP_Base_HordeController_C_OnSuccess_A81AA0F943B222D85C32619FE4AAAE0A_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_52BF4CC945EBA06DD5EB93B396121BCF
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_52BF4CC945EBA06DD5EB93B396121BCF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_52BF4CC945EBA06DD5EB93B396121BCF");

	ABP_Base_HordeController_C_OnFailure_52BF4CC945EBA06DD5EB93B396121BCF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_52BF4CC945EBA06DD5EB93B396121BCF
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_52BF4CC945EBA06DD5EB93B396121BCF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_52BF4CC945EBA06DD5EB93B396121BCF");

	ABP_Base_HordeController_C_OnSuccess_52BF4CC945EBA06DD5EB93B396121BCF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_B795C42244B186F8AA3FB6BEAB82D252
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_B795C42244B186F8AA3FB6BEAB82D252()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_B795C42244B186F8AA3FB6BEAB82D252");

	ABP_Base_HordeController_C_OnFailure_B795C42244B186F8AA3FB6BEAB82D252_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_B795C42244B186F8AA3FB6BEAB82D252
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_B795C42244B186F8AA3FB6BEAB82D252()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_B795C42244B186F8AA3FB6BEAB82D252");

	ABP_Base_HordeController_C_OnSuccess_B795C42244B186F8AA3FB6BEAB82D252_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_F2_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_F2_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_F2_K2Node_InputKeyEvent_4");

	ABP_Base_HordeController_C_InpActEvt_F2_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_+_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt___K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_+_K2Node_InputKeyEvent_3");

	ABP_Base_HordeController_C_InpActEvt___K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.I_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::I_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.I_2");

	ABP_Base_HordeController_C_I_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CC39A57A48DA597BC4A4E498DD4F6DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_CC39A57A48DA597BC4A4E498DD4F6DA5(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CC39A57A48DA597BC4A4E498DD4F6DA5");

	ABP_Base_HordeController_C_OnFailure_CC39A57A48DA597BC4A4E498DD4F6DA5_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CC39A57A48DA597BC4A4E498DD4F6DA5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_CC39A57A48DA597BC4A4E498DD4F6DA5(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CC39A57A48DA597BC4A4E498DD4F6DA5");

	ABP_Base_HordeController_C_OnSuccess_CC39A57A48DA597BC4A4E498DD4F6DA5_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_999011AF4E0C6AA6D6C01EBC10BFB0D1
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_999011AF4E0C6AA6D6C01EBC10BFB0D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_999011AF4E0C6AA6D6C01EBC10BFB0D1");

	ABP_Base_HordeController_C_OnFailure_999011AF4E0C6AA6D6C01EBC10BFB0D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_999011AF4E0C6AA6D6C01EBC10BFB0D1
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_999011AF4E0C6AA6D6C01EBC10BFB0D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_999011AF4E0C6AA6D6C01EBC10BFB0D1");

	ABP_Base_HordeController_C_OnSuccess_999011AF4E0C6AA6D6C01EBC10BFB0D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_53C3F0864E1162D1DEA7A08D1D3F9FBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_53C3F0864E1162D1DEA7A08D1D3F9FBC(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_53C3F0864E1162D1DEA7A08D1D3F9FBC");

	ABP_Base_HordeController_C_OnFailure_53C3F0864E1162D1DEA7A08D1D3F9FBC_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_53C3F0864E1162D1DEA7A08D1D3F9FBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_53C3F0864E1162D1DEA7A08D1D3F9FBC(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_53C3F0864E1162D1DEA7A08D1D3F9FBC");

	ABP_Base_HordeController_C_OnSuccess_53C3F0864E1162D1DEA7A08D1D3F9FBC_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_C5FD93C2411AB069FD4B5D8AFFD61C71
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_C5FD93C2411AB069FD4B5D8AFFD61C71()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_C5FD93C2411AB069FD4B5D8AFFD61C71");

	ABP_Base_HordeController_C_OnFailure_C5FD93C2411AB069FD4B5D8AFFD61C71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_C5FD93C2411AB069FD4B5D8AFFD61C71
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_C5FD93C2411AB069FD4B5D8AFFD61C71()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_C5FD93C2411AB069FD4B5D8AFFD61C71");

	ABP_Base_HordeController_C_OnSuccess_C5FD93C2411AB069FD4B5D8AFFD61C71_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_3BA4B7634070E5A6D84076A09B79D8BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_3BA4B7634070E5A6D84076A09B79D8BD(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_3BA4B7634070E5A6D84076A09B79D8BD");

	ABP_Base_HordeController_C_OnFailure_3BA4B7634070E5A6D84076A09B79D8BD_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_3BA4B7634070E5A6D84076A09B79D8BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_3BA4B7634070E5A6D84076A09B79D8BD(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_3BA4B7634070E5A6D84076A09B79D8BD");

	ABP_Base_HordeController_C_OnSuccess_3BA4B7634070E5A6D84076A09B79D8BD_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_65BAF9DE47D04C0C448FECA21ECF73DA
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_65BAF9DE47D04C0C448FECA21ECF73DA()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_65BAF9DE47D04C0C448FECA21ECF73DA");

	ABP_Base_HordeController_C_OnFailure_65BAF9DE47D04C0C448FECA21ECF73DA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_65BAF9DE47D04C0C448FECA21ECF73DA
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_65BAF9DE47D04C0C448FECA21ECF73DA()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_65BAF9DE47D04C0C448FECA21ECF73DA");

	ABP_Base_HordeController_C_OnSuccess_65BAF9DE47D04C0C448FECA21ECF73DA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_BECF886B4B911D53409BB8AC81D59A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_BECF886B4B911D53409BB8AC81D59A7A(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_BECF886B4B911D53409BB8AC81D59A7A");

	ABP_Base_HordeController_C_OnFailure_BECF886B4B911D53409BB8AC81D59A7A_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_BECF886B4B911D53409BB8AC81D59A7A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_BECF886B4B911D53409BB8AC81D59A7A(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_BECF886B4B911D53409BB8AC81D59A7A");

	ABP_Base_HordeController_C_OnSuccess_BECF886B4B911D53409BB8AC81D59A7A_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_DB7DF21B4E972A21E1A196BC2E7E46DF
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_DB7DF21B4E972A21E1A196BC2E7E46DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_DB7DF21B4E972A21E1A196BC2E7E46DF");

	ABP_Base_HordeController_C_OnFailure_DB7DF21B4E972A21E1A196BC2E7E46DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_DB7DF21B4E972A21E1A196BC2E7E46DF
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_DB7DF21B4E972A21E1A196BC2E7E46DF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_DB7DF21B4E972A21E1A196BC2E7E46DF");

	ABP_Base_HordeController_C_OnSuccess_DB7DF21B4E972A21E1A196BC2E7E46DF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_2");

	ABP_Base_HordeController_C_InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_1");

	ABP_Base_HordeController_C_InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Q_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::InpActEvt_Q_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InpActEvt_Q_K2Node_InputKeyEvent_1");

	ABP_Base_HordeController_C_InpActEvt_Q_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CECE7ACF4D8785E45DEA1086D021A6B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_CECE7ACF4D8785E45DEA1086D021A6B9(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_CECE7ACF4D8785E45DEA1086D021A6B9");

	ABP_Base_HordeController_C_OnFailure_CECE7ACF4D8785E45DEA1086D021A6B9_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CECE7ACF4D8785E45DEA1086D021A6B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_CECE7ACF4D8785E45DEA1086D021A6B9(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_CECE7ACF4D8785E45DEA1086D021A6B9");

	ABP_Base_HordeController_C_OnSuccess_CECE7ACF4D8785E45DEA1086D021A6B9_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_AC89E3C44543AA5639EC7BA556EA7B8C
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_AC89E3C44543AA5639EC7BA556EA7B8C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_AC89E3C44543AA5639EC7BA556EA7B8C");

	ABP_Base_HordeController_C_OnFailure_AC89E3C44543AA5639EC7BA556EA7B8C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_AC89E3C44543AA5639EC7BA556EA7B8C
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_AC89E3C44543AA5639EC7BA556EA7B8C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_AC89E3C44543AA5639EC7BA556EA7B8C");

	ABP_Base_HordeController_C_OnSuccess_AC89E3C44543AA5639EC7BA556EA7B8C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_6BCFF46A459CAEBDD86A548E1DA85919
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_6BCFF46A459CAEBDD86A548E1DA85919(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_6BCFF46A459CAEBDD86A548E1DA85919");

	ABP_Base_HordeController_C_OnFailure_6BCFF46A459CAEBDD86A548E1DA85919_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_6BCFF46A459CAEBDD86A548E1DA85919
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_6BCFF46A459CAEBDD86A548E1DA85919(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_6BCFF46A459CAEBDD86A548E1DA85919");

	ABP_Base_HordeController_C_OnSuccess_6BCFF46A459CAEBDD86A548E1DA85919_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D930CC084430BFA77831D08622A0C6D1
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_D930CC084430BFA77831D08622A0C6D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D930CC084430BFA77831D08622A0C6D1");

	ABP_Base_HordeController_C_OnFailure_D930CC084430BFA77831D08622A0C6D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D930CC084430BFA77831D08622A0C6D1
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_D930CC084430BFA77831D08622A0C6D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D930CC084430BFA77831D08622A0C6D1");

	ABP_Base_HordeController_C_OnSuccess_D930CC084430BFA77831D08622A0C6D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_99BA64074DC1018481C2469B5737182F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_99BA64074DC1018481C2469B5737182F(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_99BA64074DC1018481C2469B5737182F");

	ABP_Base_HordeController_C_OnFailure_99BA64074DC1018481C2469B5737182F_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_99BA64074DC1018481C2469B5737182F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_99BA64074DC1018481C2469B5737182F(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_99BA64074DC1018481C2469B5737182F");

	ABP_Base_HordeController_C_OnSuccess_99BA64074DC1018481C2469B5737182F_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D18FC41A4B3A2A5B43160D90C77A1AA4
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_D18FC41A4B3A2A5B43160D90C77A1AA4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_D18FC41A4B3A2A5B43160D90C77A1AA4");

	ABP_Base_HordeController_C_OnFailure_D18FC41A4B3A2A5B43160D90C77A1AA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D18FC41A4B3A2A5B43160D90C77A1AA4
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_D18FC41A4B3A2A5B43160D90C77A1AA4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_D18FC41A4B3A2A5B43160D90C77A1AA4");

	ABP_Base_HordeController_C_OnSuccess_D18FC41A4B3A2A5B43160D90C77A1AA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_1002C6D14FA3E0DD8E8B31872C712AC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnFailure_1002C6D14FA3E0DD8E8B31872C712AC7(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_1002C6D14FA3E0DD8E8B31872C712AC7");

	ABP_Base_HordeController_C_OnFailure_1002C6D14FA3E0DD8E8B31872C712AC7_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_1002C6D14FA3E0DD8E8B31872C712AC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LeaderboardValue               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OnSuccess_1002C6D14FA3E0DD8E8B31872C712AC7(int* LeaderboardValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_1002C6D14FA3E0DD8E8B31872C712AC7");

	ABP_Base_HordeController_C_OnSuccess_1002C6D14FA3E0DD8E8B31872C712AC7_Params params;
	params.LeaderboardValue = LeaderboardValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_E9A4D3824C6F975006EDCEBE8DC30D86
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnFailure_E9A4D3824C6F975006EDCEBE8DC30D86()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnFailure_E9A4D3824C6F975006EDCEBE8DC30D86");

	ABP_Base_HordeController_C_OnFailure_E9A4D3824C6F975006EDCEBE8DC30D86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_E9A4D3824C6F975006EDCEBE8DC30D86
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::OnSuccess_E9A4D3824C6F975006EDCEBE8DC30D86()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OnSuccess_E9A4D3824C6F975006EDCEBE8DC30D86");

	ABP_Base_HordeController_C_OnSuccess_E9A4D3824C6F975006EDCEBE8DC30D86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.ControllerCurrentObjective
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ObjectiveNameText              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  ObjectiveMittenText            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  ObjectiveText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowObjective1Image_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowObjective2Image_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::ControllerCurrentObjective(struct FText* ObjectiveNameText, struct FText* ObjectiveMittenText, struct FText* ObjectiveText, bool* ShowObjective1Image_, bool* ShowObjective2Image_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ControllerCurrentObjective");

	ABP_Base_HordeController_C_ControllerCurrentObjective_Params params;
	params.ObjectiveNameText = ObjectiveNameText;
	params.ObjectiveMittenText = ObjectiveMittenText;
	params.ObjectiveText = ObjectiveText;
	params.ShowObjective1Image_ = ShowObjective1Image_;
	params.ShowObjective2Image_ = ShowObjective2Image_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.HordeIntPCEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           HordeIntPC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ObjectiveMode_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::HordeIntPCEvent(int* HordeIntPC, bool* ObjectiveMode_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.HordeIntPCEvent");

	ABP_Base_HordeController_C_HordeIntPCEvent_Params params;
	params.HordeIntPC = HordeIntPC;
	params.ObjectiveMode_ = ObjectiveMode_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AssignInventoryData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AInventoryData_C**       InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AssignInventoryData(class AInventoryData_C** InventoryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AssignInventoryData");

	ABP_Base_HordeController_C_AssignInventoryData_Params params;
	params.InventoryData = InventoryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.LevelUp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::LevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.LevelUp");

	ABP_Base_HordeController_C_LevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XpToAdd                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddXP(float* XpToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddXP");

	ABP_Base_HordeController_C_AddXP_Params params;
	params.XpToAdd = XpToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddOnlySkillXp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddOnlySkillXp");

	ABP_Base_HordeController_C_AddOnlySkillXp_Params params;
	params.Skill = Skill;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SkillMaxReached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_SkillTree>*      SkillReached                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SkillMaxReached");

	ABP_Base_HordeController_C_SkillMaxReached_Params params;
	params.SkillReached = SkillReached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Base_HordeController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ReceiveBeginPlay");

	ABP_Base_HordeController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveWidgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::RemoveWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveWidgets");

	ABP_Base_HordeController_C_RemoveWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.ResumeTheGame
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ResumeTheGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ResumeTheGame");

	ABP_Base_HordeController_C_ResumeTheGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.WaveAmountText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WaveAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::WaveAmountText(int* WaveAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.WaveAmountText");

	ABP_Base_HordeController_C_WaveAmountText_Params params;
	params.WaveAmount = WaveAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SequencerPCEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::SequencerPCEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SequencerPCEvent");

	ABP_Base_HordeController_C_SequencerPCEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.MoneyBanktick
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::MoneyBanktick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.MoneyBanktick");

	ABP_Base_HordeController_C_MoneyBanktick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.EnterQuickItem
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::EnterQuickItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EnterQuickItem");

	ABP_Base_HordeController_C_EnterQuickItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.EventClientCalloutAnnouncement
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::EventClientCalloutAnnouncement(class USoundBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EventClientCalloutAnnouncement");

	ABP_Base_HordeController_C_EventClientCalloutAnnouncement_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.EventMultiCalloutAnnouncement
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::EventMultiCalloutAnnouncement(class USoundBase** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EventMultiCalloutAnnouncement");

	ABP_Base_HordeController_C_EventMultiCalloutAnnouncement_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ServerCountDownSound
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ServerCountDownSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ServerCountDownSound");

	ABP_Base_HordeController_C_ServerCountDownSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.EventDifferentCharCallout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CharacterVoice                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FromCharCards_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::EventDifferentCharCallout(int* CharacterVoice, bool* FromCharCards_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EventDifferentCharCallout");

	ABP_Base_HordeController_C_EventDifferentCharCallout_Params params;
	params.CharacterVoice = CharacterVoice;
	params.FromCharCards_ = FromCharCards_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.EventPersonalStatsArray
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::EventPersonalStatsArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EventPersonalStatsArray");

	ABP_Base_HordeController_C_EventPersonalStatsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.MoneyBanktick
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::MoneyBanktick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.MoneyBanktick");

	ABP_Base_HordeController_C_MoneyBanktick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.GameStatEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Death_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::GameStatEvent(bool* Death_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.GameStatEvent");

	ABP_Base_HordeController_C_GameStatEvent_Params params;
	params.Death_ = Death_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleCheatClose
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::PCConsoleCheatClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleCheatClose");

	ABP_Base_HordeController_C_PCConsoleCheatClose_Params params;
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveWidgets
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::RemoveWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveWidgets");

	ABP_Base_HordeController_C_RemoveWidgets_Params params;
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ShowLoadingScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ShowLoadingScreen");

	ABP_Base_HordeController_C_ShowLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.AddVictoryMoney
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddVictoryMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddVictoryMoney");

	ABP_Base_HordeController_C_AddVictoryMoney_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.FriendlyBotsText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FriendlyBots                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::FriendlyBotsText(int* FriendlyBots)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.FriendlyBotsText");

	ABP_Base_HordeController_C_FriendlyBotsText_Params params;
	params.FriendlyBots = FriendlyBots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.DifficultyText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DifficultyInt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::DifficultyText(int* DifficultyInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DifficultyText");

	ABP_Base_HordeController_C_DifficultyText_Params params;
	params.DifficultyInt = DifficultyInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleCheatClose
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::PCConsoleCheatClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleCheatClose");

	ABP_Base_HordeController_C_PCConsoleCheatClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddScoreEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Added_Score                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Headshot_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Base_HordeController_C** Lastshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DamageCauserInt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ZedName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddScoreEvent(int* Added_Score, bool* Headshot_, class ABP_Base_HordeController_C** Lastshot, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddScoreEvent");

	ABP_Base_HordeController_C_AddScoreEvent_Params params;
	params.Added_Score = Added_Score;
	params.Headshot_ = Headshot_;
	params.Lastshot = Lastshot;
	params.DamageCauserInt = DamageCauserInt;
	params.DamageWeapon = DamageWeapon;
	params.ZedName = ZedName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddVictoryMoney
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddVictoryMoney(int* Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddVictoryMoney");

	ABP_Base_HordeController_C_AddVictoryMoney_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.ChangeStartMoney
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::ChangeStartMoney(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ChangeStartMoney");

	ABP_Base_HordeController_C_ChangeStartMoney_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ShowUIEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ShowUIEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ShowUIEvent");

	ABP_Base_HordeController_C_ShowUIEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.AddScoreEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Added_Score                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Headshot_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Base_HordeController_C** Lastshot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DamageCauserInt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ZedName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DoubleKill_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AddScoreEvent(int* Added_Score, bool* Headshot_, class ABP_Base_HordeController_C** Lastshot, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName, bool* DoubleKill_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddScoreEvent");

	ABP_Base_HordeController_C_AddScoreEvent_Params params;
	params.Added_Score = Added_Score;
	params.Headshot_ = Headshot_;
	params.Lastshot = Lastshot;
	params.DamageCauserInt = DamageCauserInt;
	params.DamageWeapon = DamageWeapon;
	params.ZedName = ZedName;
	params.DoubleKill_ = DoubleKill_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.PlayerListEvent
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::PlayerListEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.PlayerListEvent");

	ABP_Base_HordeController_C_PlayerListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.MapVoteEvent
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::MapVoteEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.MapVoteEvent");

	ABP_Base_HordeController_C_MapVoteEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.MapVoteClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::MapVoteClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.MapVoteClient");

	ABP_Base_HordeController_C_MapVoteClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveMoney
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::RemoveMoney(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveMoney");

	ABP_Base_HordeController_C_RemoveMoney_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.GameModeText
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           GameModeInt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::GameModeText(int* GameModeInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.GameModeText");

	ABP_Base_HordeController_C_GameModeText_Params params;
	params.GameModeInt = GameModeInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.HeadTextInfo
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::HeadTextInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.HeadTextInfo");

	ABP_Base_HordeController_C_HeadTextInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddAlivePlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::AddAlivePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddAlivePlayer");

	ABP_Base_HordeController_C_AddAlivePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SpectateEvent
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::SpectateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SpectateEvent");

	ABP_Base_HordeController_C_SpectateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SpectatorModeWhenDead
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Dead_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_Lobby_Main_C**      LobbyRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Base_HordeController_C::SpectatorModeWhenDead(bool* Dead_, class UWBP_Lobby_Main_C** LobbyRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SpectatorModeWhenDead");

	ABP_Base_HordeController_C_SpectatorModeWhenDead_Params params;
	params.Dead_ = Dead_;
	params.LobbyRef = LobbyRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.UpdatePlayerInfoFrontFromLobbySpectate
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::UpdatePlayerInfoFrontFromLobbySpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.UpdatePlayerInfoFrontFromLobbySpectate");

	ABP_Base_HordeController_C_UpdatePlayerInfoFrontFromLobbySpectate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.DestroyBP_PawnEtc
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::DestroyBP_PawnEtc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DestroyBP_PawnEtc");

	ABP_Base_HordeController_C_DestroyBP_PawnEtc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveMoney
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::RemoveMoney(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.RemoveMoney");

	ABP_Base_HordeController_C_RemoveMoney_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.ToggleScoreboard
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ToggleScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ToggleScoreboard");

	ABP_Base_HordeController_C_ToggleScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Close Lobby
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::Close_Lobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Close Lobby");

	ABP_Base_HordeController_C_Close_Lobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.DestroyBP_PawnEtc
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::DestroyBP_PawnEtc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DestroyBP_PawnEtc");

	ABP_Base_HordeController_C_DestroyBP_PawnEtc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.AssignPlayer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PrestigeLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClassLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          CharacterMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AssignPlayer(int* PrestigeLevel, struct FName* CharacterName, struct FName* PlayerName, int* ClassLevel, class USkeletalMesh** CharacterMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AssignPlayer");

	ABP_Base_HordeController_C_AssignPlayer_Params params;
	params.PrestigeLevel = PrestigeLevel;
	params.CharacterName = CharacterName;
	params.PlayerName = PlayerName;
	params.ClassLevel = ClassLevel;
	params.CharacterMesh = CharacterMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AssignSelectedCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CharacterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh**          CharacterMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PrestigeLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClassLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::AssignSelectedCharacter(int* CharacterID, struct FName* CharacterName, class USkeletalMesh** CharacterMesh, int* PrestigeLevel, int* ClassLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AssignSelectedCharacter");

	ABP_Base_HordeController_C_AssignSelectedCharacter_Params params;
	params.CharacterID = CharacterID;
	params.CharacterName = CharacterName;
	params.CharacterMesh = CharacterMesh;
	params.PrestigeLevel = PrestigeLevel;
	params.ClassLevel = ClassLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Kicked
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::Kicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Kicked");

	ABP_Base_HordeController_C_Kicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ReceiveEndPlay");

	ABP_Base_HordeController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateNumberOfPlayers
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentPlayers                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::UpdateNumberOfPlayers(int* CurrentPlayers, int* MaxPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateNumberOfPlayers");

	ABP_Base_HordeController_C_UpdateNumberOfPlayers_Params params;
	params.CurrentPlayers = CurrentPlayers;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateLobbySettings
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Map_Image                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MapTime                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  LevelDescription               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::UpdateLobbySettings(class UTexture2D** Map_Image, struct FText* Map_Name, struct FText* MapTime, struct FText* LevelDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateLobbySettings");

	ABP_Base_HordeController_C_UpdateLobbySettings_Params params;
	params.Map_Image = Map_Image;
	params.Map_Name = Map_Name;
	params.MapTime = MapTime;
	params.LevelDescription = LevelDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.AddPlayerInfo
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Player_Info1>* ConnectedPlayerInfo            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APlayerState*>*   PlayerstateArray               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Base_HordeController_C::AddPlayerInfo(TArray<struct FS_Player_Info1>* ConnectedPlayerInfo, TArray<class APlayerState*>* PlayerstateArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.AddPlayerInfo");

	ABP_Base_HordeController_C_AddPlayerInfo_Params params;
	params.ConnectedPlayerInfo = ConnectedPlayerInfo;
	params.PlayerstateArray = PlayerstateArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.CameraShot
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::CameraShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.CameraShot");

	ABP_Base_HordeController_C_CameraShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SlidingScoreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::SlidingScoreEvent(int* score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SlidingScoreEvent");

	ABP_Base_HordeController_C_SlidingScoreEvent_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.SetupLobbyMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Server_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           GameModeInt                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DifficultyInt                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           FriendlyBots                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                ServerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  MapName                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Base_HordeController_C::SetupLobbyMenu(struct FText* Server_Name, int* GameModeInt, int* WaveAmount, int* DifficultyInt, int* FriendlyBots, struct FString* ServerID, struct FText* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SetupLobbyMenu");

	ABP_Base_HordeController_C_SetupLobbyMenu_Params params;
	params.Server_Name = Server_Name;
	params.GameModeInt = GameModeInt;
	params.WaveAmount = WaveAmount;
	params.DifficultyInt = DifficultyInt;
	params.FriendlyBots = FriendlyBots;
	params.ServerID = ServerID;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.Server_Lobby_CallUpdate
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Player_Info1*        Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Changed_Status                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::Server_Lobby_CallUpdate(struct FS_Player_Info1* Player_Info, bool* Changed_Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Server_Lobby_CallUpdate");

	ABP_Base_HordeController_C_Server_Lobby_CallUpdate_Params params;
	params.Player_Info = Player_Info;
	params.Changed_Status = Changed_Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.CameraShot
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::CameraShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.CameraShot");

	ABP_Base_HordeController_C_CameraShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.EnterChat
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::EnterChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.EnterChat");

	ABP_Base_HordeController_C_EnterChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateChat
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::UpdateChat(struct FText* Sender, struct FText* Message, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.UpdateChat");

	ABP_Base_HordeController_C_UpdateChat_Params params;
	params.Sender = Sender;
	params.Message = Message;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.SlidingScoreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::SlidingScoreEvent(int* score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SlidingScoreEvent");

	ABP_Base_HordeController_C_SlidingScoreEvent_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.GetChatMessage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TextToSend                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ServerMessage_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::GetChatMessage(struct FText* TextToSend, bool* ServerMessage_, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.GetChatMessage");

	ABP_Base_HordeController_C_GetChatMessage_Params params;
	params.TextToSend = TextToSend;
	params.ServerMessage_ = ServerMessage_;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::PCConsoleOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleOpen");

	ABP_Base_HordeController_C_PCConsoleOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.Add Money
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::Add_Money(int* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Add Money");

	ABP_Base_HordeController_C_Add_Money_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
=======
// Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleOpen
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::PCConsoleOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.PCConsoleOpen");

	ABP_Base_HordeController_C_PCConsoleOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.CustomEvent_1");

	ABP_Base_HordeController_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.OpenRingMenuEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Open_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::OpenRingMenuEvent(bool* Open_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.OpenRingMenuEvent");

	ABP_Base_HordeController_C_OpenRingMenuEvent_Params params;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SomeoneIsTypingMessage
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StoppedTyping_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::SomeoneIsTypingMessage(int* PlayerIndex, bool* StoppedTyping_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SomeoneIsTypingMessage");

	ABP_Base_HordeController_C_SomeoneIsTypingMessage_Params params;
	params.PlayerIndex = PlayerIndex;
	params.StoppedTyping_ = StoppedTyping_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SomeoneIsTypingClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Sender                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          StoppedTyping_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::SomeoneIsTypingClient(struct FText* Sender, int* PlayerIndex, bool* StoppedTyping_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SomeoneIsTypingClient");

	ABP_Base_HordeController_C_SomeoneIsTypingClient_Params params;
	params.Sender = Sender;
	params.PlayerIndex = PlayerIndex;
	params.StoppedTyping_ = StoppedTyping_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


<<<<<<< HEAD
// Function BP_Base_HordeController.BP_Base_HordeController_C.DeflectChallengeEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::DeflectChallengeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DeflectChallengeEvent");

	ABP_Base_HordeController_C_DeflectChallengeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ParryChallengeEvent
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ParryChallengeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ParryChallengeEvent");

	ABP_Base_HordeController_C_ParryChallengeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SnowballLauncherKillEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::SnowballLauncherKillEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SnowballLauncherKillEvent");

	ABP_Base_HordeController_C_SnowballLauncherKillEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ChristmassTreeStarKillEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ChristmassTreeStarKillEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ChristmassTreeStarKillEvent");

	ABP_Base_HordeController_C_ChristmassTreeStarKillEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ZedCabOOmerKillEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::ZedCabOOmerKillEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ZedCabOOmerKillEvent");

	ABP_Base_HordeController_C_ZedCabOOmerKillEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


=======
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
// Function BP_Base_HordeController.BP_Base_HordeController_C.Add3HealthPoints
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::Add3HealthPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.Add3HealthPoints");

	ABP_Base_HordeController_C_Add3HealthPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.InvinciblePerk
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::InvinciblePerk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.InvinciblePerk");

	ABP_Base_HordeController_C_InvinciblePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.SpawnAmmoBox
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Base_HordeController_C::SpawnAmmoBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.SpawnAmmoBox");

	ABP_Base_HordeController_C_SpawnAmmoBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.DoctorsArcRifleAddPoints
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           HealthPoints                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::DoctorsArcRifleAddPoints(int* HealthPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.DoctorsArcRifleAddPoints");

	ABP_Base_HordeController_C_DoctorsArcRifleAddPoints_Params params;
	params.HealthPoints = HealthPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_HordeController.BP_Base_HordeController_C.ExecuteUbergraph_BP_Base_HordeController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_HordeController_C::ExecuteUbergraph_BP_Base_HordeController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_HordeController.BP_Base_HordeController_C.ExecuteUbergraph_BP_Base_HordeController");

	ABP_Base_HordeController_C_ExecuteUbergraph_BP_Base_HordeController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

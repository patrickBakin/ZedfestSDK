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

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Lobby_Main_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnPreviewKeyDown");

	UWBP_Lobby_Main_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.EnableReadyStartButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Lobby_Main_C::EnableReadyStartButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.EnableReadyStartButton");

	UWBP_Lobby_Main_C_EnableReadyStartButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFailure_B430D08F4445047204EDCB857B2F7187
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::OnFailure_B430D08F4445047204EDCB857B2F7187()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFailure_B430D08F4445047204EDCB857B2F7187");

	UWBP_Lobby_Main_C_OnFailure_B430D08F4445047204EDCB857B2F7187_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnSuccess_B430D08F4445047204EDCB857B2F7187
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::OnSuccess_B430D08F4445047204EDCB857B2F7187()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnSuccess_B430D08F4445047204EDCB857B2F7187");

	UWBP_Lobby_Main_C_OnSuccess_B430D08F4445047204EDCB857B2F7187_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ClearPlayerList
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::ClearPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.ClearPlayerList");

	UWBP_Lobby_Main_C_ClearPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdatePlayerWindow
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_Player_Info1>* Player_Info                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class APlayerState*>*   PlayerState                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_Lobby_Main_C::UpdatePlayerWindow(TArray<struct FS_Player_Info1>* Player_Info, TArray<class APlayerState*>* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdatePlayerWindow");

	UWBP_Lobby_Main_C_UpdatePlayerWindow_Params params;
	params.Player_Info = Player_Info;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Lobby_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.Construct");

	UWBP_Lobby_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdateStatus
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::UpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdateStatus");

	UWBP_Lobby_Main_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.exittomainmenu
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::exittomainmenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.exittomainmenu");

	UWBP_Lobby_Main_C_exittomainmenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.Exit
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.Exit");

	UWBP_Lobby_Main_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.cancelExit
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::cancelExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.cancelExit");

	UWBP_Lobby_Main_C_cancelExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_1");

	UWBP_Lobby_Main_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Lobby_Main_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFocusLost");

	UWBP_Lobby_Main_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ReFocus
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::ReFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.ReFocus");

	UWBP_Lobby_Main_C_ReFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnTabChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TabPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Lobby_Main_C::OnTabChange(class UWidget** TabPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnTabChange");

	UWBP_Lobby_Main_C_OnTabChange_Params params;
	params.TabPanel = TabPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Lobby_Main_C::CustomEvent_3(bool* CanFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_3");

	UWBP_Lobby_Main_C_CustomEvent_3_Params params;
	params.CanFocus = CanFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_2");

	UWBP_Lobby_Main_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OverviewClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::OverviewClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.OverviewClicked");

	UWBP_Lobby_Main_C_OverviewClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomizationClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::CustomizationClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomizationClicked");

	UWBP_Lobby_Main_C_CustomizationClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.SettingsClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::SettingsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.SettingsClicked");

	UWBP_Lobby_Main_C_SettingsClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LeaderboardClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::LeaderboardClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.LeaderboardClicked");

	UWBP_Lobby_Main_C_LeaderboardClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.EventLobbyInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           EmptyRowRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Lobby_Main_C::EventLobbyInvite(int* EmptyRowRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.EventLobbyInvite");

	UWBP_Lobby_Main_C_EventLobbyInvite_Params params;
	params.EmptyRowRef = EmptyRowRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ChangeClassInLobbyFromGameInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           IntSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ChangeClass_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Lobby_Main_C::ChangeClassInLobbyFromGameInstance(int* IntSlot, bool* ChangeClass_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.ChangeClassInLobbyFromGameInstance");

	UWBP_Lobby_Main_C_ChangeClassInLobbyFromGameInstance_Params params;
	params.IntSlot = IntSlot;
	params.ChangeClass_ = ChangeClass_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__Endless_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__Endless_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMenuTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_Lobby_Main_C::LobbyMenuTabClicked(struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMenuTabClicked");

	UWBP_Lobby_Main_C_LobbyMenuTabClicked_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMapButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  LevelRawName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Lobby_Main_C::LobbyMapButtonClicked(struct FName* LevelRawName, struct FText* LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMapButtonClicked");

	UWBP_Lobby_Main_C_LobbyMapButtonClicked_Params params;
	params.LevelRawName = LevelRawName;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.RemoveSpectateScreen
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::RemoveSpectateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.RemoveSpectateScreen");

	UWBP_Lobby_Main_C_RemoveSpectateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.SpawnInventoryInLobby
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::SpawnInventoryInLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.SpawnInventoryInLobby");

	UWBP_Lobby_Main_C_SpawnInventoryInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Kamikaze+Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_Lobby_Main_C::BndEvt__Kamikaze_Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Kamikaze+Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UWBP_Lobby_Main_C_BndEvt__Kamikaze_Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UWBP_Lobby_Main_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_4");

	UWBP_Lobby_Main_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ExecuteUbergraph_WBP_Lobby_Main
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Lobby_Main_C::ExecuteUbergraph_WBP_Lobby_Main(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Lobby_Main.WBP_Lobby_Main_C.ExecuteUbergraph_WBP_Lobby_Main");

	UWBP_Lobby_Main_C_ExecuteUbergraph_WBP_Lobby_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

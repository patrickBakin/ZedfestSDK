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

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnPreviewKeyDown
struct UWBP_Lobby_Main_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.EnableReadyStartButton
struct UWBP_Lobby_Main_C_EnableReadyStartButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFailure_B430D08F4445047204EDCB857B2F7187
struct UWBP_Lobby_Main_C_OnFailure_B430D08F4445047204EDCB857B2F7187_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnSuccess_B430D08F4445047204EDCB857B2F7187
struct UWBP_Lobby_Main_C_OnSuccess_B430D08F4445047204EDCB857B2F7187_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ClearPlayerList
struct UWBP_Lobby_Main_C_ClearPlayerList_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdatePlayerWindow
struct UWBP_Lobby_Main_C_UpdatePlayerWindow_Params
{
	TArray<struct FS_Player_Info1>*                    Player_Info;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APlayerState*>*                       PlayerState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.Construct
struct UWBP_Lobby_Main_C_Construct_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.UpdateStatus
struct UWBP_Lobby_Main_C_UpdateStatus_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotplusButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__BotminusButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.exittomainmenu
struct UWBP_Lobby_Main_C_exittomainmenu_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.Exit
struct UWBP_Lobby_Main_C_Exit_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.cancelExit
struct UWBP_Lobby_Main_C_cancelExit_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_1
struct UWBP_Lobby_Main_C_CustomEvent_1_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnFocusLost
struct UWBP_Lobby_Main_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ReFocus
struct UWBP_Lobby_Main_C_ReFocus_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OnTabChange
struct UWBP_Lobby_Main_C_OnTabChange_Params
{
	class UWidget**                                    TabPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_3
struct UWBP_Lobby_Main_C_CustomEvent_3_Params
{
	bool*                                              CanFocus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_2
struct UWBP_Lobby_Main_C_CustomEvent_2_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.OverviewClicked
struct UWBP_Lobby_Main_C_OverviewClicked_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomizationClicked
struct UWBP_Lobby_Main_C_CustomizationClicked_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.SettingsClicked
struct UWBP_Lobby_Main_C_SettingsClicked_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__NormalButtonn_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__HardmodeButtonn_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__ChangeMapButto_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__ChangeDiffButton_K2Node_ComponentBoundEvent_49_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__LengthButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__KickPlayersButtonn_K2Node_ComponentBoundEvent_51_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__3WavesButton_K2Node_ComponentBoundEvent_52_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__10WavesButton_K2Node_ComponentBoundEvent_53_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__6WavesButton_K2Node_ComponentBoundEvent_54_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__EndlessButton_K2Node_ComponentBoundEvent_55_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LeaderboardClicked
struct UWBP_Lobby_Main_C_LeaderboardClicked_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.EventLobbyInvite
struct UWBP_Lobby_Main_C_EventLobbyInvite_Params
{
	int*                                               EmptyRowRef;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ChangeClassInLobbyFromGameInstance
struct UWBP_Lobby_Main_C_ChangeClassInLobbyFromGameInstance_Params
{
	int*                                               IntSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeClass_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__HostButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__Button1_C_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__LoadOutMain_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__LoadOutSec_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__LoadOutMelee_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__LoadOutGrenade_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__KamikazeButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Endless+Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__Endless_Button_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__Button1_C_1_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMenuTabClicked
struct UWBP_Lobby_Main_C_LobbyMenuTabClicked_Params
{
	struct FString*                                    String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__ChangeGameModeButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__HordeModeButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__TimeAttackButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.LobbyMapButtonClicked
struct UWBP_Lobby_Main_C_LobbyMapButtonClicked_Params
{
	struct FName*                                      LevelRawName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__CopyServerIDButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__SpectateButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.RemoveSpectateScreen
struct UWBP_Lobby_Main_C_RemoveSpectateScreen_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__InviteCodeBlurButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.SpawnInventoryInLobby
struct UWBP_Lobby_Main_C_SpawnInventoryInLobby_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.BndEvt__Kamikaze+Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
struct UWBP_Lobby_Main_C_BndEvt__Kamikaze_Buttom_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.CustomEvent_4
struct UWBP_Lobby_Main_C_CustomEvent_4_Params
{
};

// Function WBP_Lobby_Main.WBP_Lobby_Main_C.ExecuteUbergraph_WBP_Lobby_Main
struct UWBP_Lobby_Main_C_ExecuteUbergraph_WBP_Lobby_Main_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

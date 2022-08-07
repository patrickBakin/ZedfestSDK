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

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75
struct UBP_Horde_Instance_C_OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75
struct UBP_Horde_Instance_C_OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_ADFC0EF542F1B27C889384BE50B9D085
struct UBP_Horde_Instance_C_OnFailure_ADFC0EF542F1B27C889384BE50B9D085_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_ADFC0EF542F1B27C889384BE50B9D085
struct UBP_Horde_Instance_C_OnSuccess_ADFC0EF542F1B27C889384BE50B9D085_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnFailure_B5CCDC1445F0188FC71C25AC3E353195
struct UBP_Horde_Instance_C_OnFailure_B5CCDC1445F0188FC71C25AC3E353195_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSuccess_B5CCDC1445F0188FC71C25AC3E353195
struct UBP_Horde_Instance_C_OnSuccess_B5CCDC1445F0188FC71C25AC3E353195_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.JoinServer
struct UBP_Horde_Instance_C_JoinServer_Params
{
	struct FBlueprintSessionResult*                    SessionToJoin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    LevelImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.LaunchGame
struct UBP_Horde_Instance_C_LaunchGame_Params
{
	int*                                               NumberOfPlayers;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnableLan_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Servername;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FSessionPropertyKeyPair>*            PropertyString;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      Map;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HasPassword_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    LevelImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_GameModeState>*                      GameModeState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Server_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ShowLoadingScreen
struct UBP_Horde_Instance_C_ShowLoadingScreen_Params
{
	class UObject**                                    LevelImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.SPLoadingScreen
struct UBP_Horde_Instance_C_SPLoadingScreen_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ReceiveInit
struct UBP_Horde_Instance_C_ReceiveInit_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance
struct UBP_Horde_Instance_C_ChangeMenuCharInstance_Params
{
	int*                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.SetPlayerStart
struct UBP_Horde_Instance_C_SetPlayerStart_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.SaveData
struct UBP_Horde_Instance_C_SaveData_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnLoad
struct UBP_Horde_Instance_C_OnLoad_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharIngameInstance
struct UBP_Horde_Instance_C_ChangeCharIngameInstance_Params
{
	class USkeletalMesh**                              AssaultMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              NukerMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              StalkerMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              GunnerMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeMenuCharInstance1
struct UBP_Horde_Instance_C_ChangeMenuCharInstance1_Params
{
	class USkeletalMesh**                              AssaultMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              NukerMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              StalkerMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              DoctorMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              SavageMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangePrimaryWeaponInstance
struct UBP_Horde_Instance_C_MenuChangePrimaryWeaponInstance_Params
{
	class UClass**                                     AssaultClass;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NukerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StalkerClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DoctorClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SavageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponInt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponLvlInt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              P_U_G_S_Upgrade_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeClass_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.SetMeshWhenJoiningLobby
struct UBP_Horde_Instance_C_SetMeshWhenJoiningLobby_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassHPInstance
struct UBP_Horde_Instance_C_ChangeClassHPInstance_Params
{
	float*                                             _0_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             _1_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             _2_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             _3_;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeSecondaryWeaponInstance
struct UBP_Horde_Instance_C_MenuChangeSecondaryWeaponInstance_Params
{
	class UClass**                                     AssaultClass;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NukerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StalkerClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DoctorClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SavageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponInt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponLvlInt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              P_U_G_S_Upgrade_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeClass_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeCharFromLobbyClassButtons
struct UBP_Horde_Instance_C_ChangeCharFromLobbyClassButtons_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.PreviewCharacterMenu
struct UBP_Horde_Instance_C_PreviewCharacterMenu_Params
{
	class USkeletalMesh**                              AssaultMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              NukerMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              StalkerMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              GunnerMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewEvent
struct UBP_Horde_Instance_C_CharacterPreviewEvent_Params
{
	bool*                                              Bought_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              PreviewMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.CharacterPreviewRelease
struct UBP_Horde_Instance_C_CharacterPreviewRelease_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponsPreviewEvent
struct UBP_Horde_Instance_C_WeaponsPreviewEvent_Params
{
	class UClass**                                     PreviewWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.CharSelectionPanelRef
struct UBP_Horde_Instance_C_CharSelectionPanelRef_Params
{
	class UCharacterSelectionPanel1_C**                Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.WeaponSkinPreviewEvent
struct UBP_Horde_Instance_C_WeaponSkinPreviewEvent_Params
{
	class UMaterialInstance**                          SkinMaterial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeWeaponSkinInstance
struct UBP_Horde_Instance_C_MenuChangeWeaponSkinInstance_Params
{
	class UMaterialInstance**                          SkinMat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.LockMenuCamera
struct UBP_Horde_Instance_C_LockMenuCamera_Params
{
	bool*                                              LockMenuCamera;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EventCharVoiceCaller
struct UBP_Horde_Instance_C_EventCharVoiceCaller_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeMeleeWeaponInstance
struct UBP_Horde_Instance_C_MenuChangeMeleeWeaponInstance_Params
{
	class UClass**                                     AssaultClass;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NukerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StalkerClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DoctorClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SavageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponInt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WeaponLvlInt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              P_U_G_S_Upgrade_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeClass_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EmotePreviewEvent
struct UBP_Horde_Instance_C_EmotePreviewEvent_Params
{
	class UAnimMontage**                               PreviewAnimationMontage;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Selected_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EventPlayTaunt
struct UBP_Horde_Instance_C_EventPlayTaunt_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EventUpdateWeeklyCard
struct UBP_Horde_Instance_C_EventUpdateWeeklyCard_Params
{
	int*                                               MonthIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MainMenuRef
struct UBP_Horde_Instance_C_MainMenuRef_Params
{
	class UMainMenu_CardViewTabbed_C**                 Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EventCloseSeasonalObjectivesBorder
struct UBP_Horde_Instance_C_EventCloseSeasonalObjectivesBorder_Params
{
	bool*                                              Close_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ChangeClassInLobbyFromCharselection
struct UBP_Horde_Instance_C_ChangeClassInLobbyFromCharselection_Params
{
	int*                                               ClassInt;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyScreeenRef
struct UBP_Horde_Instance_C_LobbyScreeenRef_Params
{
	class UWBP_Lobby_Main_C**                          LobbyRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MeleeWeaponPreviewEvent
struct UBP_Horde_Instance_C_MeleeWeaponPreviewEvent_Params
{
	class UClass**                                     MeleeWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.MenuChangeGrenadeWeaponInstance
struct UBP_Horde_Instance_C_MenuChangeGrenadeWeaponInstance_Params
{
	class UClass**                                     AssaultClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NukerClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     StalkerClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DoctorClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     SavageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ChangeClass_;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.GrenadeWeaponPreviewEvent
struct UBP_Horde_Instance_C_GrenadeWeaponPreviewEvent_Params
{
	class UClass**                                     GrenadeWeapon;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.CheatConsoleClose
struct UBP_Horde_Instance_C_CheatConsoleClose_Params
{
	struct FString*                                    CheatText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.1_WhenTabIsClicked
struct UBP_Horde_Instance_C__1_WhenTabIsClicked_Params
{
	struct FString*                                    String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.PauseScreenRef
struct UBP_Horde_Instance_C_PauseScreenRef_Params
{
	class UPauseMenu_CardViewTabbed_C**                PauseRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.EndScreenRef
struct UBP_Horde_Instance_C_EndScreenRef_Params
{
	class UDemoWidget_C**                              EndScreenRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.PlaceCurrentSelectedCharInFrontEvent
struct UBP_Horde_Instance_C_PlaceCurrentSelectedCharInFrontEvent_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.SendDiscordRPC
struct UBP_Horde_Instance_C_SendDiscordRPC_Params
{
	struct FDiscordRichPresence*                       Discord_RPC;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.LobbyToCharSelectionWeaponInt
struct UBP_Horde_Instance_C_LobbyToCharSelectionWeaponInt_Params
{
	int*                                               WeaponSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.OnSessionInviteAccepted
struct UBP_Horde_Instance_C_OnSessionInviteAccepted_Params
{
	int*                                               LocalPlayerNum;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId*                             PersonInvited;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult*                    SessionToJoin;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.HordeInsOpenCheatConsole
struct UBP_Horde_Instance_C_HordeInsOpenCheatConsole_Params
{
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.StorePugsRef
struct UBP_Horde_Instance_C_StorePugsRef_Params
{
	class UW_Store_C**                                 WStoreRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Horde_Instance.BP_Horde_Instance_C.ExecuteUbergraph_BP_Horde_Instance
struct UBP_Horde_Instance_C_ExecuteUbergraph_BP_Horde_Instance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

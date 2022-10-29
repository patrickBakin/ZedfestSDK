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

// BlueprintGeneratedClass BP_Horde_Instance.BP_Horde_Instance_C
// 0x053C (0x0724 - 0x01E8)
class UBP_Horde_Instance_C : public UBPAdvancedFriendInstance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       Servername;                                               // 0x01F0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                Max_Players;                                              // 0x0208(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FPlayableLevels>                     AvailableLevels;                                          // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ULoadingScreen_Widget_C*                     LoadingScreenWB;                                          // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USpashLevelWidget_C*                         SplashScreen;                                             // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HasPassword_;                                             // 0x0230(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	struct FString                                     Password;                                                 // 0x0238(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                Difficulty;                                               // 0x0248(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FriendlyBots;                                             // 0x024C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerStart*>                        PlayerStartVariable;                                      // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ASlotCharParent_BP_C*                        MenuCharInstance;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USaveGameBP_C*                               SaveGame;                                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EuroCurrency;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HexagonCurrency;                                          // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMesh*>                       Mesh;                                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               Shoes;                                                    // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              MainWeaponArray;                                          // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ClassIntSlot;                                             // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<float>                                      ClassHP;                                                  // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ClassShield;                                              // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      SprintSpeed;                                              // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CurrentClassLevel;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CurrentClassXP;                                           // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      NeededClassXP;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SecWeaponArray;                                           // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WaveAmount;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	TArray<bool>                                       CharactersBought;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       WeaponsBought;                                            // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCharHovered_;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0341(0x0007) MISSED OFFSET
	TArray<bool>                                       SelectedPerk;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCharacterSelectionPanel1_C*                 CharSelectPanelRef;                                       // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<bool>                                       WeaponSkinBought;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstance*>                   WeaponSKin;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WeaponSkinIndex;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<bool>                                       WeaponSkinSelected;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LockMenuAutoCamera;                                       // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<int>                                        PersonalOverallStats;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              MeleeWeaponArray;                                         // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       EmotesBought;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        EmoteSelected;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        WeaponIntSlot;                                            // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMainMenu_CardViewTabbed_C*                  MainMenuTabbedRef;                                        // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWBP_Lobby_Main_C*                           LobbyRef;                                                 // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ThrowableWeaponArray;                                     // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      StartingAmmoMultiplier;                                   // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ThrowableInventoryAmount;                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SmallMedKitInventoryAmount;                               // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BigMedKitInventoryAmount;                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             CheatArray;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMesh*                               CheatMesh;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CheatMainWeapon;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      ClassWeaponMagSizeMultiplier;                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommandoStruct>                     CommandoLoadOutStruct;                                    // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommandoStruct>                     NukerLoadOutStruct;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommandoStruct>                     TorpedoLoadOutStruct;                                     // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommandoStruct>                     DoctorLoadOutStruct;                                      // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPauseMenu_CardViewTabbed_C*                 PauseMenuRef;                                             // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDemoWidget_C*                               EndscreenMenuRef;                                         // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<float>                                      IngameShopPriceMultiplier;                                // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCommandoStruct>                     BonebreakerLoadOutStruct;                                 // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_GameModeState>                       GameModeState;                                            // 0x04F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	TArray<class ASlotCharParent_BP_C*>                BackgroundCharacters;                                     // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_MainMenuFrontPlayer_C*                   MainMenuFrontPlayer;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       StartWFullArmor;                                          // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AimRunSpeed;                                              // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       HealthRegen;                                              // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        C;                                                        // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      XPRatio;                                                  // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       CommandoWeaponsBought;                                    // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       NukerWeaponsBought;                                       // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       TorpedoWeaponsBought;                                     // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       DoctorWeaponsBought;                                      // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       BonebreakerWeaponsBought;                                 // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ServerID;                                                 // 0x05B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CurrentClassPrestigeLevel;                                // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ClassAddedWeaponDamage;                                   // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DailyChallengeDay;                                        // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	TArray<struct FS_AchievementInformation>           DailyChallengeShuffle;                                    // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ProjectVersion;                                           // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CurrentWeaponXP;                                          // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        NeededWeaponXP;                                           // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        WeaponPrestigeLvl;                                        // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MeleeWeaponDamageMultiplier;                              // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDiscordRpc*                                 DiscordInstance;                                          // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentZedBodyAmount;                                     // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	TArray<int>                                        SecCurrentWeaponXP;                                       // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SecNeededWeaponXP;                                        // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SecWeaponPrestigeLvl;                                     // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeleeCurrentWeaponXP;                                     // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeleeNeededWeaponXP;                                      // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeleeWeaponPrestigeLvl;                                   // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        SecWeaponIntSlot;                                         // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MeleeWeaponIntSlot;                                       // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        ThrowableWeaponIntSlot;                                   // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DailyChallengeRewardNr;                                   // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	TArray<struct FS_AchievementInformation>           SeasonalChallenges;                                       // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                SeasonalChallengesID;                                     // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0704(0x0004) MISSED OFFSET
	class UW_Store_C*                                  PUGSStoreRef;                                             // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             ChatTextArray;                                            // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NrOfPlayerMadness;                                        // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Horde_Instance.BP_Horde_Instance_C");
		return ptr;
	}


	void OnFailure_6159D3B54A7A8C07A1ED83B0BFC56C75();
	void OnSuccess_6159D3B54A7A8C07A1ED83B0BFC56C75();
	void OnFailure_ADFC0EF542F1B27C889384BE50B9D085();
	void OnSuccess_ADFC0EF542F1B27C889384BE50B9D085();
	void OnFailure_B5CCDC1445F0188FC71C25AC3E353195();
	void OnSuccess_B5CCDC1445F0188FC71C25AC3E353195();
	void JoinServer(struct FBlueprintSessionResult* SessionToJoin, class UObject** LevelImage);
	void LaunchGame(int* NumberOfPlayers, bool* EnableLan_, struct FText* Servername, TArray<struct FSessionPropertyKeyPair>* PropertyString, struct FName* Map, bool* HasPassword_, struct FString* Password, int* Difficulty, int* WaveAmount, class UObject** LevelImage, TEnumAsByte<E_GameModeState>* GameModeState, struct FString* Server_ID);
	void ShowLoadingScreen(class UObject** LevelImage);
	void SPLoadingScreen();
	void ReceiveInit();
	void ChangeMenuCharInstance(int* NewParam);
	void SetPlayerStart();
	void SaveData();
	void OnLoad();
	void ChangeCharIngameInstance(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** GunnerMesh);
	void ChangeMenuCharInstance1(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** DoctorMesh, class USkeletalMesh** SavageMesh);
	void MenuChangePrimaryWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_);
	void SetMeshWhenJoiningLobby();
	void ChangeClassHPInstance(float* _0_, float* _1_, float* _2_, float* _3_);
	void MenuChangeSecondaryWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_);
	void ChangeCharFromLobbyClassButtons();
	void PreviewCharacterMenu(class USkeletalMesh** AssaultMesh, class USkeletalMesh** NukerMesh, class USkeletalMesh** StalkerMesh, class USkeletalMesh** GunnerMesh);
	void CharacterPreviewEvent(bool* Bought_, class USkeletalMesh** PreviewMesh);
	void CharacterPreviewRelease();
	void WeaponsPreviewEvent(class UClass** PreviewWeapon, int* Index);
	void CharSelectionPanelRef(class UCharacterSelectionPanel1_C** Ref);
	void WeaponSkinPreviewEvent(class UMaterialInstance** SkinMaterial);
	void MenuChangeWeaponSkinInstance(class UMaterialInstance** SkinMat, int* Index);
	void LockMenuCamera(bool* LockMenuCamera);
	void EventCharVoiceCaller();
	void MenuChangeMeleeWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, int* WeaponInt, int* WeaponLvlInt, bool* P_U_G_S_Upgrade_, bool* ChangeClass_);
	void EmotePreviewEvent(class UAnimMontage** PreviewAnimationMontage, bool* Selected_);
	void EventPlayTaunt();
	void EventUpdateWeeklyCard(int* MonthIndex);
	void MainMenuRef(class UMainMenu_CardViewTabbed_C** Ref);
	void EventCloseSeasonalObjectivesBorder(bool* Close_);
	void ChangeClassInLobbyFromCharselection(int* ClassInt);
	void LobbyScreeenRef(class UWBP_Lobby_Main_C** LobbyRef);
	void MeleeWeaponPreviewEvent(class UClass** MeleeWeapon);
	void MenuChangeGrenadeWeaponInstance(class UClass** AssaultClass, class UClass** NukerClass, class UClass** StalkerClass, class UClass** DoctorClass, class UClass** SavageClass, bool* ChangeClass_);
	void GrenadeWeaponPreviewEvent(class UClass** GrenadeWeapon);
	void CheatConsoleClose(struct FString* CheatText);
	void _1_WhenTabIsClicked(struct FString* String);
	void PauseScreenRef(class UPauseMenu_CardViewTabbed_C** PauseRef);
	void EndScreenRef(class UDemoWidget_C** EndScreenRef);
	void PlaceCurrentSelectedCharInFrontEvent();
	void SendDiscordRPC(struct FDiscordRichPresence* Discord_RPC);
	void LobbyToCharSelectionWeaponInt(int* WeaponSlot);
	void OnSessionInviteAccepted(int* LocalPlayerNum, struct FBPUniqueNetId* PersonInvited, struct FBlueprintSessionResult* SessionToJoin);
	void HordeInsOpenCheatConsole();
	void StorePugsRef(class UW_Store_C** WStoreRef);
	void ExecuteUbergraph_BP_Horde_Instance(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

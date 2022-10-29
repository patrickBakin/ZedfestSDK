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

// BlueprintGeneratedClass BP_Base_HordeController.BP_Base_HordeController_C
// 0x082C (0x0EA4 - 0x0678)
class ABP_Base_HordeController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UC_CXP_Component_C*                          C_CXP_Component;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_SLOMOCURVE_05129D134A77A2742E1B75AECC5D8F0D;   // 0x0688(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_05129D134A77A2742E1B75AECC5D8F0D;   // 0x068C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_SLOMOCURVE_9259363E41117BACC097D1AA294D83FA;   // 0x0698(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_9259363E41117BACC097D1AA294D83FA;   // 0x069C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_SLOMOCURVE_062561F4430FC3521E0B8AB7D141816D;   // 0x06A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_062561F4430FC3521E0B8AB7D141816D;   // 0x06AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_SLOMOCURVE_BA087B094394600227F99A928F833FA8;   // 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_BA087B094394600227F99A928F833FA8;   // 0x06BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Money;                                                    // 0x06C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	struct FText                                       SenderText;                                               // 0x06D0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FText                                       SenderName;                                               // 0x06E8(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FS_Player_Info1                             PlayerSettings;                                           // 0x0700(0x0028) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_Lobby_Main_C*                           Lobby;                                                    // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FS_Player_Info1>                     AllConnectedPlayers;                                      // 0x0730(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectedCharacter;                                        // 0x0740(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrestigeLevel;                                            // 0x0744(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_Scoreboard_C*                           Scoreboard;                                               // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWBP_HUD_C*                                  HUD;                                                      // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       CharacterName;                                            // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UW_WpnCompHUD_C*                             WPNHUD;                                                   // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USpashLevelWidget_C*                         SplashScreen;                                             // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentKillsPerWave;                                      // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalKills;                                               // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MoneyBank;                                                // 0x0778(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSlomo;                                         // 0x0780(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentTimePerWave;                                       // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0CB4(0x0004) MISSED OFFSET
	class UDemoWidget_C*                               LeaderBoardVariable;                                      // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                DecrementTimeScore;                                       // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0CC4(0x0004) MISSED OFFSET
	class AInventoryData_C*                            InventoryData;                                            // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPauseMenu_CardViewTabbed_C*                 PauseMenuReference;                                       // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsPauseMenuOpen_;                                         // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LobbyClosed_;                                             // 0x0CD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0CDA(0x0006) MISSED OFFSET
	class UUMG_TestInventoryMenu_C*                    ItemSelector;                                             // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ChosenTool;                                               // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	TArray<struct FToolData>                           AnnouncementArray;                                        // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       LocalMapName;                                             // 0x0D00(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       LocalDifficultyText;                                      // 0x0D18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       LocalTotalWaves;                                          // 0x0D30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  VoiceToPlay;                                              // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayerName;                                               // 0x0D50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageDone;                                               // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Recording_;                                               // 0x0D5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0D5D(0x0003) MISSED OFFSET
	class UAudioComponent*                             InternmissionMusicVariable;                               // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               CharacterMeshRef;                                         // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMainInventory_C*                            Main_Inventory;                                           // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UW_ConsoleWidget_C*                          CheatBoxVariable;                                         // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<int>                                        EndGameStatIntArray;                                      // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TotalTimePerGame;                                         // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BestMultiplier;                                           // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Bossreference;                                            // 0x0D98(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAssistsPerWave;                                    // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalAssists;                                             // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ¹_E;                                                      // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                T;                                                        // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ¹_S;                                                      // 0x0DB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomSoundAndTextInt;                                    // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHeadshotsPerWave;                                  // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalHeadshots;                                           // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0DC4(0x0004) MISSED OFFSET
	class ABP_Horde_Gamestate_C*                       HordePCGamestate;                                         // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_Horde_Instance_C*                        HordePCGameInstance;                                      // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpectatePlayerInt;                                        // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	class UW_SpectatorScreen_C*                        SpectatorScreenRef;                                       // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               CanSpectate_;                                             // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0DE9(0x0003) MISSED OFFSET
	int                                                Grenadekills;                                             // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MeleeWeaponkills;                                         // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Meleekills;                                               // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ZedfoxxAudio;                                             // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentPlayers;                                           // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0E04(0x0004) MISSED OFFSET
	TArray<class APlayerState*>                        PlayerstateArray;                                         // 0x0E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                BonebreakerPerk37AmmoDrop;                                // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BonebreakerPerk39Running_;                                // 0x0E1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowUI_;                                                  // 0x0E1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayHSsound_;                                             // 0x0E1E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanChangeClassAtPugs_;                                    // 0x0E1F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     GamePlayStateText;                                        // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       GamemodeLocal;                                            // 0x0E30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_KillFeedWidget_C*                        KillFeed;                                                 // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShowKillfeed_;                                            // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0E51(0x0003) MISSED OFFSET
	int                                                WeaponKillsSeasonalChallenge;                             // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                M;                                                        // 0x0E58(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponKillsSeasonalChallenge1;                            // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponKillsSeasonalChallenge2;                            // 0x0E60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	TArray<class USoundBase*>                          MusicArray;                                               // 0x0E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RandomSong;                                               // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	class ABP_Pawn_C*                                  PawnRef;                                                  // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                HeadshotsWhileInAir;                                      // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FadeMusic_;                                               // 0x0E8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0E8D(0x0003) MISSED OFFSET
	int                                                ClassLevel;                                               // 0x0E90(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicFirstPlay_;                                          // 0x0E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	int                                                DoubleKills;                                              // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FreshJoin_;                                               // 0x0E9C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0E9D(0x0003) MISSED OFFSET
	int                                                SecondaryWeaponsKills;                                    // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_HordeController.BP_Base_HordeController_C");
		return ptr;
	}


	void OnRep_FreshJoin_();
	void DiscordSend();
	void GetCurrentAnnouncement(struct FToolData* Output);
	void AddScore(int* Added_Score, bool* Headshot_, bool* LastShot_, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName, bool* DoubleKill_);
	void CharacterCheck();
	void InitPlayerInfo();
	void Client_Play2DSound(class USoundBase** Sound, float* VolumeMultiplier);
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void InpActEvt_EscapeButton_K2Node_InputActionEvent_7(struct FKey* Key);
	void InpActEvt_E_K2Node_InputKeyEvent_6(struct FKey* Key);
	void OnFailure_1E3F902448EAD1CDD4AF91B662FAC50C(int* LeaderboardValue);
	void OnSuccess_1E3F902448EAD1CDD4AF91B662FAC50C(int* LeaderboardValue);
	void OnFailure_738F8ACC4005F6DF6F0811A6B187E027();
	void OnSuccess_738F8ACC4005F6DF6F0811A6B187E027();
	void OnFailure_58EA764D42A1EC038653E2BCF69D3C05(int* LeaderboardValue);
	void OnSuccess_58EA764D42A1EC038653E2BCF69D3C05(int* LeaderboardValue);
	void OnFailure_23D0861A426F031381F87F9B8F07B1C0();
	void OnSuccess_23D0861A426F031381F87F9B8F07B1C0();
	void OnFailure_925001DF4B95A2AFCAA4A9A7D14C2AC5();
	void OnSuccess_925001DF4B95A2AFCAA4A9A7D14C2AC5();
	void OnFailure_09080BC5402550BC1B0613B4E34894DF(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_09080BC5402550BC1B0613B4E34894DF(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_ED59D4374179BCD399D12886E6E2B3BD();
	void OnSuccess_ED59D4374179BCD399D12886E6E2B3BD();
	void OnFailure_AAA8C9EA4449C3EDD2362395E636FE39(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_AAA8C9EA4449C3EDD2362395E636FE39(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_Toggle_Scoreboard_K2Node_InputActionEvent_5(struct FKey* Key);
	void OnFailure_934989E44C6FE8BFA49BE0A047327419(int* LeaderboardValue);
	void OnSuccess_934989E44C6FE8BFA49BE0A047327419(int* LeaderboardValue);
	void OnFailure_6AB578B54E4460E794CE54B16D6E1C3A();
	void OnSuccess_6AB578B54E4460E794CE54B16D6E1C3A();
	void InpActEvt_Enter_Chat_K2Node_InputActionEvent_4(struct FKey* Key);
	void OnFailure_F3A553344116D174FBAADC8966B16BD9();
	void OnSuccess_F3A553344116D174FBAADC8966B16BD9();
	void OnFailure_FBDB8D5D426A9A9B6F233195F8459B41(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_FBDB8D5D426A9A9B6F233195F8459B41(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_D2016EFD451198A315F3C2958119677B(int* LeaderboardValue);
	void OnSuccess_D2016EFD451198A315F3C2958119677B(int* LeaderboardValue);
	void OnFailure_2EFCB3DF41421476A9BC8DAC83D1364E();
	void OnSuccess_2EFCB3DF41421476A9BC8DAC83D1364E();
	void OnFailure_147FEC9A42B98B621EBB4789D511AC5E(int* LeaderboardValue);
	void OnSuccess_147FEC9A42B98B621EBB4789D511AC5E(int* LeaderboardValue);
	void OnFailure_656384744E11F1BCFCA778A39BE57812();
	void OnSuccess_656384744E11F1BCFCA778A39BE57812();
	void OnFailure_2ED92AE541331FCB24E8AD9AE9772986();
	void OnSuccess_2ED92AE541331FCB24E8AD9AE9772986();
	void OnFailure_F9C019C04C25E501152B149FE535DD2E(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_F9C019C04C25E501152B149FE535DD2E(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_CA85B1EA441E41DC2CC7DE8512C84AA9();
	void OnSuccess_CA85B1EA441E41DC2CC7DE8512C84AA9();
	void OnFailure_D94186104AECA4A526C4CB927F5758A1(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_D94186104AECA4A526C4CB927F5758A1(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_0DEAC92448F59F5F001D0C9DE8189FA0();
	void OnSuccess_0DEAC92448F59F5F001D0C9DE8189FA0();
	void OnFailure_EA0700CB42A2155100B632AD43A3C16B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_EA0700CB42A2155100B632AD43A3C16B(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void InpActEvt_CheatCodeButton_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_5(struct FKey* Key);
	void OnFailure_738E0854428402E0C69A069EECB54E26();
	void OnSuccess_738E0854428402E0C69A069EECB54E26();
	void OnFailure_BA5EE531479BDEF89848E59E207E1AE6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_BA5EE531479BDEF89848E59E207E1AE6(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_A81AA0F943B222D85C32619FE4AAAE0A(int* LeaderboardValue);
	void OnSuccess_A81AA0F943B222D85C32619FE4AAAE0A(int* LeaderboardValue);
	void OnFailure_52BF4CC945EBA06DD5EB93B396121BCF();
	void OnSuccess_52BF4CC945EBA06DD5EB93B396121BCF();
	void OnFailure_B795C42244B186F8AA3FB6BEAB82D252();
	void OnSuccess_B795C42244B186F8AA3FB6BEAB82D252();
	void InpActEvt_F2_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt___K2Node_InputKeyEvent_3(struct FKey* Key);
	void I_2(struct FKey* Key);
	void OnFailure_CC39A57A48DA597BC4A4E498DD4F6DA5(int* LeaderboardValue);
	void OnSuccess_CC39A57A48DA597BC4A4E498DD4F6DA5(int* LeaderboardValue);
	void OnFailure_999011AF4E0C6AA6D6C01EBC10BFB0D1();
	void OnSuccess_999011AF4E0C6AA6D6C01EBC10BFB0D1();
	void OnFailure_53C3F0864E1162D1DEA7A08D1D3F9FBC(int* LeaderboardValue);
	void OnSuccess_53C3F0864E1162D1DEA7A08D1D3F9FBC(int* LeaderboardValue);
	void OnFailure_C5FD93C2411AB069FD4B5D8AFFD61C71();
	void OnSuccess_C5FD93C2411AB069FD4B5D8AFFD61C71();
	void OnFailure_3BA4B7634070E5A6D84076A09B79D8BD(int* LeaderboardValue);
	void OnSuccess_3BA4B7634070E5A6D84076A09B79D8BD(int* LeaderboardValue);
	void OnFailure_65BAF9DE47D04C0C448FECA21ECF73DA();
	void OnSuccess_65BAF9DE47D04C0C448FECA21ECF73DA();
	void OnFailure_BECF886B4B911D53409BB8AC81D59A7A(int* LeaderboardValue);
	void OnSuccess_BECF886B4B911D53409BB8AC81D59A7A(int* LeaderboardValue);
	void OnFailure_DB7DF21B4E972A21E1A196BC2E7E46DF();
	void OnSuccess_DB7DF21B4E972A21E1A196BC2E7E46DF();
	void InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_OpenRingMenuButton_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_1(struct FKey* Key);
	void OnFailure_CECE7ACF4D8785E45DEA1086D021A6B9(int* LeaderboardValue);
	void OnSuccess_CECE7ACF4D8785E45DEA1086D021A6B9(int* LeaderboardValue);
	void OnFailure_AC89E3C44543AA5639EC7BA556EA7B8C();
	void OnSuccess_AC89E3C44543AA5639EC7BA556EA7B8C();
	void OnFailure_6BCFF46A459CAEBDD86A548E1DA85919(int* LeaderboardValue);
	void OnSuccess_6BCFF46A459CAEBDD86A548E1DA85919(int* LeaderboardValue);
	void OnFailure_D930CC084430BFA77831D08622A0C6D1();
	void OnSuccess_D930CC084430BFA77831D08622A0C6D1();
	void OnFailure_99BA64074DC1018481C2469B5737182F(int* LeaderboardValue);
	void OnSuccess_99BA64074DC1018481C2469B5737182F(int* LeaderboardValue);
	void OnFailure_D18FC41A4B3A2A5B43160D90C77A1AA4();
	void OnSuccess_D18FC41A4B3A2A5B43160D90C77A1AA4();
	void OnFailure_1002C6D14FA3E0DD8E8B31872C712AC7(int* LeaderboardValue);
	void OnSuccess_1002C6D14FA3E0DD8E8B31872C712AC7(int* LeaderboardValue);
	void OnFailure_E9A4D3824C6F975006EDCEBE8DC30D86();
	void OnSuccess_E9A4D3824C6F975006EDCEBE8DC30D86();
	void OnFailure_1E15EEBE453A6D16565DFE9C48F83936();
	void OnSuccess_1E15EEBE453A6D16565DFE9C48F83936();
	void OnFailure_9A1037514860DF32DD64E2B76D2296C4(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_9A1037514860DF32DD64E2B76D2296C4(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void LevelUp();
	void AddXP(float* XpToAdd);
	void AddOnlySkillXp(TEnumAsByte<E_SkillTree>* Skill, float* XP);
	void SkillMaxReached(TEnumAsByte<E_SkillTree>* SkillReached);
	void ReceiveBeginPlay();
	void ResumeTheGame();
	void WaveAmountText(int* WaveAmount);
	void SequencerPCEvent();
	void EnterQuickItem();
	void EventClientCalloutAnnouncement(class USoundBase** Sound);
	void EventMultiCalloutAnnouncement(class USoundBase** Sound);
	void ServerCountDownSound();
	void EventDifferentCharCallout(int* CharacterVoice, bool* FromCharCards_);
	void RemoveWidgets();
	void EventPersonalStatsArray();
	void MoneyBanktick();
	void PCConsoleCheatClose();
	void GameStatEvent(bool* Death_);
	void AddVictoryMoney(int* Money);
	void ChangeStartMoney(int* B);
	void ShowLoadingScreen();
	void ShowUIEvent();
	void FriendlyBotsText(int* FriendlyBots);
	void DifficultyText(int* DifficultyInt);
	void PlayerListEvent();
	void AddScoreEvent(int* Added_Score, bool* Headshot_, class ABP_Base_HordeController_C** Lastshot, int* DamageCauserInt, class AActor** DamageWeapon, struct FName* ZedName, bool* DoubleKill_);
	void MapVoteEvent();
	void MapVoteClient();
	void GameModeText(int* GameModeInt);
	void HeadTextInfo();
	void AddAlivePlayer();
	void SpectateEvent();
	void SpectatorModeWhenDead(bool* Dead_, class UWBP_Lobby_Main_C** LobbyRef);
	void UpdatePlayerInfoFrontFromLobbySpectate();
	void DestroyBP_PawnEtc();
	void RemoveMoney(int* B);
	void ToggleScoreboard();
	void Close_Lobby();
	void AssignPlayer(int* PrestigeLevel, struct FName* CharacterName, struct FName* PlayerName, int* ClassLevel, class USkeletalMesh** CharacterMesh);
	void AssignSelectedCharacter(int* CharacterID, struct FName* CharacterName, class USkeletalMesh** CharacterMesh, int* PrestigeLevel, int* ClassLevel);
	void Kicked();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UpdateNumberOfPlayers(int* CurrentPlayers, int* MaxPlayers);
	void CameraShot();
	void UpdateLobbySettings(class UTexture2D** Map_Image, struct FText* Map_Name, struct FText* MapTime, struct FText* LevelDescription);
	void SlidingScoreEvent(int* score);
	void AddPlayerInfo(TArray<struct FS_Player_Info1>* ConnectedPlayerInfo, TArray<class APlayerState*>* PlayerstateArray);
	void SetupLobbyMenu(struct FText* Server_Name, int* GameModeInt, int* WaveAmount, int* DifficultyInt, int* FriendlyBots, struct FString* ServerID, struct FText* MapName);
	void Server_Lobby_CallUpdate(struct FS_Player_Info1* Player_Info, bool* Changed_Status);
	void EnterChat();
	void PCConsoleOpen();
	void UpdateChat(struct FText* Sender, struct FText* Message, int* PlayerIndex);
	void GetChatMessage(struct FText* TextToSend, bool* ServerMessage_, int* PlayerIndex);
	void Add_Money(int* B);
	void CustomEvent_1();
	void OpenRingMenuEvent(bool* Open_);
	void SomeoneIsTypingMessage(int* PlayerIndex, bool* StoppedTyping_);
	void SomeoneIsTypingClient(struct FText* Sender, int* PlayerIndex, bool* StoppedTyping_);
	void DeflectChallengeEvent();
	void ParryChallengeEvent();
	void SnowballLauncherKillEvent();
	void ChristmassTreeStarKillEvent();
	void ZedCabOOmerKillEvent();
	void AddScoreMoneyEvent(int* ScoreMoney);
	void AssignInventoryData(class AInventoryData_C** InventoryData);
	void ControllerCurrentObjective(struct FText* ObjectiveNameText, struct FText* ObjectiveMittenText, struct FText* ObjectiveText, bool* ShowObjective1Image_, bool* ShowObjective2Image_);
	void HordeIntPCEvent(int* HordeIntPC, bool* ObjectiveMode_);
	void Add3HealthPoints();
	void InvinciblePerk();
	void SpawnAmmoBox();
	void DoctorsArcRifleAddPoints(int* HealthPoints);
	void ExecuteUbergraph_BP_Base_HordeController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

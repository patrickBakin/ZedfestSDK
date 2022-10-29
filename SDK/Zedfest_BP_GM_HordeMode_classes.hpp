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

// BlueprintGeneratedClass BP_GM_HordeMode.BP_GM_HordeMode_C
// 0x02F1 (0x06C1 - 0x03D0)
class ABP_GM_HordeMode_C : public AGameMode_ServerTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_SLOMOCURVE_F4875A48447B8AC776EA6AAE4695E5B6;   // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_F4875A48447B8AC776EA6AAE4695E5B6;   // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_SLOMOCURVE_586DE6D7423A5CF8AD3A69A99DACA133;   // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_586DE6D7423A5CF8AD3A69A99DACA133;   // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_SLOMOCURVE_9D69184642573D78C5CCBC874A77892D;   // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_9D69184642573D78C5CCBC874A77892D;   // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SlomoTimeline_SLOMOCURVE_9E8790BB4D8156F813CAC9854A7289BA;// 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SlomoTimeline__Direction_9E8790BB4D8156F813CAC9854A7289BA;// 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SlomoTimeline;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class APlayerController*>                   Player;                                                   // 0x0420(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               ServerAbleToStart_;                                       // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	TArray<class APlayerStart*>                        SpawnPoints;                                              // 0x0438(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FText                                       Servername;                                               // 0x0448(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                Max_Players;                                              // 0x0460(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UTexture2D*                                  GM_MapImage;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       GM_MapName;                                               // 0x0470(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       GM_MapTime;                                               // 0x0488(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentPlayers;                                           // 0x04A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	TArray<struct FS_Player_Info1>                     ConnectedPlayers;                                         // 0x04A8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Available_Characters;                                     // 0x04B8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                GM_MAPID;                                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Characters;                                               // 0x04D0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                Aliveplayers;                                             // 0x04E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<struct FPlayableLevels>                     AvailableMaps;                                            // 0x04E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FPlayableLevels                             CurrentLevel;                                             // 0x04F8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                              ZedReference;                                             // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Difficulty;                                               // 0x0560(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class USpashLevelWidget_C*                         SplashScreen;                                             // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                FriendlyBots;                                             // 0x0570(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FString                                     LevelReset;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      CurrentPlayersZedMultiplier;                              // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      DifficultyMultiplier;                                     // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              GameModeNames;                                            // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WaveAmount;                                               // 0x05B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x05BC(0x0004) MISSED OFFSET
	TArray<int>                                        WaveAmountArray;                                          // 0x05C0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BossToSpawn;                                              // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ZedArrayInt;                                              // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	TArray<class ABP_KeyCardPickup_C*>                 ObjectivePickup;                                          // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      ObjectivePlaced;                                          // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomObjectiveInt;                                       // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	class ABP_ObjectivePickup_Spawnpoint_C*            ObjectiveSpawnpoint;                                      // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ObjectivePlaced_Spawnpoint_C*            ObjectivePlacedSpawnpoint;                                // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_GameModeState>                       GameModeState;                                            // 0x0618(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	int                                                ObjectiveZedsLeft;                                        // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               ObjectiveNames;                                           // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EndlessAddZeds;                                           // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	TArray<int>                                        ObjectiveOrderArray;                                      // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_Base_AI_SpawnExpand_C*>           EnemySpawnPointsArray;                                    // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Horde_Gamestate_C*                       GameStateRef;                                             // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerState*>                        PlayerstateArray;                                         // 0x0660(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                SpecifiedZedSpawning;                                     // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	TArray<struct FSessionPropertyKeyPair>             SessionProperties;                                        // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentSpawnPoint;                                        // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndlessBosspawnInt;                                       // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsItBossWave_;                                            // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	TArray<class ABP_CameraSpawnPoint_C*>              CameraSpawnPointsArray;                                   // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_Security_Camera_Tracking_C*>      CameraBusyArray;                                          // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_AIStorage_C*                             AiStorageRef;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimeAttackPugsOpen_;                                      // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_HordeMode.BP_GM_HordeMode_C");
		return ptr;
	}


	void ServerTravelBackToLobby();
	void RemoveObjectiveStuff();
	void Game_Start();
	void Lobby_Update_All();
	class APawn* SpawnDefaultPawnFor(class AController** NewPlayer, class AActor** StartSpot);
	void SlomoTimeline__FinishedFunc();
	void SlomoTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnFailure_53F0C10B43420B94BD69E7AAB42F5935();
	void OnSuccess_53F0C10B43420B94BD69E7AAB42F5935();
	void STARTWAVE();
	void K2_PostLogin(class APlayerController** NewPlayer);
	void StartPauseTimer();
	void StartGame();
	void SwapCharacter(class APlayerController** Player_Controller, bool* Changed_Status, class USkeletalMesh** CharacterMesh);
	void Update_ALL();
	void RespawnPlayer(class APlayerController** Controller, class UClass** Character);
	void AddToKickList();
	void Server_Update_GameSettings(class UTexture2D** MapImage, struct FText* MapName, struct FText* MapTime, int* MapID);
	void KickPlayer(int* PlayerId);
	void K2_OnLogout(class AController** ExitingController);
	void ReceiveBeginPlay();
	void CheckAlivePlayers();
	void End_Game(bool* Win_);
	void RemoveAlivePlayer(bool* Remove_);
	void EndRound();
	void WaveSpawn();
	void ShowDifficultyText();
	void ShowFriendlyBotCountText();
	void LoadingScreenWhenChangingLevel(struct FString* MapName);
	void HandleStartingNewPlayer(class APlayerController** NewPlayer);
	void HordeIntEvent(int* HordeInt);
	void ReturnToLobby();
	void Show_WaveAmountText();
	void SequencerToController();
	void GMUnderGroundObjective(int* CurrentObjectiveInt, int* ObjectiveProgressNumber, bool* Finished_);
	void MapVoteEvent();
	void ShowGameModeText();
	void HeadName();
	void ResetSpawnZedsMacro();
	void UpdateServerBrowserProperties();
	void TimeAttackPUGSClosing();
	void CheckZedEventTimer11();
	void StartPauseTimerFirstTime();
	void ExecuteUbergraph_BP_GM_HordeMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

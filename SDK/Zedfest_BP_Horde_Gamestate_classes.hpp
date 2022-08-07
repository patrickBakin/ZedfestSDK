#pragma once

// Zedfest (0.763) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Horde_Gamestate.BP_Horde_Gamestate_C
// 0x0169 (0x04D9 - 0x0370)
class ABP_Horde_Gamestate_C : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Rounds;                                                   // 0x0380(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ZombiesLeft;                                              // 0x0384(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FS_Player_Info1>                     PlayerScore;                                              // 0x0388(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_GameState>                           GamePlay_State;                                           // 0x0398(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class ABP_GM_HordeMode_C*                          GameMode;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                IntermissionSeconds;                                      // 0x03A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Internmission;                                            // 0x03AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	struct FText                                       EventText;                                                // 0x03B0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OpenElevators;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Hissdoors;                                                // 0x03D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoorsExpand;                                              // 0x03D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03DA(0x0002) MISSED OFFSET
	int                                                LivesLeft;                                                // 0x03DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentZombies;                                           // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              GameModeName;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                KeyCards;                                                 // 0x03F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GameModeInt;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentObjective;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FText                                       ObjectiveText;                                            // 0x0408(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                TotalWaves;                                               // 0x0420(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalMoney;                                               // 0x0424(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BossHealth;                                               // 0x0428(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BossMaxHealth;                                            // 0x042C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ObjectiveText2;                                           // 0x0430(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               ButtonEnabled;                                            // 0x0448(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	float                                              GameTimeDilation;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      MoneyMultiplier;                                          // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentDifficulty;                                        // 0x0460(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class ABP_NPC_Base_C*                              Bossreference;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ObjectiveIntLeft;                                         // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ObjectiveIntTotal;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ObjectiveIntLeft2;                                        // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	TArray<int>                                        MapVoteAmount;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       MapVoteSelected;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                BossShield;                                               // 0x04A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BossMaxShield;                                            // 0x04A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PickupsDropped;                                           // 0x04A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ObjectiveProgressNumber;                                  // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkipPauseVoters;                                          // 0x04B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteForBreakVoters;                                       // 0x04B4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBossWave_;                                              // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	int                                                ObjectiveTimerLeft;                                       // 0x04BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ObjectiveTimerLeftText;                                   // 0x04C0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               ObjectiveTimerActive_;                                    // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Horde_Gamestate.BP_Horde_Gamestate_C");
		return ptr;
	}


	void Remove_Zombies_Left(int* B);
	void Add_Zombies_Left(int* B);
	void Change_GameState(TEnumAsByte<E_GameState>* State);
	void ReceiveBeginPlay();
	void Add_Current_Zombie();
	void RemoveCurrentZombie(int* NewParam);
	void AddObjectivePickup();
	void RemoveObjectivePickup();
	void ObjectiveReusableSwitchOpen();
	void ObjectiveButtonDisabled();
	void AddTotalMoney(int* TotalMoney);
	void RemoveTotalMoney(int* TotalMoney);
	void GSUnderGroundObjective(int* CurrentObjectiveInt, int* ObjectiveProgressNumber, bool* Finished_);
	void GS_ZedsLeft();
	void ObjectiveItemPickup(int* Amount);
	void EventStartObjective();
	void ObjectiveObjectPlaced();
	void Siren(class USoundBase** Sound);
	void GameStateDifficulty(int* CurrentDifficulty);
	void ObjectiveUpdaterEvent(int* ObjectiveNumber, int* ObjectiveProgressNumber);
	void ResetObjectivesEvent();
	void StopObjectiveTimer(bool* Start_);
	void ExecuteUbergraph_BP_Horde_Gamestate(int* EntryPoint);
	void OpenElevators__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

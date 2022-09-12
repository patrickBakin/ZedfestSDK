#pragma once

<<<<<<< HEAD
// Zedfest (0.804) SDK
=======
// Zedfest (0.763) SDK
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace ZF
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Horde_PlayerState.BP_Horde_PlayerState_C
// 0x004C (0x04A4 - 0x0458)
class ABP_Horde_PlayerState_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ZombieKills;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerScore;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMoney;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerHealth;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMaxHealth;                                          // 0x0478(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerShield;                                             // 0x047C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerMaxShield;                                          // 0x0480(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ZombieAssists;                                            // 0x0484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Headshots;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipPause_;                                               // 0x048C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	int                                                SkipPauseVoters;                                          // 0x0490(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VoteBreak_;                                               // 0x0494(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	int                                                CurrentWaveKills;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentWaveAssists;                                       // 0x049C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentWaveHS;                                            // 0x04A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Horde_PlayerState.BP_Horde_PlayerState_C");
		return ptr;
	}


	void AddZedkill(bool* Headshot_);
	void AddPlayerScore(int* score);
	void AddPlayerMoney(int* Money);
	void PlayerHealthPS(int* PlayerHealth);
	void PlayerMaxHealthPS(int* PlayerHealth);
	void PlayerShieldPS(int* PlayerShield);
	void PlayerMaxShieldPS(int* PlayerShield);
	void AddZedAssist();
	void VoteSkipPause(bool* SkipPause_, int* CurrentPlayers);
	void RemovePauseVote();
	void VoteForBreak(bool* VoteBreak_, int* CurrentPlayers);
	void ResetWaveInfo();
	void ExecuteUbergraph_BP_Horde_PlayerState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

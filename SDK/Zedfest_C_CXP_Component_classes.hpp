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

// BlueprintGeneratedClass C_CXP_Component.C_CXP_Component_C
// 0x007C (0x0174 - 0x00F8)
class UC_CXP_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Base_HordeController_C*                  PlayerController;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NextLevel;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPRatio;                                                  // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  LevelUpSound;                                             // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddedXP;                                                  // 0x0118(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowPopUp_;                                               // 0x011C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseXPWidget;                                              // 0x011D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UsePopUp;                                                 // 0x011E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x011F(0x0001) MISSED OFFSET
	float                                              PopUpDelay;                                               // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LevelUpTime;                                              // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayEvents_;                                              // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UScrollBox*                                  Scroller;                                                 // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              PopUpTimer;                                               // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class APlayerState*                                CXP_PlayerState;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              XPEarnedInTime;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	class UW_CXP_PopUpText_C*                          XP_PopupWidget;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FString>                             ClassNameString;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_Horde_Instance_C*                        CXP_GameInstanceRef;                                      // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalClassLevel;                                          // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C_CXP_Component.C_CXP_Component_C");
		return ptr;
	}


	void UpdateSKill(TEnumAsByte<E_SkillTree>* Skill, float* Sillxp);
	void OnFailure_DE5D39954BFFD7AE971FEA95B4DAB531();
	void OnSuccess_DE5D39954BFFD7AE971FEA95B4DAB531();
	void OnFailure_6BC9A43C4089481900C640A108A5FEF0(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnSuccess_6BC9A43C4089481900C640A108A5FEF0(struct FName* WrittenAchievementName, float* WrittenProgress, int* WrittenUserTag);
	void OnFailure_CA10BDD94F37C081B2B7D1A8B0C27A23(int* LeaderboardValue);
	void OnSuccess_CA10BDD94F37C081B2B7D1A8B0C27A23(int* LeaderboardValue);
	void OnFailure_1F9C95E046BA49A56946DD9F5D872558();
	void OnSuccess_1F9C95E046BA49A56946DD9F5D872558();
	void Initialize(class ABP_Base_HordeController_C** PlayerController);
	void AddXP(float* XpToAdd);
	void UpdateHud();
	void CheckForLevelUp();
	void LevelupEvents();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_C_CXP_Component(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

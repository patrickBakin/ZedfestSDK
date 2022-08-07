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

// BlueprintGeneratedClass BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C
// 0x007F (0x09F4 - 0x0975)
class ABP_NPC_AndroidBoss_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         BossWidgetLoc;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            _3Camera;                                                 // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_9F8BD4E74D3B4A3C9D99469D6DBA7034;   // 0x09A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_9F8BD4E74D3B4A3C9D99469D6DBA7034;   // 0x09AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShieldUp_;                                                // 0x09B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09B9(0x0003) MISSED OFFSET
	int                                                AndroidShieldButtonsToSpawn;                              // 0x09BC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AndroidShieldButtonsToSpawnTotal;                         // 0x09C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	TArray<class ABP_AndroidShieldButtons_C*>          AndroidShieldButtons;                                     // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                AndroidTimeRemaining;                                     // 0x09D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enraged_;                                                 // 0x09DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
	TArray<class ABP_Base_AI_SpawnExpand_C*>           ShuffleEnemySpawnPointsRef;                               // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                AddOneSpawnInt;                                           // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_AndroidBoss.BP_NPC_AndroidBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void OnDamaged(float* Damage, class AActor** DamageCauser);
	void ReceiveTick(float* DeltaSeconds);
	void PerformSpecialDamage();
	void Boss25_Event(struct FText* BossQuote);
	void PerformSpecialDamage2();
	void PerformSpecialDamage3();
	void AndroidFrontJumpEvent();
	void AndroidShieldUp(bool* Up_);
	void StopAndroidShieldEvent();
	void PerformSpecialDamage4();
	void EnragedCustomEvent();
	void ExecuteUbergraph_BP_NPC_AndroidBoss(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

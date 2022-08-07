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

// BlueprintGeneratedClass BP_NPC_DroneBoss.BP_NPC_DroneBoss_C
// 0x008F (0x0A04 - 0x0975)
class ABP_NPC_DroneBoss_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         BossWidgetLoc;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Shield_Kupol;                                             // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            _3Camera;                                                 // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_2_027007BA4F2D0E13E29938A41D9B2800;   // 0x09A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_027007BA4F2D0E13E29938A41D9B2800;   // 0x09A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_027007BA4F2D0E13E29938A41D9B2800;   // 0x09A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_38DE990748CC9B5DAC54F4BA06C749C8;   // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_38DE990748CC9B5DAC54F4BA06C749C8;   // 0x09BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Enraged_;                                                 // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldUp_;                                                // 0x09C9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x09CA(0x0002) MISSED OFFSET
	int                                                GlitchFaceThingsToSpawn;                                  // 0x09CC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GlitchFaceThingsToSpawnTotal;                             // 0x09D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GlitchFaceTimeRemaining;                                  // 0x09D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_GlitchFaceButtons_C*>             GlitchFaceThingsArray;                                    // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_GlitchFaceHealthRemover_C*               GlitchFaceHPRemover;                                      // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Base_AI_SpawnExpand_C*>           ShuffleEnemySpawnPointsRef;                               // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                AddOneSpawnInt;                                           // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_DroneBoss.BP_NPC_DroneBoss_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void OnDamaged(float* Damage, class AActor** DamageCauser);
	void ReceiveTick(float* DeltaSeconds);
	void PerformSpecialDamage();
	void Boss25_Event(struct FText* BossQuote);
	void DispenserArcEvent();
	void AndroidShieldUp(bool* Up_);
	void HurtGlitchFaceEvent();
	void ExecuteUbergraph_BP_NPC_DroneBoss(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

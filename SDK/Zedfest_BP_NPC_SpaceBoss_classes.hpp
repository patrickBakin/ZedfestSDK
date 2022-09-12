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

// BlueprintGeneratedClass BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C
<<<<<<< HEAD
// 0x00D5 (0x0A4C - 0x0977)
class ABP_NPC_SpaceBoss_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0977(0x0001) MISSED OFFSET
=======
// 0x00D7 (0x0A4C - 0x0975)
class ABP_NPC_SpaceBoss_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         BossWidgetLoc;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoxHandskeRight;                                          // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoxHandskeLeft;                                           // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadialForceComponent*                       RadialForce;                                              // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            _3Camera;                                                 // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_2_C1F3A3084744737388CEE0A32E69989D;   // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_C1F3A3084744737388CEE0A32E69989D;   // 0x09B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_C1F3A3084744737388CEE0A32E69989D;   // 0x09B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_AF7715A9464D050FEFE1AA8BCC5DEEBA;   // 0x09C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_AF7715A9464D050FEFE1AA8BCC5DEEBA;   // 0x09CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanDamageSwings_;                                         // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enraged_;                                                 // 0x09D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldUp_;                                                // 0x09DA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x09DB(0x0001) MISSED OFFSET
	int                                                DeluxeThingsToSpawn;                                      // 0x09DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeluxeThingsToSpawnTotal;                                 // 0x09E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	TArray<class ABP_DeluxeButtons_C*>                 DeluxeThingsArray;                                        // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                GlitchFaceTimeRemaining;                                  // 0x09F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET
	TArray<class ABP_PlaceObjectiveToUnlock_C*>        PickupsPlacedArray;                                       // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_KeyCardPickup_C*>                 PickupsArray;                                             // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UBillboardComponent*>                 PlacedPickupsArray;                                       // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SpecialDamage2_;                                          // 0x0A30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	TArray<class ABP_Base_AI_SpawnExpand_C*>           ShuffleEnemySpawnPointsRef;                               // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                AddOneSpawnInt;                                           // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_SpaceBoss.BP_NPC_SpaceBoss_C");
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
	void ReceiveTick(float* DeltaSeconds);
	void PerformSpecialDamage();
	void PerformSpecialDamage2();
	void PerformSpecialDamage3();
	void DashTimerEvent();
	void PerformSpecialDamage4();
	void BndEvt__SM_Hammer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void StompGroundEvent();
	void Boss25_Event(struct FText* BossQuote);
	void OnDamaged(float* Damage, class AActor** DamageCauser);
	void DeluxeShieldUp(bool* Up_);
	void StopDeluxeShieldEvent();
	void CustomEvent_1();
	void RivianFrontJumpEvent();
	void EnragedMaterialEvent(bool* Enrage_);
	void ExecuteUbergraph_BP_NPC_SpaceBoss(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C
// 0x00E5 (0x0A5A - 0x0975)
class ABP_NPC_PatrolRouteObjective_3_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce_1;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HeadNamePunkt;                                            // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              HPDispenserCharRef;                                       // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FEffects                                    Effects;                                                  // 0x09A8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PatrolRoute_C*                           PatrolRoute;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               ObjectiveComplete_;                                       // 0x0A58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSpeeding_;                                              // 0x0A59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_PatrolRouteObjective_4.BP_NPC_PatrolRouteObjective_3_C");
		return ptr;
	}


	void UserConstructionScript();
	void PerformSpecialDamage();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void PerformSpecialDamage2();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnDamaged(float* Damage, class AActor** DamageCauser);
	void StartScreenIndicatorNPC_Obj3();
	void NpcObj3Suicide();
	void SuicideVfx();
	void PlayEscortPunchSound();
	void ExecuteUbergraph_BP_NPC_PatrolRouteObjective_4(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

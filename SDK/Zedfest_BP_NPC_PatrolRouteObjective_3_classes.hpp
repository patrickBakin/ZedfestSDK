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

// BlueprintGeneratedClass BP_NPC_PatrolRouteObjective_3.BP_NPC_PatrolRouteObjective_2_C
// 0x00D9 (0x0A51 - 0x0978)
class ABP_NPC_PatrolRouteObjective_2_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        HeadNamePunkt;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              HPDispenserCharRef;                                       // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FEffects                                    Effects;                                                  // 0x09A0(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PatrolRoute_C*                           PatrolRoute;                                              // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsSpeeding_;                                              // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_PatrolRouteObjective_3.BP_NPC_PatrolRouteObjective_2_C");
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
	void PlayEscortPunchSound();
	void ExecuteUbergraph_BP_NPC_PatrolRouteObjective_3(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

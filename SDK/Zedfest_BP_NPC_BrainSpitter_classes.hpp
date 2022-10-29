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

// BlueprintGeneratedClass BP_NPC_BrainSpitter.BP_NPC_BrainSpitter_C
// 0x0030 (0x09A8 - 0x0978)
class ABP_NPC_BrainSpitter_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce_1;                                            // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMesh*>                       NewVar_0_1;                                               // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  NewVar_1_1;                                               // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_BrainSpitter.BP_NPC_BrainSpitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void ExecuteUbergraph_BP_NPC_BrainSpitter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

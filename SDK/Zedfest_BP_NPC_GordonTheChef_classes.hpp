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

// BlueprintGeneratedClass BP_NPC_GordonTheChef.BP_NPC_GordonTheChef_C
// 0x0024 (0x099C - 0x0978)
class ABP_NPC_GordonTheChef_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh_1;                                             // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  CreepMaterials;                                           // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RandomInteger1;                                           // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_GordonTheChef.BP_NPC_GordonTheChef_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void PerformSpecialDamage();
	void ExecuteUbergraph_BP_NPC_GordonTheChef(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

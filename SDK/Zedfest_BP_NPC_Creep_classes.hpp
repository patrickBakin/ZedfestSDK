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

// BlueprintGeneratedClass BP_NPC_Creep.BP_NPC_Creep_C
// 0x001C (0x0994 - 0x0978)
class ABP_NPC_Creep_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  CreepMaterials;                                           // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Random_Creeper_Scale;                                     // 0x0990(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Creep.BP_NPC_Creep_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void ExecuteUbergraph_BP_NPC_Creep(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

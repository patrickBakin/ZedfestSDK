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

// BlueprintGeneratedClass BP_NPC_AssaultRifle.BP_NPC_AssaultRifle_C
// 0x0010 (0x0988 - 0x0978)
class ABP_NPC_AssaultRifle_C : public ABP_NPC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Gun;                                                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_AssaultRifle.BP_NPC_AssaultRifle_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void ExecuteUbergraph_BP_NPC_AssaultRifle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

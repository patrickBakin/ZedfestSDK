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

// BlueprintGeneratedClass BP_NPC_Fleshman.BP_NPC_Fleshman_C
// 0x001F (0x0994 - 0x0975)
class ABP_NPC_Fleshman_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              NewVar_2_1;                                               // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RandomInteger1;                                           // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Fleshman.BP_NPC_Fleshman_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PerformSpecialDamage();
	void OnMeleeAttack(bool* HitSuccess, class UObject** HitCharacter);
	void OnDeath(bool* Head_, class AActor** DamageCauser);
	void PerformSpecialDamage2();
	void BndEvt__BehaviorComponent_K2Node_ComponentBoundEvent_0_OnEndAttackRanged__DelegateSignature();
	void ExecuteUbergraph_BP_NPC_Fleshman(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

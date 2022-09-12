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

// BlueprintGeneratedClass BP_NPC_Creep.BP_NPC_Creep_C
<<<<<<< HEAD
// 0x001D (0x0994 - 0x0977)
class ABP_NPC_Creep_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0977(0x0001) MISSED OFFSET
=======
// 0x001F (0x0994 - 0x0975)
class ABP_NPC_Creep_C : public ABP_NPC_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
>>>>>>> 797536caccfe399b6e4d522f8bf7978365d4b985
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
